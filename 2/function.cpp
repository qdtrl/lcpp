#include "function.h"

int getIntegerValueFromUser()
{
  std::cout << "Entrer un entier: ";
  int input{};
  std::cin >> input;

  return input;
}

void printAddition(int x, int y)
{
  std::cout << x << " + " << y << " = " << x + y << "\n";
}