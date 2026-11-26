#include <iostream>
#include <string>
#include "Card.h"
#include "Hand.h"
#include <string>
#include <vector>
using namespace std;

// Beginning
// Player 1 has 7 cards
// Player 2 has 7 cards
// Game pile has 1 card
// Deck has all remaining cards
// Turn = Player 1

// Turn 1
// Player decides play or draw
// - If play
//     Player card moves to the play pile
//     If wild or wild draw 4, player needs to pick a color
//     If reverse, with two players no effect
//     If skip, start new turn for player
// - If draw
//     Deck card moves to player's hand and player can play the card or end turn

// Turn 2
// If card is draw two or draw four then two/four cards are added to the hand and end turn
// Otherwise, player decides play or draw
// - If play
//     Player card moves to the play pile
//     If wild or wild draw 4, player needs to pick a color
// - If draw
//     Deck card moves to player's hand and player can play the card or end turn

int main(){
    Card card1("5","Yellow");
    Card card2("+4","Blue");
    Card card3("!","Red");
    card1.printCard();
    cout << endl;
    card2.printCard();
    cout << endl;
    card3.printCard();
    cout << endl;

    vector<Card> allCards ; ///creating a vector first before creating an object of the type Hand.
    Hand myCards(allCards);
    myCards.addCard(card1);
    myCards.addCard(card2);
    myCards.addCard(card3);
    
    cout << "This is the hand: " << endl;
    myCards.printCurrentCards();

    // Beginning
    // Player 1 has 7 cards
    // Player 2 has 7 cards
    // Game pile has 1 card
    // Deck has all remaining cards
    // Turn = Player 1
    /*const int PLAYER_1 = 0;
    const int PLAYER_2 = 1;
    player1 = Player();
    player2 = Player();
    players = Player*[&player1, &player2];
    deck = Deck();
    playPile = Pile();
    turn = PLAYER_1;

    dealCards(deck, player1, player2);

    moveCard(deck, playPile);

    while (cardCanNotStartGame(playPile.top()) {
        moveCard(deck, playPile);
    }

    while (turn != -1) {
        // If player wins, turn = -1; otherwise turn is the next player
        turn = playTurn(deck, playPile, players[turn]);
    }

    // Turn 1
    // Player decides play or draw
    // - If play
    //     Player card moves to the play pile
    //     If wild or wild draw 4, player needs to pick a color
    //     If reverse, with two players no effect
    //     If skip, start new turn for player
    // - If draw
    //     Deck card moves to player's hand and player can play the card or end turn

    // Turn 2
    // If card is draw two or draw four then two/four cards are added to the hand and end turn
    // Otherwise, player decides play or draw
    // - If play
    //     Player card moves to the play pile
    //     If wild or wild draw 4, player needs to pick a color
    // - If draw
    //     Deck card moves to player's hand and player can play the card or end turn*/
















    return 0;
}