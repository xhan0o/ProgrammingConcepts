/* Program to control SIZE x SIZE LED matrix using SIZE x 2 address bits
Drawing the pattern using address lines with refreshing bits row-wise.
*/
#include <stdio.h>
#define SIZE 4 //Declaring SIZE of LED matrix
int column_pins[SIZE], row_pins[SIZE]; //Column and Row address bits
int pattern[SIZE][SIZE]; // LED pattern desired

//Initialization function making columns low and rows high
void init(void){
  for (int i=0; i<SIZE; i++){
    column_pins[i] = 0;
  }
  for (int i=0; i<SIZE; i++){
    row_pins[i] = 1;
  }
}

//Desplaying Patern matrix
void show_mat(int array[SIZE][SIZE]){
  printf("LED matrix of Size: %d x %d \n",SIZE,SIZE);
  for (int i=0; i<SIZE; i++){
    for (int j=0; j<SIZE; j++){
      printf("%d \t",array[i][j]);
    }
    printf("\n");
  }
}

//Displaying address bits. Columns and Rows
//This function mimics Digital_write in hardware.
void show_add(int column[SIZE],int row[SIZE]){
  printf("Address lines: \n");
  printf("Column: ");
  for (int i=0; i<SIZE; i++){
    printf("%d \t",column[i]);
  }
  printf("\nRow: \t");
  for (int i=0; i<SIZE; i++){
    printf("%d \t",row[i]);
  }
  printf("\n");

}

//Function which changes the address bits according to given pattern
void draw(int array[SIZE][SIZE],int delay){
  for (int row = 0; row < SIZE; row++){
    for (int column = 0; column < SIZE; column++){
    column_pins[column] = array[row][column];
    }
  row_pins[row] = 0;
  //Delay function
  // time_delay (delay);
  show_add(column_pins,row_pins);
  row_pins[row] = 1;
  }
}

//Driver code
int main(){
  init();
  //Pattern to create
  int pattern[SIZE][SIZE] = {{1,0,0,0},
                              {0,0,0,0},
                              {0,0,0,0},
                              {0,0,0,0}};

  show_mat(pattern); //Displaying the pattern
  draw(pattern,10);   //Drawing pattern on LEDs
  return 0;
}
