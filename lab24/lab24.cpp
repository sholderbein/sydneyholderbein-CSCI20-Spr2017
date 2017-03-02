 // Created By: Sydney Holderbein
 // Date Created: March 2, 2017 
 
 /* This program will accept two values, swap them, and then use them return a 
 random number between those values, it will also convert from pounds and kilograms*/
 
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int randomGenerator(int, int);                                           // Function call definitiins
int swap(int&, int&);


double poundValue = 0;                                                   // cin initiators
double kilogramValue =0;
double generatedNum;                                                     // random number to save the spot

int x;                                                                   // variables used in swap function
int y;
int lowKilograms;
int highKilograms;


int main () 
{
    cout << "Please enter the lowest value in kilograms" << endl;       // Inputting values from user
    cin >> lowKilograms;
    cout << endl;
    cout << "Please enter the highest value in kilograms" << endl;
    cin >> highKilograms;
    cout << endl;

    generatedNum = randomGenerator(lowKilograms, highKilograms);        // assigning the random number to a variable
    cout << "Using "<< generatedNum << " kilograms, we get ";           
    
    kilogramValue = generatedNum;
    cout << 2.20462 * kilogramValue << " pounds" << endl;               // converting to pounds
    cout << "and using " << 2.20462 * kilogramValue << " pounds, we can covert to ";
    cout << (2.20462 * kilogramValue)*0.453592 << endl;                 // converting back to kilograms
    cout << endl;
    
                                                                        // comparing the two numbers
    cout << "Our orignial numer was " << generatedNum << " and our ouput value is " << (2.20462 * kilogramValue)*0.453592;
    
    
}


int randomGenerator(int lowKilograms, int highKilograms) {              // random number generator
                                                                        // used in main function
    swap(lowKilograms, highKilograms);                                  // calling swap function
    srand(time(0));
    
    int randomNum;
    randomNum = (rand() % (lowKilograms - highKilograms)) + highKilograms;

    return randomNum;                                                   // outputs the result
        
}

int swap(int& lowKilograms, int& highKilograms) {                       // swaping values
                                                                        // used in randomGenerator function
    x = lowKilograms;       
    y = highKilograms;
    highKilograms = x;
    lowKilograms = y;

}        