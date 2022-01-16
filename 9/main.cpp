#include <iostream>

enum Color
{
    color_black, // assigned 0
    color_red, // assigned 1
    color_blue, // assigned 2
    color_green, // assigned 3
    color_white, // assigned 4
    color_cyan, // assigned 5
    color_yellow, // assigned 6
    color_magenta // assigned 7
};

struct Rectangle
{
    double length{ 1.0 };
    double width{ 1.0 };
};

void printColor(Color color)
{
    switch (color)
    {
    case color_black:
        std::cout << "Black";
        break;
    case color_red:
        std::cout << "Red";
        break;
    case color_blue:
        std::cout << "Blue";
        break;
    case color_green:
        std::cout << "Green";
        break;
    case color_white:
        std::cout << "White";
        break;
    case color_cyan:
        std::cout << "Cyan";
        break;
    case color_yellow:
        std::cout << "Yellow";
        break;
    case color_magenta:
        std::cout << "Magenta";
        break;
    default:
        std::cout << "Who knows!";
    }
}

int main() {
  printColor(color_white);
  return 0;
}