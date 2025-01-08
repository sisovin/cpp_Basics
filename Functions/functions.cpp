/* **********************************
 * Functions
 * **********************************/
// D:/CGroupProjects/CPP_Basics/Functions/functions.cpp
// Run: g++ -o debug/functions Functions/functions.cpp
// Run: ./functions
// Run: .\debug\functions.exe

#include <iostream>
using namespace std;

// Function declaration
int addNumbers(int num1, int num2);

int main()
{
  // Call the function and store the result
  int sum = addNumbers(4, 60);
  // Output the result
  cout << sum << endl;

  return 0;
}

// Function definition
int addNumbers(int num1, int num2)
{
  return num1 + num2;
}