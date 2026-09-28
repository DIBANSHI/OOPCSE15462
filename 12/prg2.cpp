#include <iostream>
using namespace std;
class point {
private:
  int x, y;
public:
  point(int x = 0, int y = 0) : x{x}, y{y} {}
  void show()
  {
     cout << x << "," << y << endl;
  }
  friend point operator+(point p1, point p2);
};
point operator+(point p1, point p2)
{
     return point(p1.x + p2.x, p1.y + p2.y);
}
int main() {
  point p1(10, 5);
  point p2(-1, 6);
  p1.show();
  p2.show();
  point p3 = p1 + p2;
  p3.show();
}
