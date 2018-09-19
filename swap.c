#include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(){

  time_t currentTime = time(NULL);
  //printf("This is the current time: %s\n", ctime(&currentTime));
  
  srand(currentTime);
  //printf("This is a random number: %d\n", rand());

  int arr[10];
  int ARR[10];
  int *arr_Pointer = arr;
  int *ARR_Pointer = ARR + 9;

  //populating first 9 slots of arr with random ints
  for (int i = 0; i < 9; i++){
    arr[i] = rand();
  }

  //setting last slot of arr to 0
  arr[9] = rand();

  for (int i = 0; i < 10; i++){
    *(ARR_Pointer - i)   = *(arr_Pointer + i);
  }

  printf("-----------------------PRINTING OUT FIRST ARRAY-----------------------\n"); 
  for (int i = 0; i < 10; i++){
    printf("arr[%d]: %d\n", i, arr[i]); 
  }

  printf("-----------------------PRINTING OUT SECOND ARRAY-----------------------\n"); 
  for (int i = 0; i < 10; i++){
    printf("ARR[%d]: %d\n", i, ARR[i]); 
  }
  
  
  
}
