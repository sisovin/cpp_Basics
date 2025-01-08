/* **********************************
 * User Input
 * **********************************/
// D:/CGroupProjects/CPP_Basics/UserInput/user_input.cpp
// Run: g++ -o debug/user_input UserInput/user_input.cpp
// Run: ./user_input
// Run: .\debug\user_input.exe

#include <iostream>
using namespace std;

int main()
{
  string name;
  cout << "Enter your name: ";
  cin >> name;
  cout << "Hello " << name << endl;

  int num1, num2;
  cout << "Enter first num: ";
  cin >> num1;
  cout << "Enter second num: ";
  cin >> num2;
  cout << "Answer: " << num1 + num2 << endl;

  return 0;
}