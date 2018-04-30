// GNU C++ COMPILER v4.8.2
#include <iostream>

using namespace std;

class Base
{
public:
  Base() : a(13), b(8) {}
protected:
  int f() { return a; }
  int b;
private:
  int a;
};

class Derived : public Base
{
public:
  int g() { return f() + b; }
};

class MoreDerived : public Derived
{
public:
  int h() { return f() + b; }
};

int main()
{
  MoreDerived md;
  cout << md.h() << endl;

  return 0;
}