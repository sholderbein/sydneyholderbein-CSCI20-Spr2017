// Edited By: Sydney Holderbein
// Date Created: May 9th 2017

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "MyClass.cpp"
using namespace std;

/*
 *  This class is to show how to
 *  break our class into an interface and implementation
 *  file. It will set a member variable to 0 on initialization
 *  and output it using the Output() function.
 */
 
 
 int main() {
  // Create a MyClass Object
  MyClass object;

  //Send a number to the Object
  object.SetNumber(randomNumber());

  // Call the output member function
  object.Output();

  // This ends our program
  return 0;
}
 
 
 
 