#include <iostream>
#include <string>
#include <vector>

#include "Card.h"
#include "Hand.h"


Hand:: Hand(std::vector<Card> playerHand) : hand(playerHand) {}

void Hand:: addCard(Card card){
    hand.push_back(card); //push_back adds an item at the end of the vector
}

Card Hand:: discardCard(int index) {
    Card card = hand.at(index);
    hand.erase(hand.begin() + (index - 1));
    return card;
}



