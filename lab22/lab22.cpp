// Created By: Sydney Holderbein
// Created On: February 23, 2017

// This program will create a random number function

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void RandomNumber()                         // Writing the function
{
    int randNum=0;  
    srand(time(0));                         // Using the time as a base for the random number
    randNum= (rand() % 100 + 1);            // Declaring what will make this number random
    cout << randNum;
    
}

int main()
{
    RandomNumber();                         // Calling the function
}    
 
