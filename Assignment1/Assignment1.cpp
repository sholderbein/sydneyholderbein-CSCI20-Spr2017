// Created By: Sydney Holderbein
// Date Created: Febuary 16, 2017

// This will print an employees pay stub. Including hours, pay, health insurance deductions....

#include <iostream>
#include <string>
using namespace std;

struct FillIns {                                                    // building a struct
  
    string employeeName;
    string first;
    string last;
};

int main()
{
    FillIns employeeName;                                           // naming variables        
    
    employeeName.first;
    employeeName.last;
    
    int hourWeek = 0;
    int hourPay = 0;
    int healthIns = 130;
    int taxes = .17;


cout << "What is the employees name? ";                             // asking for employee information
cin  >> employeeName.first;
cin  >> employeeName.last;
cout << endl;

cout << employeeName.first << " " << employeeName.last << endl;
cout << endl;

cout << "How many hours did " << employeeName.first << " work this week? " << endl;
cin >> hourWeek;
cout << endl;

cout << "How much does " << employeeName.first << " make an hour" << endl;
cin >> hourPay;
cout << endl;

cout << employeeName.first << "'s Subtotal pay is: $" << hourPay*hourWeek << endl;      // Subtotal pay
cout << "They will pay: $" << healthIns << " in health insurance." << endl;             // deducting health ins
cout << "An additional 17% will be taken for taxes" << endl;                            // deducting taxes

cout << "Leaving " << employeeName.first << "'s pay at $";                              // TOTAL PAY
cout << ((hourPay*hourWeek)-healthIns) - (((hourPay*hourWeek)-healthIns)*.17);

return 0;
}