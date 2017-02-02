// Created By: Sydney Holderbein
// Date Created: Febuary 2, 2017

// Future Population Prediction

#include <iostream>
using namespace std;

int main()

{
    int secondsPerBirth = 8;                                                                       // Declaring Variables
    int secondsPerDeath = 11;
    int secondsPerMigration = 29;
    int secondsPerNetPersonGained = 15;
    int yearsInFuture = 18;
    int newBabies = 0;
    int secondsPerMonth = 2592000;
    int trialA = 0;
    int pastPopulation = 324473100;
    
    cout<<"United States Future Population Estimate";
    cout<< endl;
    cout<<"How many years in the future would you like to predict?" << endl;                        // Intro
    cin >> yearsInFuture;
    cout<< yearsInFuture << endl;
    cout<< endl;
    
    cout<< "In " << yearsInFuture << " years: ";
    cout<< endl;                                                                                    // Babies Per Year
    cout<< (secondsPerMonth * 12 * yearsInFuture)/secondsPerBirth << " babies will have been born"; 
    
  
    cout << endl;                                                                                  // Deaths Per Year
    cout<< (secondsPerMonth * 12 * yearsInFuture)/secondsPerDeath << " people will have died.";
    cout<< endl;
   
                                                                                                   // Migrants Per Year
    cout<< (secondsPerMonth * 12 * yearsInFuture)/secondsPerMigration << " people will have migrated here.";
    cout<< endl;
    cout<< endl;
    
                                                                                                   //  Computational Math

    cout<< "The total population will have changed to be " << ((secondsPerMonth * 12 * yearsInFuture)/secondsPerNetPersonGained)+ pastPopulation;
    return 0;
     
}

