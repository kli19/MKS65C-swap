#include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(){

  time_t currentTime = time(NULL);
  //printf("This is the current time: %s\n", ctime(&currentTime));
  
  int arr[10];
  srand(currentTime);

  printf("This is a random number: %d\n", rand());
  
  
  
  
  
}
