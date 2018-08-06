#include <stdio.h>

int main() {
  int arr[7];
  for(int i=0; i<7;i++){
    arr[i]=i*3;
    printf("%d th element in array is %d \n",i,arr[i]);
  }

  return 0;
}
