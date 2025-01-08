/* **********************************
 * Arrays
 * **********************************/
// D:/CGroupProjects/CPP_Basics/Arrays/arrays.cpp
// Run: g++ -o debug/arrays Arrays/arrays.cpp
// Run: ./arrays
// Run: .\debug\arrays.exe

#include <iostream>
using namespace std;

int main()
{
  // int luckyNumbers[6];
  int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
  //         indexes:    0  1  2   3   4   5
  luckyNumbers[0] = 90;
  cout << luckyNumbers[0] << endl;
  cout << luckyNumbers[1] << endl;

  return 0;
}