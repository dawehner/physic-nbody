#include <stdio.h>
#include <math.h>


int array_middle(int *Array) {
  int middle, sum, size, i;

  size = sizeof(Array) / sizeof(int);
  printf("\nsize: %d\n", size);
  middle = 0;
  sum = 0;

  for( i = 0; i < size; ++i ) {
    sum = sum + Array[i];
  }
  printf("sum: %d\n", sum);
  middle = sum / size;
  printf("middle: %d\n", middle);

  return middle;
}

int main() {
  int Array[5] = { 1, 1, 1, 1, 1 };
  printf("%d", array_middle(Array));
  return 0;
}