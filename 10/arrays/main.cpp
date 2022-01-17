#include <iostream>
#include <string_view>

void trains() {
  std::string_view str{ "Trains are fast!" };

  std::cout << str.length() << '\n'; // 16
  std::cout << str.substr(0, str.find(' ')) << '\n'; // Trains
  std::cout << (str == "Trains are fast!") << '\n'; // 1

  // Since C++20
  std::cout << str.starts_with("Boats") << '\n'; // 0
  std::cout << str.ends_with("fast!") << '\n'; // 1

  std::cout << str << '\n'; // Trains are fast!
}

void howManySpace() {
  // Ask the user to enter a string
  char buffer[255] {};
  std::cout << "Enter a string: ";
  std::cin.getline(buffer, std::size(buffer));

  int spacesFound{ 0 };
  int bufferLength{ static_cast<int>(std::strlen(buffer)) };
  // Loop through all of the characters the user entered
  for (int index{ 0 }; index < bufferLength; ++index)
  {
      // If the current character is a space, count it
      if (buffer[index] == ' ')
          ++spacesFound;
  }

  std::cout << "You typed " << spacesFound << " spaces!\n";
}

void multidimensionalArray() {
    constexpr int numRows{ 10 };
    constexpr int numCols{ 10 };

    // Declare a 10x10 array
    int product[numRows][numCols]{};

    // Calculate a multiplication table
    for (int row{ 1 }; row < numRows; ++row)
    {
        for (int col{ 1 }; col < numCols; ++col)
        {
            product[row][col] = row * col;
        }
     }

    // Print the table
    for (int row{ 1 }; row < numRows; ++row)
    {
        for (int col{ 1 }; col < numCols; ++col)
        {
            std::cout << product[row][col] << '\t';
        }

        std::cout << '\n';
    }
}

void sort() {
	int array[]{ 30, 50, 20, 10, 40 };

	std::sort(std::begin(array), std::end(array));

	for (int i{ 0 }; i < static_cast<int>(std::size(array)); ++i)
		std::cout << array[i] << ' ';

	std::cout << '\n';
}

void loopMaxScoreStudents() {
  constexpr int scores[]{ 84, 92, 76, 81, 56 };
  constexpr int numStudents{ static_cast<int>(std::size(scores)) };

  int maxScore{ 0 }; // keep track of our largest score
  for (int student{ 0 }; student < numStudents; ++student)
  {
      if (scores[student] > maxScore)
      {
          maxScore = scores[student];
      }
  }

  std::cout << "The best score was " << maxScore << '\n';
}


int main() {
  // using a literal constant
  int numberOfLessonsPerDayLitteral[7]{}; // Ok
  numberOfLessonsPerDayLitteral[0] = 12;
  // using a constexpr symbolic constant
  constexpr int daysPerWeek{ 7 };
  int numberOfLessonsPerDaySymbolicConst[daysPerWeek]{}; // Ok
  numberOfLessonsPerDaySymbolicConst[0] = 11;
  // using an enumerator
  enum DaysOfWeek
  {
      monday,
      tuesday,
      wednesday,
      thursday,
      friday,
      saturday,
      sunday,

      maxDaysOfWeek
  };
  int numberOfLessonsPerDayEnum[maxDaysOfWeek]{};
  numberOfLessonsPerDayEnum[monday] = 10;
  int prime[5]{ 2, 3, 5, 7, 11 }; // use initializer list to initialize the fixed array
  std::cout << prime[4] << '\n';

  loopMaxScoreStudents();

  sort();

  multidimensionalArray();

  howManySpace();

  trains();

  return 0;
}