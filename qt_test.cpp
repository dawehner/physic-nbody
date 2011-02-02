// my first program in C++

#include <iostream>
#include <QHash>

using namespace std;

int main () {
  cout << "Hello World2!" << endl;

  QHash<int, int> hash;
  hash[0] = 1;
  cout << hash[0] << endl;

  return 0;
}