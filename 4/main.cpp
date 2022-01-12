#include <iostream>

int main()
{
  // Boolean
  std::cout << "bool:\t\t" << sizeof(bool) << " bytes\n";
  // String
  std::cout << "string:\t\t" << sizeof(std::string) << " bytes\n";
  std::cout << "char:\t\t" << sizeof(char) << " bytes\n";
  std::cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes\n";
  std::cout << "char16_t:\t" << sizeof(char16_t) << " bytes\n";
  std::cout << "char32_t:\t" << sizeof(char32_t) << " bytes\n";
  // Integer
  std::cout << "short:\t\t" << sizeof(short) << " bytes\n";
  std::cout << "int:\t\t" << sizeof(int) << " bytes\n";
  std::cout << "long:\t\t" << sizeof(long) << " bytes\n";
  std::cout << "long long:\t" << sizeof(long long) << " bytes\n";
  // Float
  std::cout << "float:\t\t" << sizeof(float) << " bytes\n";
  std::cout << "double:\t\t" << sizeof(double) << " bytes\n";
  std::cout << "long double:\t" << sizeof(long double) << " bytes\n";
  // Binary
  int bin{};
  bin = 0b1011'0010;

        std::cout
        << "Enter your full name: ";
  std::string name{};
  std::getline(std::cin >> std::ws, name);
  //Any variable that should not be modifiable after initialization and whose initializer is known at compile-time should be declared as constexpr.
  //Any variable that should not be modifiable after initialization and whose initializer is not known at compile-time should be declared as const.
  const double gravity{9.8};
  constexpr double pi{3.14};
  std::cout << "Your name is " << name << '\t' << gravity + pi << '\n';

  return 0;
}