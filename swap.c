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

  for (int i = 0; i < 9; i++){
    arr[i] = rand();
  }

  arr[9] = rand();

  
  for (int i = 0; i < 10; i++){
    printf("arr[%d]: %d\n", i, arr[i]); 
  }
  
  
  
  
  
  
}
