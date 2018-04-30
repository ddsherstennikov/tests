#include <iostream>
using namespace std;

class Polygon {
  protected:
    int width, height;
  public:
    void set_values (int a, int b)
      { width=a; height=b;}
 };

class Rectangle: public Polygon {
  public:
    int area ()
      { return width * height; }
 };
 
 class Square: public Rectangle {
  public:
    int area ()
      { return width * width; }
 };

class Triangle: public Polygon {
  public:
    int area ()
      { return width * height / 2; }
  };
  
int main () {
  Rectangle rect;
  Triangle trgl;
  Square sqr;
  rect.set_values (4,5);
  trgl.set_values (4,5);
  sqr.set_values (6,0);
  cout << rect.area() << '\n';
  cout << trgl.area() << '\n';
  cout << sqr.area() << '\n';
  return 0;
}
