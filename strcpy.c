#include <stdio.h>
#include <string.h>


int main(){

	char* str = "hello, world!";
	char dest[20];
	strcpy(dest,str);
	printf("str = %s\n", str);
	printf("dest = %s\n", dest);
	printf("&str = %p\n", str);
	printf("&dest = %p\n", dest);


	char* str2 = "hello, world!";
	char dest2[21] = {0} ;
	strncpy(dest2,str2,10);
	printf("str2 = %s\n", str2);
	printf("dest2 = %s\n", dest2);
	printf("&str2 = %p\n", str2);
	printf("&dest2 = %p\n", dest2);
	return 0;
}
