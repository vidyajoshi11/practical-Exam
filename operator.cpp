#include <iostream>
using namespace std;

class Power {
  private:
    int x, y;

  public:
    Power() {
      x = 0;
      y = 0;
    }
    Power(int x, int y) {
      this->x = x;
      this->y = y;
    }
    void display() {
      cout << "x = " << x << " y = " << y << endl;
    }
    Power operator+(Power &obj) {
      Power temp;
      temp.x = x + obj.x;
      temp.y = y + obj.y;
      return temp;
    }
    Power operator-(Power &obj) {
      Power temp;
      temp.x = x - obj.x;
      temp.y = y - obj.y;
      return temp;
    }
    Power operator*(Power &obj) {
      Power temp;
      temp.x = x * obj.x;
      temp.y = y * obj.y;
      return temp;
    }
    Power operator/(Power &obj) {
      Power temp;
      temp.x = x / obj.x;
      temp.y = y / obj.y;
      return temp;
    }
};

int main() {
  Power a(2, 3), b(4, 5);
  cout << "a = ";
  a.display();
  cout << "b = ";
  b.display();
  cout << "a + b = ";
  (a + b).display();
  cout << "a - b = ";
  (a - b).display();
  cout << "a * b = ";
  (a * b).display();
  cout << "a / b = ";
  (a / b).display();
  return 0;
}
