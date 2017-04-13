// Created By: Sydney Holderbein
// Created On: April 11, 2017

// This program will use an array to manipulate intgers

#include <iostream>
using namespace std;

class ArrayTools{
    public:
        int classArray[];
        int i=0;                                                                // Loop index
        int minVal;                                                             // minimum value
        int maxVal;                                                             // maximum value    
        void Print();
        int Find_min(int, int);
        int Find_max(int, int);
        int Find_sum();
        int Is_sorted();
        int Search(int);
        ArrayTools(int myArray[50]);
        
        
        
};
    void ArrayTools::Print(){                                                               // print array elements
        for (i=0; i<50; ++i);
        cout << classArray[i];
        
    }
            
    int ArrayTools::Find_min(int tempA, int tempB){                                                     // find minimum value in the array
        for (i=tempA; i<tempB; ++i)
            if (classArray[i] < minVal){
                minVal = classArray[i];
            }
        return minVal;                                                          // return minimum value in the array
    }
    
    int ArrayTools::Find_max(int tempC, int tempD){
         for (i=tempC; i<tempD; ++i)
            if (classArray[i] > maxVal){
                maxVal = classArray[i];
            }
        return maxVal;
    }
    
    int ArrayTools::Find_sum(){
        int sumVal;
        for (i=0; i<50; i++){
            sumVal = (sumVal + classArray[i]);
        }
        return sumVal;
   }
   
    int ArrayTools::Search(int searchValue){
        for (i=0; i<50; i++){
            if (searchValue == classArray[i]){
                return i;
            }
        return -1;            
        }  
    }
        
    int ArrayTools::Is_sorted(){
        while (i<50){
            if (classArray[i]>classArray[i+1]){
                return false;
            }
            else{
                i++;
            }
        }
        return true;
    }
    
    ArrayTools::ArrayTools(int myArray[]){
        for (i=0; i<50; i++){
        classArray[i] = myArray[i];
    }}



int main()
{
    
    const int SIZE = 10;
    int myArray[SIZE];
    
    for(int i = 0; i<SIZE;i++){
        cin>>myArray[i];
    }
    
    ArrayTools a(myArray);
    
    a.Print();
    cout<<"Min: "<<a.Find_min(0, 4)<<endl;
    cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    cout<<"Sum = "<<a.Find_sum()<<endl;
    cout<<"Search 10"<<a.Search(10)<<endl;
    cout<<"Sorted? "<<a.Is_sorted()<<endl;
    
    return 0;
}
        