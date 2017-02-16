// Created By: Sydney Holderbein
// Date Created: 2-9-17

#include <iostream>
#include <string>
using namespace std;

/*This is a mad-lib interactive, fill-in-the-blank game*/

struct FillIns {
}

int main()
{

string name;                        //declaring variables
string adjective;
string adjective2;
string adjective3;
string adjective4;
string pronoun;
string pronoun2;
string pronoun3;
string pronoun4;
string pronoun5;
string verb;
string verb2;
string verb3;
string noun;
string noun2;
string noun3;


                                    //input user words
cout << "Enter words as shown:" << endl;
cout << endl;
cout << "Enter a first name" << endl;
cin >> name;
cout << "Enter an adjective in each blank, there are 4." << endl;
cin >> adjective;
cin >> adjective2;
cin >> adjective3;
cin >> adjective4;

cout << "Enter a pronoun in each blank, there are 5." << endl;
cin >> pronoun;
cin >> pronoun2;
cin >> pronoun3;
cin >> pronoun4;
cin >> pronoun5;

cout <<"Enter a verb in each blank, there are 3." << endl;
cin >> verb;
cin >> verb2;
cin >> verb3;

cout<< "Enter a noun in each blank, there are 3." << endl;
cout << noun;
cout << noun2;
cout << noun3;
cout <<endl;
cout<< endl;



//filling in mad lib

cout << "Dear parent/guardians of " << name << "" << endl;
cout << name << " has been doing very " << adjective << " this semester" << endl;
cout << pronoun2 << " is also very interested in " << verb << "ing." << endl;
cout << pronoun3 << " need to work on " << verb2 << "ing and " << verb3 << "ing." << endl;
cout << pronoun4 << " is a " << adjective3 << " " << noun2 << "." << endl;
cout << "Overall, " << pronoun5 << " is a " << adjective4 << " student." << endl;
cout << "I enjoy having " << name << " in my " << noun << endl;
cout << "Sincerely, Your Teacher" << endl;

return 0;


}