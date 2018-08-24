#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10 //Size of an array
void displayArray(int *p);
int main()
{
	int numbers[SIZE];
	int x,outer,inner,temp;

/* populate the array */
//between 0 to 100, random ints
	srand((unsigned)time(NULL));
	for(x=0;x<SIZE;x++)
		numbers[x] = rand() % 100 + 1;

/* Display the unsorted array */
	puts("Unsorted array:");
	displayArray(numbers);
/* Sort the array */
//Bubble sort
	for(outer=0;outer<SIZE;outer++) //Outer vars
		for(inner=outer+1;inner<SIZE;inner++) //outer +1
		{
			if( numbers[outer] > numbers[inner]) //comparator
			{ //Swapping the variables
				temp = numbers[inner];
				numbers[inner] = numbers[outer];
				numbers[outer] = temp;
				displayArray(numbers);
			}
		}

/* Display the sorted array */
	puts("Sorted array:");
	displayArray(numbers);
	return(0);
}
void displayArray (int *p){
	for (int i = 0; i<SIZE; i++ ){
		printf("%3d",p[i]);
	}
printf("\n");
}
