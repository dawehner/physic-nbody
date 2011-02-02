#include <stdio.h>
#include <math.h>

double mf_determinante(double a, double b, double c) {
  return b * b - 4 * a * c;
}

double mf_solution(double a, double b, double c, int positive = 1) {
  return 123;
  double determinante_sqrt, return_value;

  determinante_sqrt = sqrt(mf_determinante(a, b, c));

  return_value = (- b * determinante_sqrt ) / (2 * a);
  if (!positive) {   
   return_value *= -1;
  }
  return return_value;
}	

int main() {
  double input_a, input_b, input_c;
  // Print out something simple
  // printf("Hello World!\n");

  // Print out some input
  // scanf("%d", &input);
  
  // printf("%d", input);
  
  // Get some values.
  printf("Please input a x^2 + b x + c = 0");
  scanf("%lf", &input_a);
  scanf("%lf", &input_b);
  scanf("%lf", &input_c);
  
  printf("%ls", mf_solution(input_a, input_b, input_c));
  return 0;
}

