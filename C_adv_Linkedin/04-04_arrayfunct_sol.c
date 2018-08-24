#include <stdio.h>
#include <ctype.h>

void modify(char *s);

int main()
{
	char string[64];
	puts("Type some text:");
	fgets (string,64,stdin);
	modify(string);
	puts("Modified string");
	puts(string);

	return(0);
}

void modify(char *s){
	printf("%s",s);
	while(*s){
		*s = toupper(*s);
		if (*s == ' ')
		*s = '_';
		s++;
	}
}
