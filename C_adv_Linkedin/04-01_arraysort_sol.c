#include <stdio.h>
#include <stdlib.h> //qsort function
#include <string.h>

#define SIZE 10

int compare(const void *a, const void *b);

int main()
{
	char string[SIZE];
	int length;
/* populate the array */
fgets(string,SIZE,stdin);
length = strlen(string);
/* Sort the array */
//qsort(Array, Size of an array, Size of data type used, comparator function)
	qsort(string,length,sizeof(char),compare);

/* Display the sorted array */
	puts("Sorted string:");
	printf("%s \n",string);

	return(0);
}

int compare(const void *a, const void *b)
{
	return( *(char *)a - *(char *)b );
}
