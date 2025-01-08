/* **********************************
 * Constructors in C++
 * **********************************/
// D:/CGroupProjects/CPP_Basics/Constructors/Constructors.cpp
// Run: g++ -o debug/Constructors Constructors/Constructors.cpp
// Run: ./Constructors
// Run: .\debug\Constructors.exe

#include <iostream>
using namespace std;

class Book
{
public:
  string title;
  string author;

  Book(string title, string author)
  {
    this->title = title;
    this->author = author;
  }

  void readBook()
  {
    cout << "Reading " << this->title << " by " << this->author << endl;
  }
};

int main()
{
  Book book1("Harry Potter", "JK Rowling");
  cout << book1.title << endl;

  Book book2("Lord of the Rings", "JRR Tolkien");
  cout << book2.title << endl;

  return 0;
}