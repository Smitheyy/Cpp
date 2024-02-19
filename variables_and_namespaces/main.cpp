#include <iostream>

namespace v1{
  int x = 7;
}
namespace v2{
  int x = 982;
}


int main(){
  

  int x = 10, y = 12, sum = x + y;
  double price = 7.99;
  std::string name = "Kacper";
  const double pi = 3.14159;
  

  std::cout << "Number x is equal to " << x << '\n';
  std::cout << "V1 of number x is equal to " << v1::x << '\n';
  std::cout << "V2 of number x is equal to " << v2::x << '\n';
  std::cout << "Number y is equal to " << y << '\n';
  std::cout << "Sum of numbers x and y is equal to " << sum << '\n';
  std::cout << "The price of milk is equal to " << price << "zł" << '\n';
  std::cout << "My name is " << name << '\n';
  return 0;
}