#include <stdio.h>
#include <string.h>
struct Index{
  char word[100];
  int line;
};

int splitInput(FILE *fp)
{
    int i = 0,j=0;
    struct Index Index1[100];
    char *cp;
    char *bp;
    char line[255];
    char *array[5000];
    int x;
    int lineCount = 0;
    while (fgets(line, sizeof(line), fp) != NULL) {
        bp = line;
        lineCount++;
        while (1) {
            cp = strtok(bp, ",.!? \n");
            bp = NULL;
            strcpy(Index1[j].word, cp);
            Index1[j].line = lineCount;
          //  printf("%s\n",cp);
            if (cp == NULL || cp == "/n"){
              printf("Hey");
              break;
            }
            //array[i++] = cp;
          printf("Check print - word %i : %s : %d\n", i - 1, cp, lineCount);
          //printf("%s , %d , %d\n",Index1[j].word, Index1[j].line,j );
          j++;
        }
    }
    printf("Hellow1\n");
    for(int i=0 ; i < 15 ; i++){
      printf("Hellow\n");
      printf("%s , %d \n",Index1[i].word, Index1[i].line );
    }
    return 0;
}

int main() {
	FILE *ifp;
	ifp = fopen("text.txt", "r");
	splitInput(ifp);
	printf("Hello World...!!!\n");
	return 0;
}
