#include <iostream>
#include <string>
#include <vector>
#include "Card.h"
#include "Hand.h"
using namespace std;


Hand:: Hand(std::vector<Card> playerHand) : hand(playerHand) {}

void Hand:: addCard(Card card){
    hand.push_back(card); //push_back adds an item at the end of the vector
}

Card Hand:: discardCard(int index) {
    Card card = hand.at(index);
    hand.erase(hand.begin() + index );
    return card;
}

void Hand:: printCurrentCards(){
    for(int i = 0; i < hand.size(); i++){
        hand[i].printCard();
        cout << "  ";
    }
}



