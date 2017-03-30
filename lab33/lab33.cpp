// Created By: Sydney Holderbein    
// Created On: March 30, 2017

// Create a guessing game where user inputs a number between 1 and 50. 
// Prompt user to guess higher or lower until they guess the correct number

#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

int userGuess;
int computerGuess;


int GuessingGame(int userGuess);


int main(){

    srand(time(0));
    computerGuess = (rand() % 50) + 1;
     
    cout << "Please enter a number between 1 and 50:" << endl;                  // taking user input
    cin >> userGuess;
    
    
    if (userGuess < 1){                                                         // error messages
        cout << "error";    
    }
    else if (userGuess > 50){
        cout << "error";
    }
    
    
    
    while (userGuess < computerGuess){
        cout << "guess lower";
        return userGuess;
    }
    
    while (userGuess > computerGuess){
        cout << "guess higher";
        return userGuess;
    }

    
    cin >> userGuess;    
    cout << "you win!";
        

    
    
    
    for (userGuess; userGuess>computerGuess; --userGuess){
        cout << " Try guessing a number like";
        cout << userGuess;
    }
    
    for (userGuess; userGuess<computerGuess; ++userGuess){
        cout << "Try guessing a number like";
        cout << userGuess;
    }
    



}
