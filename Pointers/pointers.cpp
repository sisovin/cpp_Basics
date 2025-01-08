/* **********************************
 * Pointers
 * **********************************/
// Pointers are variables that store the memory address of another variable.
// D:/CGroupProjects/CPP_Basics/Pointers/pointers.cpp
// Run: g++ -o debug/pointers Pointers/pointers.cpp
// Run: ./pointers
// Run: .\debug\pointers.exe

#include <iostream>
using namespace std;

int main()
{
  int num = 10;
  cout << &num << endl;

  int *pNum = &num;
  cout << pNum << endl;
  cout << *pNum << endl;

  return 0;
}