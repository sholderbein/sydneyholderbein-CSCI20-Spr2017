// Created By: Sydney Holderbein
// Date Created: May 4, 2017

// This program

#include <iostream> 
#include <iostream> 
#include <cstring> 
using namespace std;   

int main() {                                                                    // main function    
    int nameLength = 0;                                                         // declaring variable to use as string length 
    char * name = new char;                                                     // creates a pointer to a dynamic variable

    cout << "Please enter a 10 letter word or less" << endl;                        
    cin >> name;                                                                // entering a value to be stored in names pointee

    char * head  = name;                                                        
    char * tail = name;
    nameLength = strlen(*name);

    cout << "Your word is " << firststr << endl;

    if (nameLength<10)
    {
         while (*head != '\0')
         {
                cout << *head;
                head++;
         }
     }
     else
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
     }

     cout << endl;

     tail = &name[strlen(name) - 1];

     if (nameLength < 10)
     {
          while (tail != name)
          {
                 cout << *tail;
                 tail--;
          }
     }
     cout << endl;

     head = name;
     tail = &name[strlen(name) - 1];

     head++;
     tail--;

     if (*head == *tail)
     {
         cout << "It is an palindrome!" << endl;
     }
     else
     {
         cout << "It is not an palindrome" << endl;
     }

     return 0; 
}