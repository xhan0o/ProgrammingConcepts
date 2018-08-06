#include <stdio.h>
#include <string.h>


int main(){
  FILE *ptrF = fopen("text.txt","r");
  //FILE *ptr2F = fopen("text1.txt","w+");
  struct Index{
    char word[100];
    int line;
  };

  int line = 0,i=0;
  char *del;
  struct Index Index1[100];

  char input[512];
  /*while (fgets(line, sizeof(line), fp) != NULL) {
      bp = line;
      lineCount++;
      while (1) {
          cp = strtok(bp, ",.!? \n");
          strcpy( Index1[i].word, del);
          Index1[i].line = line;
          i++;
          bp = NULL;

          if (cp == NULL)
              break;
          array[i++] = cp;
          printf("Check print - word %i : %s : %d\n", i - 1, cp, lineCount);
      }
  }*/
  while ( fgets( input, 512, ptrF)){
    line ++;
    del = strtok(input, ",.!? \n \r\n");
    //while (del != NULL)
    while (1)
    {
    if (del == NULL)
        break;
    //printf ("%s\n",del);
    strcpy( Index1[i].word, del);

    Index1[i].line = line;
    i++;
    del = strtok(NULL, " ");
    }
    //printf("Line: %d >>  %s\n",line,input );
    //fprintf(ptr2F, "%s", input);
  }
  for(i=0 ; i < 15 ; i++){
    printf("%s , %d \n",Index1[i].word, Index1[i].line );

  }
  //printf("End of file");

  fclose(ptrF);
  return 0;
}
