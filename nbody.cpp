#include <iostream>
#include <Eigen/Dense>
#include <vector>

/**
 * To be able to solve this you have to integrate each equations of motion.
 *
 * Basically here it is:
 *  m q** = G \sum_{k!=j} mj * mk (\vec qk - \vec qj) / |(qk - qk)|^3
 */
using namespace Eigen;
using namespace std;

const double G_CONST = 6.6742E-11;
const double h = 0.01;


void euler_method(vector<Vector2f>& q, vector<Vector2f>& q_dot, vector<double>& weights) {
  // Clone the vector and the q_dot
  vector<Vector2f> q_clone;
  q_clone = q;

  vector<Vector2f> q_dot_clone;
  q_dot_clone = q_dot;

  for (int i = 0; i < 2; i++) {
    Vector2f f;
    Vector2f r;
    f(0) = 0;
    f(1) = 0;

    for (int k = 0; k < 2; k++) {
      for (int j = 0; k < 2; k++) {
        if (k != j) {
          r = q_clone[k] - q_clone[j];
          f += (G_CONST * weights[j] * weights[k] * (q_clone[k] - q_clone[j])) / (r.norm() * r.norm() * r.norm());
        }
      } 
    }

    q_dot[i] = f;
    q[i] = q_clone[i] + h * f;
    std::cout << q[i][0] << "\b";
  }
}


int main()
{
  // Generate weights
  vector<double> weights;
  weights.push_back(2000000);
  weights.push_back(2000000);

  // Generate the starting vectors
  Vector2f a;
  a(0) = 0;
  a(1) = 0;
  Vector2f b;
  b(0) = 1;
  b(1) = 1;
  Vector2f c;
  c(0) = 2;
  c(1) = 2;

  vector<Vector2f> q;
  q.push_back(a);
  q.push_back(b);
  q.push_back(c);

  Vector2f a_dot;
  a_dot(0) = 0;
  a_dot(1) = 0;
  Vector2f b_dot;
  b_dot(0) = 1;
  b_dot(1) = 1;
  Vector2f c_dot;
  c_dot(0) = 2;
  c_dot(1) = 2;

  vector<Vector2f> q_dot;
  q_dot.push_back(a_dot);
  q_dot.push_back(b_dot);
  q_dot.push_back(c_dot);

//   vector<Vector2f> q_dot;

//   std::cout << q[0] << std::endl;
  // Try to implement euler method.
  // do this loop sometimes
  while (true) {
  // for (int loop = 0; loop < 10000; loop++) {
    euler_method(q, q_dot, weights);
  }
}
