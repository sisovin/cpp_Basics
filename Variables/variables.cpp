// ************************************************
// Variables and Data Types in C
// cpp_Basics/variables/variables.cpp
// Run: g++ -o debug/variables variables/variables.cpp
// Run: ./variables
// Run: .debug\variables.exe
// Output: 10
//         20
//         30
// ************************************************

#include <iostream>
using namespace std;

int main()
{
  string name = "Mike"; // string of characters, not primitive
  char testGrade = 'A'; // single 8-bit character.

  // you can make them unsigned by adding "unsigned" prefix
  short age0 = 10;     // atleast 16-bits signed integer
  int age1 = 20;       // atleast 16-bits signed integer (not smaller than short)
  long age2 = 30;      // atleast 32-bits signed integer
  long long age3 = 40; // atleast 64-bits signed integer

  float gpa0 = 2.5f;      // single percision floating point
  double gpa1 = 3.5;      // double-precision floating point
  long double gpa2 = 3.5; // extended-precision floating point

  bool isTall; // 1 bit -> true/false
  isTall = true;

  name = "John";

  cout << "Your name is " << name << endl;

  return 0;
}