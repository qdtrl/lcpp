#include <iostream>

using namespace std;

int main()
{
  int x{}, y{};
  cout << "Entrer un entier\n";
  cin >> x;
  cout << "Enter un deuxieme entier\n";
  cin >> y;
  cout << x << " + " << y << " = " << x + y << '\n';
  cout << x << " - " << y << " = " << x - y << '\n';

  return 0;
}