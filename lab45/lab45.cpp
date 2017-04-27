// Created By; Sydney Holderbein
// Created On: April 18, 2017

//This program will create usernames for a website using only STRING 

#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string userFirstName = "Sydney";                                            // user names
    string userLastName  = "Holderbein";
    char choice = 'Y';
    
    
    cout << "Please enter your first name" << endl;                             // get user input
    cin  >> userFirstName;
    cout << "Please enter your last name"  << endl;
    cin  >> userLastName;
    
    if (userFirstName == userLastName){
        cout << "are you sure? these are the same? (Y/N)";
        cin  >> choice;
        
        if (choice == 'N'){
            cout << "Enter your first name";
            cin  >> userFirstName;
            cout << "Enter your last name";
            cin  >> userLastName;
        }
    }
    
    if (userFirstName.length() >10 ){
        cout << "thats too long, enter a first name under 10  characters";
        cin  >> userFirstName;
    }
    if (userLastName.length() > 20){
        cout << "thats too long, enter a last name under 20 characters";
        cin  >> userLastName;
        cout <<  endl;
    }
    
    cout << "Name: " << userFirstName << " " << userLastName << endl << endl;
    cout << "Which of the following user names would you like? " << endl << endl;
    
    cout << userLastName << "." << userFirstName << endl;
    
    userFirstName.push_back('!');
    
    cout << userFirstName << userLastName << endl;
    
    userLastName.resize(1);
    
    cout << userFirstName << userLastName << endl;

}
