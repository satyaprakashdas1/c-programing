#include <stdio.h> 

int main() 
{ 
	double n = 456321.76514; 
	char str[100]; 
	sprintf(str, "%f", n); 
	printf("the string is: %s\n", str); 
	return 0; 
}
