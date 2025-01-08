/* **********************************
 * Switch Statements
 * **********************************/
// D:\CGroupProjects\CPP_Basics\SwitchStatements\SwitchStatements.cpp
// Run: g++ -o debug/SwitchStatements SwitchStatements/SwitchStatements.cpp
// Run: ./SwitchStatements
// Run: .\debug\SwitchStatements.exe

#include <iostream>
using namespace std;

int main()
{
  char myGrade = 'A';
  switch (myGrade)
  {
  case 'A':
    cout << "You Pass" << endl;
    break;
  case 'F':
    cout << "You fail" << endl;
    break;
  default:
    cout << "Invalid grade" << endl;
  }

  return 0;
}

