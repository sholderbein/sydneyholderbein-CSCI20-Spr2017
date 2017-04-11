// Created By: Sydney Holderbein
// Created On: April 11, 2017

// This program will use an array to manipulate intgers

    
#include <iostream>
using namespace std;

class ArrayTools{
    public:
        const int SIZE = 10;                                                        
        int i=0;                                                                // Loop index
        int minVal;                                                             // minimum value
        int maxVal;                                                             // maximum value    
        int myArray[SIZE];
};

    void Print(){                                                   // print array elements
        for (i=0; i<SIZE; ++i);
        cout << myArray[i];
        
    }
        
    int Find_min(int, int){                                         // find minimum value in the array
        for (i=0; i<SIZE; ++i)
            if (myArray[i] < minVal){
                minVal = myArray[i];
            }
        return minVal;                                                          // return minimum value in the array
    }
    
    int Find_max(int, int){
         for (i=0; i<SIZE; ++i)
            if (myArray[i] > maxVal){
                maxVal = myArray[i];
            }
        return maxVal;
    }
    
    int Find_sum(){
        for (i=0; i<SIZE; i++){
            int sumVal = (sumVal + myArray[SIZE]);
        }
        return sumVal;
   }
   
    


int main()
{
    
    const int SIZE = 10;
    int myArray[SIZE];
    
    for(int i = 0; i<SIZE;i++){
        cin<<myArray[i];
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
        
