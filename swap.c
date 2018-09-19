#include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(){

  time_t currentTime = time(NULL);
  int arr[10];

  printf("This is the current time: %s", ctime(&currentTime));
  srand(currentTime);
  
  
}
