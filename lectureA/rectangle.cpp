#include <iostream>

using namespace std;

class Rectangle {
  private:
    int length;
    int width;
  public:
    void setSides(int, int);
    int getLength();
    int getWidth();
    int perimeter();
    int area();
};

void Rectangle::setSides(int a, int b) {
  length = a;
  width = b;
}

int Rectangle::getLength() {
  return length;
}

int Rectangle::getWidth() {
  return width;
}

int Rectangle::perimeter() {
  return 2 * (length + width);
}

int Rectangle::area() {
  return length * width;
}

int main() {

  int x = 4;
  int y = 5;

  Rectangle rect;

  rect.setSides(x, y);

  cout << rect.getLength() << endl;
  cout << rect.getWidth() << endl;

  cout << rect.perimeter() << endl;

  cout << rect.area() << endl;

  return 0;
}
