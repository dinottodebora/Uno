#ifndef RULES_H
#define RULES_H

#include <string>
using namespace std;

// Rules display on the screen the rules of the game
// Responsabilities:
// - Print the rules 

class Rules {
    private:
        string rules; // pre defined

    public:
        void displayRules();
};

#endif;