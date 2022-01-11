#include "header.h"

int getIntegerValueFromUser()
{
  cout << "Entrer un entier: ";
  int input{};
  cin >> input;

  return input;
}

void printAddition(int x, int y)
{
  cout << x << " + " << y << " = " << x + y << "\n";
}