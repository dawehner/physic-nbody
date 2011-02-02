#include <stdio.h>
#include <math.h>


int array_middle(int *Array, int size) {
  int middle, sum, i;

  middle = 0;
  sum = 0;

  for( i = 0; i < size; ++i ) {
    sum = sum + Array[i];
  }
  middle = sum / size;

  return middle;
}

int main() {
  int Array[5] = { 1, 2, 3, 4, 5 };
  printf("%d", array_middle(Array, 5));
  return 0;
}