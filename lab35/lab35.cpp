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
    
GameName pile1;
GameName pile2;

pile1.SetNumCandies(8);
cout << "We are starting with " << pile1.GetNumCandies() << " in the first pile" << endl << endl;

pile2.SetNumCandies(10);
cout <<"We are starting with " << pile2.GetNumCandies() << " in the second pile" << endl << endl;

int pileNum = 0;
cout << "Would you like to pick from the first pile or second?" << endl;
cin >> pileNum;
cout << endl;

switch (pileNum) {
    case 1:
        cout << "How many would you like to pick from pile 1?" << endl;
        break;
    case 2:
        cout << "How many would you like to pick from pile 2?" << endl;
        break;
        
        
}

    
    
    
}