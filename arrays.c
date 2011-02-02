#include <stdio.h>
#include <math.h>


int array_middle(int *Array) {
  int middle, sum, size, i;

  size = sizeof(Array);
  middle = 0;
  sum = 0;

  for( i = 0; i < size; ++i ) {
    middle += Array[i];
  }
  middle = sum / size;

  return size;
}

int main() {
  int Array[5] = { 1, 1, 1, 1, 1 };
  printf("%d", array_middle(Array);
  return 0;
}
