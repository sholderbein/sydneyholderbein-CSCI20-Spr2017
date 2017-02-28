// Created By: Sydney Hplderbein
// Created On: February 28, 2017

// This is a random number generator that takes a users input as its constraint

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int randomGenerator(int&, int&);

int main () {
    int lowNum = 0;
    int highNum = 0;
    
    cout << "Please enter the lowest value before swap" << endl;
    cin >> lowNum;
    cout << endl;
    cout << "Please enter the highest value before swap" << endl;
    cin >> highNum;
    cout << endl;

    randomGenerator(lowNum, highNum);

}
int swap(int& lowNum, int& highNum) {
    
    int x;
    int y;

    x = lowNum;
    y = highNum;
    highNum = x;
    lowNum = y;

}                         

int randomGenerator(int& lowNum, int& highNum) {
    
    swap(lowNum, highNum);
    srand(time(0));
    
    int randomNum;
    randomNum = (rand() % (lowNum - highNum)) + highNum;
    
    cout << "A random number between " << highNum << " and " << lowNum << " is ";
    cout << randomNum;
}