#include <iostream>
#include <string>
#include "Player.h"
#include "Card.h"
#include "Hand.h"

Player:: Player(string playerName) : name(playerName) {}

string Player:: getName(){
    return name;
}

int Player:: getcardCount(){
    return cardCount;
}

//void draw()
// void play()
