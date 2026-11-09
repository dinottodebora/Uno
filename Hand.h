#ifndef HAND_H
#define HAND_H

#include <vector>
#include "Card.h"

// A hand is a set of cards that belongs to the player. 
// It starts with 7 cards and can shrink or strech depending on how many cards the player adds or takes off
// Responsabilities:
// - Knows how to play a card onto the play pile
// - Knows how to draw a card from the draw pile
// - Keeps track of how many cards it has
// - Knows how to print all it's current cards

class Hand {
    private:
        vector<Card> hand;
        int handCardCount = 0; // keeps track of how many cards are left 

    public:
        Hand();
        void getHand();
        void addCard(); // adds a card to the hand
        void discardCard(); // takes a card oof the set of cards
        void printCurrentCards(); // prints all cards on a hand

};

#endif;