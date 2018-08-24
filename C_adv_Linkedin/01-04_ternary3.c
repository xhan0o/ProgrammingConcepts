#include <stdio.h>

//Ternary operator
// (Condition) ? True operation : Flase operation

// Nested Use
// (Condition) ? True operation : {(Nested Condition) ? True operation : Flase operation}


int main()
{
	int age;
	char *classification;

	printf("Enter your age: ");
	scanf("%d",&age);

	classification = ( ( age < 19 ) ? "kid" :
		( age < 65 ? "adult" :"geezer" ));
	printf("You are a %s.\n",classification);

	return(0);
}
