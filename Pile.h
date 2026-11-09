#ifndef PILE_H
#define PILE_H

#include "Card.h"
#include <vector>

// A pile is a set of cards. There are two piles in the game: discard and draw pile.
// We will be treating piles as stacks
// Cards face down, so players will only see a card's data if they draw one from a pile or if the opponent discard one 
// Responsabilities:
// - Knows how to create all the cards in the game
// - Knows how to shuffle the cards
// - Knows how to deal cards to the players and set the remaining card as two piles: draw and discard

class Pile {
    private:
        vector<Card> pile; // a collection of cards that belongs to the deck
    
    public:
        Pile();
        void getPile(); // acess the pile
        void createPile(); // adds cards to pile
        void shufflePile(); // shuffle cards every game or when needed
        void dealPile(); // hand out cards to the players at the beggining of the game
};

#endif;