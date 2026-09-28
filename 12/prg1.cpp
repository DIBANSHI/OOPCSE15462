#include <iostream>
using namespace std;
class Point {
private:
  int x, y;
public:
  Point(int x, int y) {
    this->x = x;
    this->y = y;
  }
  Point operator+(Point p) {
    Point temp(x + p.x, y + p.y);
    return temp;
  }
  void show() { cout << "(" << x << ", " << y << ")" << endl; }
};
int main() {
  Point p1(10, 5);
  Point p2(-1, 16);
  p1.show();
  p2.show();
  Point p3 = p1 + p2;
  p3.show();
  return 0;
}
