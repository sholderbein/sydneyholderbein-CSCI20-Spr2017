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
cout << pile1.GetNumCandies();
    
    
    
    
    
}