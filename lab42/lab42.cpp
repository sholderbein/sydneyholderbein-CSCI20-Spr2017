// Created By: sydney holderbein
// Created On: April 13. 2017 

// This program will mimic an online shopping cart. 
// It will help keep track of inventory, price and what is in the cart. 

#include <iostream>
using namespace std;

int i=0;
int breedType;
const int NUM_DOGS= 10;
int dogPrice =0;
int puppyBreeds[NUM_DOGS];
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


for (i=0; i<NUM_DOGS; i++){
cin >> breedType;
cout << endl;


if (breedType<10){
switch(breedType){
    case 0:
        cout << "Okay, I willl add a Husky to your cart for $10; anything more?";
        cartPrice = cartPrice +10;
        puppyBreeds[0] = 0;
        break;
    case 1:
        cout << "Okay, I willl add a Husky to your cart for $15; anything more?";
        cartPrice = cartPrice +15;
        puppyBreeds[1] = 0;
        break;
    case 2:
        cout << "Okay, I willl add a Husky to your cart for $18; anything more?";
        cartPrice = cartPrice +18;
        puppyBreeds[2] = 0;
        break;
    case 3:
        cout << "Okay, I willl add a Husky to your cart for $6; anything more?";
        cartPrice = cartPrice +6;
        puppyBreeds[3] = 0;
        break;
    case 4: 
        cout << "Okay, I willl add a Husky to your cart for $20; anything more?";
        cartPrice = cartPrice +20;
        puppyBreeds[4] = 0;
        break;
    case 5:
        cout << "Okay, I willl add a Husky to your cart for $18; anything more?";
        cartPrice = cartPrice +18;
        puppyBreeds[5] = 0;
        break;
    case 6:
        cout << "Okay, I willl add a Husky to your cart for $26; anything more?";
        cartPrice = cartPrice +26;
        puppyBreeds[6] = 0;
        break;
    case 7: 
        cout << "Okay, I willl add a Husky to your cart for $12; anything more?";
        cartPrice = cartPrice +12;
        puppyBreeds[7] = 0;
        break;
    case 8:     
        cout << "Okay, I willl add a Husky to your cart for $22; anything more?";
        cartPrice = cartPrice +22;
        puppyBreeds[8] = 0;
        break;
    case 9:
        cout << "Okay, I willl add a Husky to your cart for $13; anything more?";
        cartPrice = cartPrice +13;
        puppyBreeds[9] =0;
        break;
    
    case 'n':
        cout << "Your cart total is" << cartPrice;
        return 0;
        break;
    
    default: 
        cout << "Please pick a valid option";
        break;
    }}
}
    

    

    cout << "Your car subtotal is $";
    cout << cartPrice << endl << endl;
    
    










/*switch (breedType){
    case 'H':
        cout << "Okay, I willl add a Husky to your cart for $1"<< endl;
        break;
    case 'L':
        cout << "Okay, I will add a Lab to your cart for $2"<< endl;
        break;
    case 'B':
        cout << "Okay, I will ass a Beagle to your cart for "
        
    
}*/
















}