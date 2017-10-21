#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
  int tmp = *a; // do docasne promenne uchovame hodnotu z adresy 'a'
  *a = *b; // do promenne na adrese 'a' nahrajeme hodnotu z adresy 'b'
  *b = tmp; // do promenne na adrese 'b' nahrajeme hodnotu docasne promenne
}

int main() {
  int a = 4;
  int b = 6;
  printf("a = %d, b = %d\n", a, b);
  swap(&a, &b); // predame adresy promennych 'a' a 'b'
  printf("a = %d, b = %d\n", a, b);
}

