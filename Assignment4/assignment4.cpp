// Created By: Sydney Holderbein
// Created On: April 27, 2017

// This program will

#include <iostream>
#include <fstream>
using namespace std;


class GradingAnswers{
    public:
        int getCorrectAnswers();
        void setCorrectAnswers[const int SIZE];
        
    private:
        string correctAnswers[21];
        string studentAnswers[21];
        const int SIZE = 21;
        double score;
};
    
void setCorrectAnswers(21){
        for (int i=0; i<21; i++){
        userAnswers[i] = studentAnswers[i];
    }    
}   
        
        
int main(){
    
    cout << "please enter student answers, hit enter after each:";
    
    for (int i=0; i<21; i++){
    cin  >> GradingAnswers::studentAnswers[i];
    }
 
    
    for (int i=0; i<21; i++){
        cout << GradingAnswers::studentAnswers[i];
        cout << endl;
    }
    
}        
        
        
        
