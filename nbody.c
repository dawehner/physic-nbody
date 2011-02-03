// Classical nbody simulation

#include <stdio.h>
#include <math.h>

#define COUNT_BODIES 3
#define METHOD_EULER 0

#define METHOD_USED METHOD_EULER

/**
 * r has stored a previous, current and next coordinate foreach body.
 * v has stored a previous, current and next coordinate foreach body.
 */
// Calculate the next timesteps of both r and v.
// Both r and v has to be references/pointers.

double nb_storage_get(double [] array, int type) {
  return array[type]
}

void function nb_timestep(double [] r, double [] v) {
  switch (METHOD_USED) {
    case METHOD_EULER:
	  // ....
	default:
	  // do nothing
  }
}