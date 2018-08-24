#include <stdio.h>
#include <stdlib.h>

// Type casting with malloc.
//Malloc assigns the chunk of memory
//Using cast one can cast the chunk of memory
int main()
{
	int *m;

	m = (int *)malloc(16 * sizeof(int));
	if( m == NULL)
		puts("Failed to allocate memory");
	else
		puts("Storage for 16 integers allocated");

	return(0);
}
