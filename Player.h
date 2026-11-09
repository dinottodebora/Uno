#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include "Card.h"
#include "Hand.h"

using namespace std;

// The player is one of the participants of the game
// Responsabilities:
// - Knows it's name and keeps track of how many cards are on its hand
// - Knows how to put a card on the discard pile and how to draw from the draw pile
// - Can pick a card based on the current card showing on the top of the discard pile

class Player {
    private:
        string name;
        int cardCount = 0; // amount of cards a player has on it's hand

    public:
        Player();
        Hand playerHand; // creates a set of cards for the player
        string getName();
        int getcardCount();
        void draw(); // draw a card from the draw pile
        void play(); // takes a card from the hand and plays onto the discard pile 

};

#endif;

