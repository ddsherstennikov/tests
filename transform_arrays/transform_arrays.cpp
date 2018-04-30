// Example program
#include <iostream>
#include <string>
#include <array>
#include <algorithm>


int main()
{
    std::array<double,3> a = {1, 2, 3};
    std::array<double,3> b = {4, 5, 6};
    std::transform(a.begin( ), a.end( ), b.begin( ), a.begin( ),std::plus<double>( ));
    
  std::cout << a[0] << " " << a[1] << " " << a[2]; // 5 7 9
}
