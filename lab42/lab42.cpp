// Created By: sydney holderbein
// Created On: April 13. 2017 

// This program will mimic an online shopping cart. 
// It will help keep track of inventory, price and what is in the cart. 

#include <iostream>
using namespace std;

int i=0;
int breedType;
const int numDogs= 10;
int dogPrice =0;
int puppyBreeds[numDogs];
int cartPrice = 0;


int main(){

cout << "What breed puppy would you like to purchase today?"<<endl;
cout << "Your options are: "<< endl;
cout
<< "Husky       (0), " << endl
<< "Labrador    (1), " << endl
<< "Beagle      (2), " << endl
<< "Rottweiler  (3), " << endl
<< "Dachshund   (4), " << endl
<< "Put Bull    (5), " << endl
<< "Akita       (6), " << endl
<< "Terrier     (7), " << endl
<< "Chihuahua   (8), " << endl
<< "Maltese     (9), " << endl
<< endl;
cout << "once you have ordered everything you'd like, type '13'"<< endl;

puppyBreeds [0] = 10;
puppyBreeds [1] = 15;
puppyBreeds [2] = 18;
puppyBreeds [3] = 6;
puppyBreeds [4] = 20;
puppyBreeds [5] = 18;
puppyBreeds [6] = 26;
puppyBreeds [7] = 12;
puppyBreeds [8] = 22;
puppyBreeds [9] = 13;


for (i=0; i<numDogs; i++){
cin >> breedType;


if (breedType != 'n'){
switch(breedType){
    case 0:
        cout << "Okay, I will add a Husky to your cart for $10; anything more?" << cout;
        cartPrice = cartPrice +10;
        puppyBreeds[0] = 0;
        i++;
        break;
    case 1:
        cout << "Okay, I willl add a Labrador to your cart for $15; anything more?" << cout;
        cartPrice = cartPrice +15;
        puppyBreeds[1] = 0;
        break;
    case 2:
        cout << "Okay, I willl add a Beagle to your cart for $18; anything more?" << endl;
        cartPrice = cartPrice +18;
        puppyBreeds[2] = 0;
        break;
    case 3:
        cout << "Okay, I willl add a Rottweiler to your cart for $6; anything more?" << endl;
        cartPrice = cartPrice +6;
        puppyBreeds[3] = 0;
        break;
    case 4: 
        cout << "Okay, I willl add a Dachshund to your cart for $20; anything more?" << endl;
        cartPrice = cartPrice +20;
        puppyBreeds[4] = 0;
        break;
    case 5:
        cout << "Okay, I willl add a Pit Bull to your cart for $18; anything more?" << endl;
        cartPrice = cartPrice +18;
        puppyBreeds[5] = 0;
        break;
    case 6:
        cout << "Okay, I willl add a Akita to your cart for $26; anything more?" << endl;
        cartPrice = cartPrice +26;
        puppyBreeds[6] = 0;
        break;
    case 7: 
        cout << "Okay, I willl add a Terrier to your cart for $12; anything more?" << endl;
        cartPrice = cartPrice +12;
        puppyBreeds[7] = 0;
        break;
    case 8:     
        cout << "Okay, I willl add a Chihuahua to your cart for $22; anything more?" << endl;
        cartPrice = cartPrice +22;
        puppyBreeds[8] = 0;
        break;
    case 9:
        cout << "Okay, I willl add a Maltese to your cart for $13; anything more?" << endl;
        cartPrice = cartPrice +13;
        puppyBreeds[9] =0;
        break;
    
    default: 
        cout << "Since that's all you would like....";
        cout << endl;
        cout << "Your car subtotal is $";
        cout << cartPrice << endl << endl;
        return 0;
      
    }}
}
    

    
    cout << endl;
    cout << "Your car subtotal is $";
    cout << cartPrice << endl << endl;
    





















}