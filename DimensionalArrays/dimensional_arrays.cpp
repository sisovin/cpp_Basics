/* **********************************
 * 2 Dimensional Arrays
 * **********************************/
// D:/CGroupProjects/CPP_Basics/DimensionalArrays/dimensional_arrays.cpp
// Run: g++ -o debug/dimensional_arrays DimensionalArrays/dimensional_arrays.cpp
// Run: ./dimensional_arrays
// Run: .\debug\dimensional_arrays.exe

#include <iostream>
using namespace std;

int main()
{
  // int  numberGrid[2][3];
  int numberGrid[2][3] = {{1, 2, 3}, {4, 5, 6}};
  numberGrid[0][1] = 99;

  cout << numberGrid[0][0] << endl;
  cout << numberGrid[0][1] << endl;

  return 0;
}