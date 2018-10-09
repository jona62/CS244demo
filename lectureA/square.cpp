#include <iostream>

using namespace std;

class Square {
  private:
    int length;
    int width;
    int angle;
  public:
    void setSides(int);
    int getSideLength();
    int perimeter();
    int area();
};

void Square::setSides(int a) {
  length = a;
  width = a;
}

int Square::getSideLength() {
  return length; // we can also return width since width == length
}

int Square::perimeter() {
  return 2 * (length + width);
}

int Square::area() {
  return length * width;
}

int main() {

  int x = 4;

  Square sq;

  sq.setSides(x);

  cout << sq.getSideLength() << endl; //

  cout << sq.perimeter() << endl;

  cout << sq.area() << endl;

  return 0;
}
