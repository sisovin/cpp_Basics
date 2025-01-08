/* **********************************
 * If Statements
 * **********************************/
// D:\CGroupProjects\CPP_Basics\IfStatements\If_Statements.cpp
// Run: g++ -o debug/If_Statements IfStatements/If_Statements.cpp
// Run: ./If_Statements
// Run: .\debug\If_Statements.exe

#include <iostream>
using namespace std;

int main()
{
  bool isStudent = false;
  bool isSmart = false;

  if (isStudent && isSmart)
  {
    cout << "You are a student" << endl;
  }
  else if (isStudent && !isSmart)
  {
    cout << "You are not a smart student" << endl;
  }
  else
  {
    cout << "You are not a student and not smart" << endl;
  }

  // >, <, >=, <=, !=, ==
  if (1 > 3)
  {
    cout << "number comparison was true" << endl;
  }

  if ('a' > 'b')
  {
    cout << "character comparison was true" << endl;
  }

  string myString = "cat";
  if (myString.compare("cat") != 0)
  {
    cout << "string comparison was true" << endl;
  }

  return 0;
}