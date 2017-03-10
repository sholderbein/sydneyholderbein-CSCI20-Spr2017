// Created By: Sydney Holderbein
// Date Created: March 9, 2017

/* When the user enters a value it should 
convert it to dollars, euros, bitcoin, or yuan */

#include <iostream>

using namespace std;

class MoneyConverter {
    public:
        
        double SetDollarToDollar(double dollar);
        
        double GetDollarToBitcoin ();
        void SetDollarToBitcoin (double bitcoin);
        
        double GetDollarToYuan ();
        void SetDollarToYuan (double yuan);
        
        double GetDollarToEuro ();
        void SetDollarToEuro (double euro);
        
        MoneyConverter();
        MoneyConverter(double);
        
        double PrintMoneyConverter();
        
    private:
        double dollar_;
};

double MoneyConverter::SetDollarToDollar(double dollar)
{
    dollar_ = dollar;
};

double MoneyConverter::GetDollarToBitcoin()
{
    return 1205.10*(dollar_);
};

void MoneyConverter::SetDollarToBitcoin(double bitcoin)
{
    bitcoin = 1205.10*dollar_;
};

double MoneyConverter::GetDollarToEuro()
{
    return 1.06*(dollar_);
};

void MoneyConverter::SetDollarToEuro(double euro)
{
    euro = 1.068*dollar_;
};

double MoneyConverter::GetDollarToYuan ()
{
    return dollar_ * 0.14;
};

void MoneyConverter::SetDollarToYuan(double yuan)
{
    yuan = dollar_ * 0.14;
};

MoneyConverter::MoneyConverter()
{
    dollar_ = 0;
};

MoneyConverter:: MoneyConverter(double cash)
{
    dollar_ = cash;
};

double MoneyConverter::PrintMoneyConverter()
{
    return dollar_;
};

int main()
{
  MoneyConverter converter;
    
    double dollar = converter.PrintMoneyConverter();
    double euro = converter.GetDollarToBitcoin();
    double yuan = converter.GetDollarToYuan();
    double bitcoin = converter.GetDollarToBitcoin();
    
    double input;
    
    
    cout << "Enter a dollar amount below: " << endl;
    
    cin >> input;
    converter.SetDollarToDollar(input);
    converter.SetDollarToEuro(input);
    converter.SetDollarToYuan(input);
    converter.SetDollarToBitcoin(input);
    
    cout << input << " dollars is: " << endl;
    
    double dollars = input;
    cout << dollars << " dollars." << endl;
    
    double euros = converter.GetDollarToEuro();
    cout << euros << " euros." << endl;
    
    double yuans = converter.GetDollarToYuan();
    cout << yuans << " yuan." << endl;
    
    double bitcoins = converter.GetDollarToBitcoin();
    cout << bitcoins << " bitcoins." << endl;
    
    
};

