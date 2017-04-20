// Created By: Sydney Holderbein
// Created On: April 6, 2017

// This program will play the game where two piles have a set number of candies in each one
// the last person to pick from the piles and leave none wins. 

#include <iostream>
#include <ctime>
using namespace std;

    
class GameName {                                                // declaring class
    private:                                                    // private 
    int numCandies_;
    
    public:                                                     // public
        void SetNumCandies(int n);                              // mutator
        int GetNumCandies();                                    // accesor
    
};


void GameName::SetNumCandies(int n){                            // setting number of candies
    numCandies_ = n;
}

int GameName::GetNumCandies(){                                  // returning number of candies
    return numCandies_;
}


int main(){

int userPick;    
int pileNum = 0;
int compPick=0;
GameName pile1;
GameName pile2;

cout << "We're going to play a game where there are two piles of candies, ";
cout << "you are playing against the computer to see who can pick the last candy."<<endl<<endl;

pile1.SetNumCandies(8);                                                         // declarations of pile beginning numbers
cout << "We are starting with " << pile1.GetNumCandies() << " in the first pile" << endl;

pile2.SetNumCandies(10);
cout <<"We are starting with " << pile2.GetNumCandies() << " in the second pile" << endl << endl;

int firstPile = pile1.GetNumCandies();                                          // setting accessor function value into a variable to use in equations
int secondPile = pile2.GetNumCandies();


for (int i=0; i<(20); i++){

if (firstPile!=0 && secondPile!=0){
                                                                                // USERS TURN

cout << "Would you like to pick from the first pile or second?" << endl;        // prompt user to pick a pile
cin >> pileNum;
    if (pileNum>2){
        cout << "Please pick a valid pile." << endl;
        cin >> pileNum;
    }

switch (pileNum) {                                                              
    case 1:
        cout << "How many would you like to pick from pile 1?" << endl;
        cin >> userPick;
        firstPile = firstPile - userPick;
        cout << "Pile 1 now has " << firstPile << " candies" << endl;
        break;
    case 2:
        cout << "How many would you like to pick from pile 2?" << endl;
        cin >> userPick;
        secondPile = secondPile - userPick;
        cout << "Pile 2 now has " << secondPile << " candies" << endl;
        break;
    default:
        cout << "Pile 1 has " << firstPile << " candies.";
        cout << "Pile 2 has " << secondPile << " candies.";
        break;
}
if (firstPile==0 || secondPile==0){
     cout << "***** YOU WON *****";
     return 0;
}
 
}
        cout << endl;
                                                                                //NOW THE COMPUTER NEEDS TO HAVE A TURN
    int randNum=0;                                                              // Using random function to pick a pile
    srand(time(0));                                                             // Using the time as a base for the random number
    randNum= (rand() % 100 + 1);                                                // Declaring what will make this number random

    
    if (randNum < 50){
        compPick = (rand() % firstPile + 1);
        cout << "The computer took " << compPick << " from the first pile. " << endl;
        firstPile = firstPile - compPick;
        cout << "Pile 1 now has " << firstPile << " candies." << endl <<endl;   // prompt user how many are left on the screen
    }

    if (randNum >= 50){                                 
    compPick = (rand() % secondPile + 1);
    cout << "The computer took " << compPick << " from the second pile. " << endl;
    secondPile = secondPile - compPick;
    cout << "Pile 2 now has " << secondPile << " candies." << endl << endl;

    }
    if (firstPile==0 || secondPile==0){
     cout << "***** YOU LOSE *****";
     return 0;
    }
}
    
    
}