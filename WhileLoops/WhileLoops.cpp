/* **********************************
 * While Loops
 * **********************************/
// D:/CGroupProjects/CPP_Basics/WhileLoops/WhileLoops.cpp
// Run: g++ -o debug/WhileLoops WhileLoops/WhileLoops.cpp
// Run: ./WhileLoops
// Run: .\debug\WhileLoops.exe

#include <iostream>
using namespace std;

int main()
{

  int index = 1;
  while (index <= 5)
  {
    cout << index << endl;
    index++;
  }

  do
  {
    cout << index << endl;
    index++;
  } while (index <= 5);

  return 0;
}
