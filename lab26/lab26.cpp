// Created By: Sydney Holderbein
// Created On: March 9, 2017

// This programs a class that converts temperatures between Kelvin, Fahrenheit and Celsius

#include <iostream>
using namespace std;

class TemperatureConverter {
 public: 
    double GetTempFromKelvin ();
    void SetTempFromKelvin (double kelvinTemp);
    
    double GetTempAsCelsius ();
    void SetTempFromCelsius (double celciusTemp);
    
    double GetTempAsFahrenheit ();
    void SetTempFromFahrenheit (double fahrenheitTemp);
    
    TemperatureConverter();
    TemperatureConverter(double overload);
    
    string PrintTemperatures ();
    
private:
    double kelvin_;
    
};
  
void TemperatureConverter::SetTempFromKelvin (double kelvinTemp)
{
   kelvin_ = kelvinTemp;
}

double TemperatureConverter::GetTempFromKelvin()
{
    return kelvin_;
}

void TemperatureConverter::SetTempFromCelsius (double celciusTemp)
{
    double kelvinOut = celciusTemp + 273.15;
};

void TemperatureConverter::SetTempFromFahrenheit (double fahrenheitTemp)
{
    kelvin_ = (5*(fahrenheitTemp -32)/9) + 273.15;
};

double TemperatureConverter::GetTempAsCelsius()
{
    return (kelvin_ - 273.15);    
};

double TemperatureConverter::GetTempAsFahrenheit ()
{
    return (((kelvin_-273.15)*9)/5 + 32);
};

TemperatureConverter::TemperatureConverter()
{
    kelvin_ = 0;
};

TemperatureConverter::TemperatureConverter(double overload)
{
    kelvin_ = overload;
};

string TemperatureConverter::PrintTemperatures()
{
    double celciusTemp = GetTempAsCelsius();
    double fahrenheitTemp = GetTempAsFahrenheit();
    double kelvinTemp = GetTempFromKelvin();
    
    cout << "Celcius: " << celciusTemp << endl;
    cout << "Fahrenheit: " << fahrenheitTemp << endl;
    cout << "Kelvin: " << kelvinTemp << endl;
};


int main() {
  TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    
};
