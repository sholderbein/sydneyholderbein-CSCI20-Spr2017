// Created By: Sydney Holderbein
// Created On: April 27, 2017

// This program will

#include <iostream>
#include <fstream>
using namespace std;

int main() {
   ifstream studentINFO;     // Input file stream
   string studentName = 0;  // File data
   int grade1 = 0;  // File data
   int grade2 = 0;  // File data
   int grade3 = 0;
   int grade4 = 0;
   int unitsOne = 0;
   int unitsTwo = 0;
   int unitsThree = 0;
   int unitsFour = 0;
   
   
   // Open file
   studentINFO.open("lab46.txt");
   
   /* if (!inFS.is_open()) {
      cout << "Could not open file lab46.txt." << endl;      
      return 1; */
   //}
   
   // Get numbers. If too few, may encounter problems
   studentINFO >> studentName;
   studentINFO >> unitsOne;
   studentINFO >> grade1;
   studentINFO >> unitsTwo;
   studentINFO >> grade2;
   studentINFO >> unitsThree;
   studentINFO >> grade3;
   studentINFO >> unitsFour;
   studentINFO >> grade4;
   
   // Done with file, close it
   studentINFO.close();
   
   // Print numbers read from file
   cout << "Name: ";
   cout << studentName << ":" << endl;
   cout << unitsOne << endl;
   cout << grade1 << endl;
   cout << unitsTwo << endl;
   cout << grade2 << endl;
   cout << unitsThree << endl;
   cout << grade3 << endl;
   cout << unitsFour << endl;
   cout << endl;
   
   return 0;
}
    
    
    
    
    
    
    
    
    
