#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


class MyClass {
 public:
  /*
   * Constructor
   * Initialize our member variable num_ to 0
   */
  MyClass();
  /*
   * Output our member variable using cout
   */
  void Output();
  void SetNumber(int num);
  int GetNumber();
  int randomNumber();
 private:
  int num_;
};