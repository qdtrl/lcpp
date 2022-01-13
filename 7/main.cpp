bool isVowel(char c)
{
    switch (c)
    {
        case 'a': // if c is 'a'
        case 'e': // or if c is 'e'
        case 'i': // or if c is 'i'
        case 'o': // or if c is 'o'
        case 'u': // or if c is 'u'
        case 'A': // or if c is 'A'
        case 'E': // or if c is 'E'
        case 'I': // or if c is 'I'
        case 'O': // or if c is 'O'
        case 'U': // or if c is 'U'
            return true;
        default:
            return false;
    }
}
#include <iostream>
#include <cassert>
#include <cmath> // for std::sqrt

bool isPrime(int x)
{
    // if x is negative, 0, or 1, the number is not prime
    if (x <= 1)
        return false;

    // If the number is 2 or higher, we need to see if we can find a divisor
    // We only need to test the numbers between 2 and sqrt(x)
    // since a non-prime number must have at least one divisor
    // less than or equal to its square root.
    // It's fine (just less efficient) if you used test <= x for this exercise

    for (int test{ 2 }; test <= std::sqrt(x); ++test)
    {
        if (x % test == 0) // if x is evenly divisible
            return false; // then this number isn't prime
    }

    return true; // if we didn't find any divisors, then x must be prime
}

void primeTest()
{
    assert(!isPrime(0));
    assert(!isPrime(1));
    assert(isPrime(2));
    assert(isPrime(3));
    assert(!isPrime(4));
    assert(isPrime(5));
    assert(isPrime(7));
    assert(!isPrime(9));
    assert(isPrime(11));
    assert(isPrime(13));
    assert(!isPrime(15));
    assert(!isPrime(16));
    assert(isPrime(17));
    assert(isPrime(19));
    assert(isPrime(97));
    assert(!isPrime(99));
    assert(isPrime(13417));

    std::cout << "Success!\n";
}

int main()
{
  std::cout << isVowel('b') << '\n';
  
  switch (2)
  {
  case 1: // Does not match
      std::cout << 1 << '\n'; // Skipped
  case 2: // Match!
      std::cout << 2 << '\n'; // Execution begins here
  case 3:
      std::cout << 3 << '\n'; // This is also executed
  case 4:
      std::cout << 4 << '\n'; // This is also executed
  default:
      std::cout << 5 << '\n'; // This is also executed
  }
  
  switch (2)
  {
  case 1:
      std::cout << 1 << '\n';
      break;
  case 2:
      std::cout << 2 << '\n'; // Execution begins here
      [[fallthrough]]; // intentional fallthrough -- note the semicolon to indicate the null statement
  case 3:
      std::cout << 3 << '\n'; // This is also executed
      break;
  }
  
  // selection must be declared outside of the do-while so we can use it later
  int selection{};

  do
  {
    std::cout << "Please make a selection: \n";
    std::cout << "1) Addition\n";
    std::cout << "2) Subtraction\n";
    std::cout << "3) Multiplication\n";
    std::cout << "4) Division\n";
    std::cin >> selection;
  }
  while (selection != 1 && selection != 2 &&
    selection != 3 && selection != 4);

  // do something with selection here
  // such as a switch statement

  std::cout << "You selected option #" << selection << "\n";

  for (char c{ 'a' }; c <= 'e'; ++c) // outer loop on letters
	{
		std::cout << c; // print our letter first

		for (int i{ 0 }; i < 3; ++i) // inner loop on all numbers
			std::cout << i;

		std::cout << '\n';
	}

  primeTest();

  return 0;
}