/* **********************************
 * Abstract Classes and Methods in C++
 * **********************************/
// Path: AbstractClassesMethods/AbstractClassesMethods.cpp
// Run: g++ -o debug/AbstractClassesMethods AbstractClassesMethods/AbstractClassesMethods.cpp
// Run: ./AbstractClassesMethods
// Run: .\debug\AbstractClassesMethods.exe

#include <iostream>
using namespace std;

class Vehicle
{
public:
  virtual void move() = 0;
  void getDescription()
  {
    cout << "Vehicles are used for transportation" << endl;
  }
};

class Bicycle : public Vehicle
{
public:
  void move()
  {
    cout << "The bicycle pedals forward" << endl;
  }
};

class Plane : public Vehicle
{
public:
  void move()
  {
    cout << "The plane flies through the sky" << endl;
  }
};

int main()
{
  Plane myPlane;
  myPlane.move();

  return 0;
}