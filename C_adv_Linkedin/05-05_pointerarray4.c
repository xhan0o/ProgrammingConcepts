#include <stdio.h>
#include <string.h>

int main()
{
	char *text = "Pointer Array.\n";
	int x,len;
	len = strlen(text);
	for(x=0;x<len;x++)
	{
		putchar(*(text+x));
	}

	return(0);
}
