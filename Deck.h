#ifndef DECK_H
#define DECK_H

#include <iostream>
#include <string>
#include "Card.h"
#include "Hand.h"
#include "Rules.h"
#include "Player.h"
#include "Pile.h"

using namespace std;

//The deck is the game itself. It contains everything the game needs to run (players, piles, rules)
// Responsibilities:
// - Reinforces all rules 
// - Controls whos turns it is (taking turns)
// - Manages piles (create, shuffle), deal cards, sets the winner


class Deck {
    private:
        Player player1;
        Player player2;
        Pile discardPile;
        Pile drawPile;
        Rules gameRules;

    public:
        void getPlayer1();
        void getPlayer2();
        void getdiscardPile();
        void getdrawPile();
        void showRules();

};

#endif;