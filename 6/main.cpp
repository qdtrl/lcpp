#include <iostream>
#include "foo.h"
#include "goo.h"
#include "constants.h"

int main()
{
  std::cout << goo::doSomething( 5, 3) << '\n' << foo::doSomething( 5, 3) << '\n';
  
  std::cout << "Enter a radius: ";
  int radius{};
  std::cin >> radius;

  std::cout << "The circumference is: " << 2.0 * radius * constants::pi << '\n';
  
  return 0;
}
