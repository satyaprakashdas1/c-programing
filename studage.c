#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

struct Student { 
	char* name; 
	int id; 
	char age; 
}; 

int comparator(const void* p, const void* q) 
{ 
	return (((struct Student*)p)->age - ((struct Student*)q)->age); 
} 

int main() 
{ 
	int i = 0, n = 5; 

	struct Student arr[n]; 

	arr[0].id = 1; 
	arr[0].name = "Rohan"; 
	arr[0].age = 12; 

	arr[1].id = 2; 
	arr[1].name = "Silu"; 
	arr[1].age = 10; 

	arr[2].id = 3; 
	arr[2].name = "Chandan"; 
	arr[2].age = 8; 

	arr[3].id = 4; 
	arr[3].name = "Anshu"; 
	arr[3].age = 9; 

	arr[4].id = 5; 
	arr[4].name = "Sarbesh"; 
	arr[4].age = 10; 
 
	printf("Unsorted Student Records:\n"); 
	for (i = 0; i < n; i++) { 
		printf("Id = %d, Name = %s, Age = %d \n", 
			arr[i].id, arr[i].name, arr[i].age); 
	} 

	qsort(arr, n, sizeof(struct Student), comparator); 

	printf("\n\nStudent Records sorted by Age:\n"); 
	for (i = 0; i < n; i++) { 
		printf("Id = %d, Name = %s, Age = %d \n", 
			arr[i].id, arr[i].name, arr[i].age); 
	} 

	return 0; 
} 
