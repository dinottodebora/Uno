#include <iostream>
#include <string>
#include "Card.h"
using namespace std;

Card:: Card(string cardNumber, string cardColor) : number(cardNumber), color(cardColor){}

string Card:: getNumber(){
    return number;
}

string Card:: getColor(){
    return color;
}

void Card:: printCard(){
    cout << "[ " << getNumber() << " | " << getColor() << " ]";
}