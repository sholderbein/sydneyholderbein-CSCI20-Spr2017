// Created By: Sydney Holderbein    
// Created On: March 30, 2017

// Create a guessing game where user inputs a number between 1 and 50. 
// Prompt user to guess higher or lower until they guess the correct number

#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main(){
    
    int userGuess;
    int numRandom;
    int i;
    
    srand(time(0));
    
    numRandom = rand() % 50 + 1;
    
    cout << "guess a number between 1 and 50" << endl;
    cin >> userGuess;
    
    if (userGuess < 1){
        cout << "error";
        return 0;
    }
    
    if (userGuess > 50){
        cout << "error" ;  
        return 0;
    }
    
    for (i=1 ; i<10 ; i++){
    
        while (numRandom != userGuess){
            if (userGuess > numRandom){
                cout << "too high "<< endl;
                
            }
            
            else {
                cout << "too low"<< endl;
                
            }
    cin >> userGuess;}
            
        }
        cout << "Just right!";
    
    if (userGuess < 1)
    cout << "error";
    
    if (userGuess > 1)
    cout < "error" ;   
    
}

