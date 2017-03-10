// Created By: Sydney Holderbein
// Date Created: March 7, 2017

/*This program will create a “book” class that captures pieces 
of meta data about each book (title, author, copyright year), and print them back to the user*/

#include <iostream>
#include <string>
using namespace std;

class BookInformation {                                                         // desribe when and how clas is used
    public:
       void SetBookTitle  (string title);                                       // Mutator
       void SetBookAuthor (string author);                                      // Mutator
       void SetBookYear   (int year);                                           // Mutator
       
       string GetBookTitle  ();                                                 // Accessor
       string GetBookAuthor ();                                                 // Accessor
       int GetBookYear      ();                                                 // Accessor
       
       void printBookInformation();                                             // Show the book information
        
        BookInformation(title, author, year);
        
        
    private:                                                                    // Private Variables
        string bookTitle_;
        string bookAuthor_;
        int bookYear_;
    
    };
    
    void BookInformation::SetBookTitle(string title) {                          // Function to show book title
        title = bookTitle;
    }
    
    void BookInformation::SetBookAuthor(string author) {                        // Function to show book author
        bookAuthor = author;
    }
    
    void SetBookYear(int year); {                                               // Function to show book year
        GetBookYear();
    }
    
    string BookInformation::GetBookTitle(){                                        // Pulls from private & returns tile
        return bookTitle;
    }
    
    string BookInformation::GetBookAuthor(){                                       // Pulls from private & returns author
        return bookAuthor;
    }
  
    int BookInformation::GetBookYear(){                                        // Pulls from private & returns year
         return bookYear;
     }
    
    int main () {
        BookInformation book1;
  
        book1.SetBookTitle(Sydney);
        book1.SetBookAuthor (Sydney);
        book1.SetBookYear   (2015);
        
        cout << "What is the first book?" << endl;
        cin  >> bookTitle;
        cout << endl;
        BookInformation::GetBookTitle();
        BookInformation::SetBookTitle();
        
        /*cout << "Who is the author?" << endl;
        cin  >> bookAuthor;
        cout << endl;
        cout << "What year was it published?" << endl;
        cin  >> bookYear;
        cout << endl;*/
        
        
        
        
    }
    
    
    
