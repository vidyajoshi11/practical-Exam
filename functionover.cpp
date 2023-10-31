#include <iostream>
using namespace std;

int power(int x, int y) {
  int result = 1;
  for (int i = 0; i < y; i++) {
    result *= x;
  }
  return result;
}

double power(double x, double y) {
  double result = 1;
  for (int i = 0; i < y; i++) {
    result *= x;
  }
  return result;
}

int main() {
  int x, y;
  cout << "Enter the base: ";
  cin >> x;
  cout << "Enter the exponent: ";
  cin >> y;
  cout << "The power of " << x << " to " << y << " is " << power(x, y) << endl;
  return 0;
}
