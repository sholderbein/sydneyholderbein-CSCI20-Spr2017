// Created By: Sydney Holderbein
// Created On: April 20, 2017

// This program is create user names for a website. 

#include <iostream>
#include <cstring>
using namespace std;


int main(){
    
    char firstName[10]   = "Sydney";
    char lastName[20]    = "Holderbein";
    char dashName[5]     = "-";
    char adjLastName[20] = "CrazyLast";
    char adjFirstName[10]= "CrayFirst";
    string answer = "yes";
    
        
    cout << "What is your first name? ";
    cin  >> firstName;
    cout << "What is your last name? ";
    cin  >> lastName;
    cout << endl;

while (strlen(firstName) > 10){
    cout << "First name too long, try again" << endl;
    cin  >> firstName;
}
while (strlen(lastName) > 20){
    cout << "Last name too long, try again" << endl;
    cin  >> lastName;
}

if (strcmp(firstName, lastName) == 0){
    cout << "These names are the same, are you sure? ('yes' or 'no') ";
    cin  >> answer;    
        if (answer == "no"){
            cout << "retry by entering a new first and last name: ";
            cin >> firstName >> lastName;
        }}

for (int i=0; i< (strlen(lastName)); i++){
adjLastName[i] = lastName[i];
}

for (int i=0; i< (strlen(firstName)); i++){
adjFirstName[i] = firstName[i];
}


for (int i = 0; i < (strlen (lastName)); ++i) {
      if (adjLastName[i] == 'a') {
         adjLastName[i] = 'V';
      }
      if (adjLastName[i] == 'e'){
          adjLastName[i] = '3';
      }
      if (adjLastName[i] == 'i'){
          adjLastName[i] = '1';
      }
      if (adjLastName[i] == 'o'){
          adjLastName[i] = '0';
      }
      }
      
      for (int i = 0; i < (strlen(firstName)); ++i) {
      if (adjFirstName[i] == 's') {
         adjFirstName[i] = '5';
      }
      if (adjFirstName[i] == 'b'){
          adjFirstName[i] = '8';
      }
      if (adjFirstName[i] == 'g'){
          adjFirstName[i] = '8';
      }
      if (adjFirstName[i] == 's'){
          adjFirstName[i] = 'S';
      }
      if (adjFirstName[i] == 'd'){
          adjFirstName[i] = 'D';
      }
      if (adjFirstName[i] == 'a'){
          adjFirstName[i] = 'A';
      }
      if (adjFirstName[i] == 'A'){
          adjFirstName[i] = '8';
      }
      }
      
      

    cout << "Which of these three user names would you like: " << endl << endl;
    cout << firstName << adjLastName << endl;
    cout << lastName << "." << adjFirstName << endl;
    cout << "!" << adjFirstName << "!" << endl;
    
}
