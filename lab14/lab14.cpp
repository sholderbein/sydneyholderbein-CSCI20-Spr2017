// Created by Sydney Holderbein
// Date Created: Febuary 3, 2017

#include <iostream>
using namespace std;

int main()
{
                                              // Declare all variables
    int coinsToStart = 0;
    int numQuarters = 0;
    int numDimes = 0;
    int numNickels = 0;
    int numPennies = 0;
    
    cout << "Enter your coins below";
    cout << endl;
    cin >> coinsToStart;
    cout << endl;
    cout << endl;
    
    numQuarters = coinsToStart/25;
    numDimes = (numQuarters%25)/10;
    numNickels = ((numQuarters%25)%10)/5;
    numPennies = (((numQuarters%25)%10)%5);
                                              // Change all into dollar amounts
    double amtPennies = numPennies * 0.01;
    double amtQuarters = numQuarters * 0.25;
    double amtDimes = numDimes * 0.1;
    double amtNickels = numNickels * 0.05;
    double dollarAmount = 1.0;
    double percentKept = 0;
    int wholeDollars = 0;
    double centsLeftover = 0;
   
 
                                                // Show user coins depositted
    cout << "You have submitted: " ;        
    cout << endl;
    cout << amtPennies << " in pennies";
    cout << endl;
    cout << amtNickels << " in nickels";
    cout << endl;
    cout << amtDimes << " in dimes";
    cout << endl;
    cout << amtQuarters << " in quarters";
    cout << endl;
    cout << endl;
                                               // Breaking down the dollar amounts
    wholeDollars = (amtDimes + amtNickels + amtPennies + amtQuarters)/1.0;
    centsLeftover = (amtDimes + amtNickels + amtPennies + amtQuarters);
    percentKept = (wholeDollars+centsLeftover)*.109;
    

    cout << "We Keep: $" << percentKept;
    cout << endl;
    cout << endl;
    

    cout << "Here is: $";
    cout << (wholeDollars+centsLeftover) - percentKept;
    return 0;
    
    
    
}
    