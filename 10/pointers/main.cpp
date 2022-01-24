#include <iostream>

void printByValue(std::string val) // The function parameter is a copy of str
{
    std::cout << val << '\n'; // print the value via the copy
}

void printByReference(const std::string& ref) // The function parameter is a reference that binds to str
{
    std::cout << ref << '\n'; // print the value via the reference
}

void printByAddress(const std::string* ptr) // The function parameter is a pointer that holds the address of str
{
  if (!ptr) // if ptr is a null pointer, early return back to the caller
    return;
  std::cout << *ptr << '\n'; // print the value via the dereferenced pointer
}

void greet(const std::string* name=nullptr) // name now passed by const reference
{
    std::cout << "Hello ";
    std::cout << (name ? *name : "guest") << '\n';

}

int main() {
  int x {5};
  std::cout << x << '\n';
  std::cout << &x << '\n';
  std::cout << *(&x) << '\n';
  
  short value{ 7 }; // &value = 0012FF60
	short otherValue{ 3 }; // &otherValue = 0012FF54

	short* ptr{ &value };

	std::cout << &value << '\n';
	std::cout << value << '\n';
	std::cout << ptr << '\n';
	std::cout << *ptr << '\n';
	std::cout << '\n';

	*ptr = 9;

	std::cout << &value << '\n';
	std::cout << value << '\n';
	std::cout << "ptr   " << ptr << '\n';
	std::cout << *ptr << '\n';
	std::cout << '\n';

	ptr = &otherValue;

	std::cout << &otherValue << '\n';
	std::cout << otherValue << '\n';
	std::cout << ptr << '\n';
	std::cout << *ptr << '\n';
	std::cout << '\n';

	std::cout << sizeof(ptr) << '\n';
	std::cout << sizeof(*ptr) << '\n';

  int* nulptr {nullptr};

  std::cout << nulptr << '\n';

  std::string str{ "Hello, world!" };

  printByValue(str); // pass str by value, makes a copy of str
  printByReference(str); // pass str by reference, does not make a copy of str
  printByAddress(&str); // pass str by address, does not make a copy of str
  greet();

  return 0;
}