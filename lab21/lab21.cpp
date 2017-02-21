//Created By: Sydney Holderbein
//Created On: Febuary 21, 2017

// This program will output information about wind chills when given the temperature and the veloicty of the wind

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    
    double currentTemp = 0;
    double currentVelocity = 0;
    double oldStyle = 0;
    double newStyle = 0;

    cout << "Enter the current temperature in F:" << endl;
    cin  >> currentTemp;
    cout << endl;
    cout << "Enter the current wind velocity:" << endl;
    cin  >> currentVelocity;
    cout << endl;
    
    
    cout << "The Old Style Wind Chill is.... " << endl;
    oldStyle = (0.081 * (3.71 * sqrt(currentVelocity) + 5.81 - (0.25 * currentVelocity))) * (currentTemp - 91.4) + 91.4;
    cout << oldStyle << endl;
    cout << endl;
    
    
    cout << "The New Style Wind Chill is.... ";
    newStyle = (35.74 + (0.6215 * currentTemp) - (35.75 * pow(currentVelocity,0.16)) + 0.4275 * (currentTemp * pow(currentVelocity,0.16)));
    cout << endl;
    cout << newStyle << endl;
    cout << endl;
    
    cout << "The Difference Between The Two Is....";
    cout << endl;
    cout << fabs(newStyle - oldStyle) << endl;

    
}