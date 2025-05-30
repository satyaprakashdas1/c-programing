
#include <stdlib.h> 

#include <zip.h> 


int main(int argc, char* argv[]) 
{ 
	 
	if (argc > 2 || argc < 2) 
		return -1; 

	
	if (!fopen(argv[1], "r")) 
		return -2; 

	\
	int errorp = 0; 

	 
	zip_t* arch = NULL; 

	
	arch = zip_open(argv[1], 0, &errorp); 

	

	struct zip_stat* finfo = NULL; 

	
	finfo = calloc(256, sizeof(int)); 



	zip_stat_init(finfo); 

	
     
	zip_file_t* fd = NULL; 

	
    
	char* txt = NULL; 

	
     

	int count = 0; 

	
     
	while ((zip_stat_index(arch, count, 0, finfo)) == 0) { 

		
        
		txt = calloc(finfo->size + 1, sizeof(char)); 
		fd = zip_fopen_index( 
			arch, count, 0); 

		zip_fread(fd, txt, finfo->size); 

		printf("file #%i: %s\n\n", count + 1, 
			finfo->name); 
		printf("%s\n\n", 
			txt); 
		free(txt); 

		
		count++; 
	} 
	return 0; 
}
