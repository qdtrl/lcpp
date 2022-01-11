#include "header.h"

int main()
{
  int x{getIntegerValueFromUser()};
  int y{getIntegerValueFromUser()};

  printAddition(x, y);
  return 0;
}