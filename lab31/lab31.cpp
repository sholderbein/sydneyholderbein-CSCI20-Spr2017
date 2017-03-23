// Created By: Sydney Holderbein
// Created On: 3/23/17

//This program will create a program for a cell phone company to determine the charge for a service

#include <iostream>
using namespace std;
  
int main(){

string deviceCharge = dumb;
string monthlyCharge;
string unlimitedData;
double payPerDataCharge;
string corporateDiscount;
double familyPlanDiscount;

double amount1 = 0.0;
double amount2 = 0.0;
double amount3 = 0.0;
double amount4 = 0.0;
double amount5 = 0.0;
double amount6 = 0.0;
double amount7 = 0.0;



cout << " Please Enter The Following: " << endl;

cout << "Will this device be a smart phone, dumb phone, or tablet?   ";         // Device type
cin >> deviceCharge;
cout << endl;

cout << "Will this device have unlimited talk & text?   ";                      // talk & text
cin >> monthlyCharge;
cout << endl;

cout << "Will this device have unlimited data?   ";                             // Unlimited GB
cin >> unlimitedData;
cout << endl;

cout << "How many GB would you like? (Enter 0 if unlimited)   ";                // nUmber of GB
cin >> payPerDataCharge;
cout << endl;

cout << "Are they getting a corporate discount?   ";                            // coroporate discount
cin >> corporateDiscount;
cout << endl;

cout << "How many lines will be on this account?   ";                           // number of lines
cin >> familyPlanDiscount;
cout << endl;


if (deviceCharge == dumb){
    amount1 = 0.0;
}
else if(deviceCharge == smart){
    amount1 = 5.0;    
}
else {
    amount1 = 10.0;
}


if (monthlyCharge == yes){
    amount2 = 30.0;
}
else{
    amount2 = 0.0;
}


if(unlimitedData == yes){
    amount3 = 45.0;
}
else{
    amount3 = 0;
}

if(payPerDataCharge == 1){
    amount4 = 5.0;
}

else if((payPerDataCharge > 1)&&(payPerDataCharge<5){
    amount4 = (payPerDataCharge*.75)+4.25;
}

else if ((payPerDataCharge > 5)&&(payPerDataCharge<15)){
    amount4 = ((payPerDataCharge/15)*3))+(((payPerDataCharge%15)/5)*1.5)+(((payPerDataCharge%15)%5)*.75) + 4.25;
}
else {
    cout << "error";
}

if (corporateDiscount == yes){
    amount5 = .90;
}
else{
    amount5 = 1;
}

if (familyPlanDiscount > 2){
    amount6 = (familyPlanDiscount -2)*3;
    
}
else{
    amount6 = 0;
}

amount7 = (amount1 + amount2 + amount3 + amount4 + amount6)*amount5
 

cout << "User Cell Phone Plan: " << endl;
cout << amount7;

return;








    
    
}