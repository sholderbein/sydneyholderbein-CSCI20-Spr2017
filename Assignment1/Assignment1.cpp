// Created By: Sydney Holderbein
// Date Created: Febuary 16, 2017

#include <iostream>
#include <string>
using namespace std;

struct FillIns {
  
    string employeeName;
    string first;
    string last;
};

int main()
{
    FillIns employeeName;
    
    employeeName.first;
    employeeName.last;
    
    int hourWeek = 0;
    int hourPay = 0;
    int healthIns = 130;
    int taxes = .17;


cout << "What is the employees name? ";
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

cout << employeeName.first << "'s Subtotal pay is: $" << hourPay*hourWeek << endl;
cout << "They will pay: $" << healthIns << " in health insurance." << endl;
cout << "An additional 17% will be taken for taxes" << endl;

cout << "Leaving " << employeeName.first << "'s pay at $";
cout << ((hourPay*hourWeek)-healthIns) - (((hourPay*hourWeek)-healthIns)*.17);

return 0;
}