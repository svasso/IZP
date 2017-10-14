/**
    Task:
        Implement function countdown so that the program prints on the first two lines:
        543210
        Konec

        Compile the source code with arguments -pedantic -Wextra -Wall -std=c99
**/
#include <stdio.h>

/**
*   Prints numbers from maxNumber to zero on the first line
*   and Konec on the second line.
*
*   @param maxNumber highest number to be printed
**/



void countdown(int maxNumber){
  for (int i = maxNumber; i >= 0; i--) {
    printf("%d", i);
  }
  printf("\n");
}
int main() {
    countdown(5);
    printf("Konec\n");
    return 0;
}
