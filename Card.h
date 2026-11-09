#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>
using namespace std;

// A card is one unit that has two elements: a number/symbol and a color
// Responsibilities:
// - Knows it's number/symbol and color 
// - Knows how to print itself in the following format: [ Number | Color ]. Ex: [ 4 | Blue ]

class Card {
    private:
        string number; // string because we are going to include symbols such as #,@,+4, that meant to defeat the opponent
        string color; // Red, Blue, Green, Yellow

    public:
        Card();
        string getNumber();
        string getColor();
        void printCard();
        
};

#endif;