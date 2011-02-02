#include <stdio.h>
#include <math.h>

int main() {
  int Ary[5] = { 1, 1, 1, 1, 1 };
  return 0;
}

int array_middle(int *Arr) {
  int middle, sum, size, i;

  size = sizeof(Arr);
  middle = 0;
  sum = 0;

  for( i = 0; i < sizeof(Arr); ++i ) {
    middle += Arr[i];
  }
  middle = sum / size;

  return size;
}
  