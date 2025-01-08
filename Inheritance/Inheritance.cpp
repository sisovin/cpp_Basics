/* **********************************
 * Inheritance in C++
 * **********************************/
// Path: D:/CGroupProjects/CPP_Basics/Inheritance/Inheritance.cpp
// Run: g++ -o debug/Inheritance Inheritance/Inheritance.cpp
// Run: ./Inheritance
// Run: .\debug\Inheritance.exe

#include <iostream>
using namespace std;

// Base class
class Chef
{
public:
  string name;
  int age;

  // Constructor
  Chef(string name, int age)
  {
    this->name = name;
    this->age = age;
  }

  // Methods
  void makeChicken()
  {
    cout << "The chef makes chicken" << endl;
  }

  void makeSalad()
  {
    cout << "The chef makes salad" << endl;
  }

  void makeSpecialDish()
  {
    cout << "The chef makes a special dish" << endl;
  }
};

// Derived class
class ItalianChef : public Chef
{
public:
  string countryOfOrigin;

  // Constructor
  ItalianChef(string name, int age, string countryOfOrigin) : Chef(name, age)
  {
    this->countryOfOrigin = countryOfOrigin;
  }

  // New method
  void makePasta()
  {
    cout << "The chef makes pasta" << endl;
  }

  // Override method
  void makeSpecialDish()
  {
    cout << "The chef makes chicken parm" << endl;
  }
};

int main()
{
  // Create Chef object
  Chef myChef("Gordon Ramsay", 50);
  myChef.makeChicken();

  // Create ItalianChef object
  ItalianChef myItalianChef("Massimo Bottura", 55, "Italy");
  myItalianChef.makeChicken();
  cout << myItalianChef.age << endl;

  return 0;
}