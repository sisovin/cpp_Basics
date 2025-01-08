/* **********************************
 * Classes and Objects in C++
 * **********************************/
// D:/CGroupProjects/CPP_Basics/ClassesObjects/ClassesObjects.cpp
// Run: g++ -o debug/ClassesObjects ClassesObjects/ClassesObjects.cpp
// Run: ./ClassesObjects
// Run: .\debug\ClassesObjects.exe

#include <iostream>
using namespace std;

class Book
{
public:
  string title;
  string author;

  void readBook()
  {
    cout << "Reading " + this->title + " by " + this->author << endl;
  }
};
int main()
{
  Book book1;
  book1.title = "Harry Potter";
  book1.author = "JK Rowling";

  book1.readBook();
  cout << book1.title << endl;

  Book book2;
  book2.title = "Lord of the Rings";
  book2.author = "JRR Tolkien";

  book2.readBook();
  cout << book2.title << endl;

  return 0;
}
