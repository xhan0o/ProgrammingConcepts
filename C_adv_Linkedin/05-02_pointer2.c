#include <stdio.h>

int main()
{
	int f,*fptr;

	fptr = &f; //Placing pointer fptr at adderess of variable f
	*fptr = 69; //Writing value to pointer address
	printf("%d \n", ++*fptr); // Same as writing ++f bacause f and *fptr are same
	return(0);
}
