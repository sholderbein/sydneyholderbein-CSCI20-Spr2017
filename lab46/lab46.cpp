// Created By: Sydney Holderbein
// Created On: April 27, 2017

// This program will

#include <iostream>
#include <fstream>
using namespace std;

int main() {
   ifstream studentINFO;     // Input file stream
   string studentName = "Sydney";  // File data
   char studentArray[5][5];
   int SIZE;
   string printStuff;
   
   
   cout << "What is the students name? " << endl;
   cin  >> studentName;
   
   // Open file
   studentINFO.open("lab46.txt");
   
   // Get numbers
  for (int i=0; i!='z'; i++ )
   studentINFO >> printStuff;
   cout << printStuff;
   

   // Done with file, close it
   studentINFO.close();
   
   
   // Print numbers read from file

   
   return 0;
}
    
    
    
    
    
    
    
    
    
