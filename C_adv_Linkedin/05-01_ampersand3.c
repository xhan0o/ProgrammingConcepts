#include <stdio.h>

int main()
{
	int a[10],*ptra;

	ptra = a;
	printf("Address of a = %p\n",a); //Array's base address is pointer
	printf("Address of a = %p\n",&a); //base address of an array
	printf("Address of a = %p\n",&a[1]); //Because size of int is 4 bytes
	printf("Pointer ptra = %p\n",ptra); // Pointer at base of an array

	return(0);
}
