// Created By: Sydney Holderbein
// Created On: March

//This program will calculate tax based on marital satus and gross wage

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main(){
    
    double grossWageMarried;                                                    //declaring variables
    double grossWageSingle;
    int maritalStatus;
    string personName; 
    double taxWithheld;
    int keepGoing;
    double adjustedWage;
  
                                                                                // Holding variables
    double amount1;                                      
    double amount2;                                     
    double amount3;
    double amount4;
    double amount5;
    double amount6;
    
    cout << "Please enter the following information:" << endl;
    
    cout << "What is your name? " << endl;
    cin  >> personName;
    cout << endl;
    
    cout << "Are you married(2) or single(1)?" << endl;                         // Married or single question
    cin >> maritalStatus;
    cout << endl;
    
   switch (maritalStatus)
    {                                                                           // Marital Status Switch
       case 2:
       cout << "What is your combined income?" << endl;                         // Salary if married
       cin  >> grossWageMarried;                                                    
       cout << endl;
       break;
       
       case 1: 
       cout << "What is your income?" << endl;                                  // Salary if single
       cin  >> grossWageSingle;
       cout << endl;
       break;
       
       default:
       cout << "Invalid Entry" << endl;                                         // error message
       break;
   }
   
   cout << "How much are you withholding for taxes?" << endl;
   cin  >> taxWithheld;
   cout << endl;
   
   
   if (maritalStatus == 2){                                                     // FOR MARREID
        amount1 = -7800;
        grossWageMarried = grossWageMarried + amount1;
        
        if (grossWageMarried > 0){
            keepGoing = 1;
        }
        else {
            keepGoing = 0;
        }
    }
    
    else if (maritalStatus == 1){                                               // FOR SINGLE
        amount1 = -3900;
        grossWageSingle = grossWageSingle + amount1;
        
        if (grossWageSingle > 0){
            keepGoing = 1;
        }
        
        else {
            keepGoing = 0;
        }
    }
    
    if (keepGoing = 0){
        cout << personName << " doesn't owe anything" << endl;
    
    }
   
   switch (keepGoing){
   case 1:

    if (grossWageMarried <= 17850){                                             // married & wage below 17850
        amount2 = .10;
        break;
    }
    
    else if (grossWageMarried <= 72500){                                        // married & wage below 72500
        amount3 = 1785 + (.15*(grossWageMarried - 17850));
        break;
    }
    
    else if (grossWageMarried >= 72501){                                        // married & wage babove 72500
        amount4 = 9982.50 + (.85*(grossWageMarried - 72500));
        break;
    }
    
   if (grossWageSingle <= 8925){                                               // single & wage below 8925
        amount2 = .10;
        break;
    }
    
    if (grossWageSingle <= 36250){                                             // single & wage below 36250
        amount3 = 892.50 + (.15*(grossWageSingle - 8925));
        break;
    }
    
    if (grossWageSingle <= 87850){                                              // single & wage below 87850
        amount4 = 4991.25 + (.25*(grossWageSingle - 36250));
        break;
    }
    
    if (grossWageSingle >= 87851){                                              // single & wage above 87851
        amount5 = 19891.25 + (.28*(grossWageSingle-87850));
        break;
    }
    
   }
    
    cout << personName << ": "<< endl;
    cout << "Total gross adjusted income: $";
    adjustedWage = (grossWageMarried + grossWageSingle); 
    cout << adjustedWage << endl;
    cout << "Total Tax Owed: $";
    
    if (adjustedWage == taxWithheld){
        cout << "0";
    }
    
    if (adjustedWage != taxWithheld){
        if( adjustedWage < taxWithheld)
        cout << "Your return is: " << endl;
        cout << fabs((adjustedWage * amount2) + amount3 + amount4 + amount5);
    }
    
    
}    
    
    
    