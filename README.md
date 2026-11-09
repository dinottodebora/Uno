 classDiagram

 class Player{
    -name : string
    -cardCount : int
    +playerHand : Hand
    +getName() string
    +getcardCount() int
    +draw() void
    +play() void
 }

 class Pile {
    -pile : Card 
    +getPile() : void 
    +createPile() : void
    +shufflePile() : void
    +dealPile() : void
}

class Hand {
    -hand : Card
    -handCardCount : int
    +getHand() : void
    +addCard() : void
    +discardCard() : void
    +printCurrentCards() : void
}

class Card {
    -number : string
    -color : string
    +string getNumber() : string
    +getColor() : char
    +printCard() : void
        
}
 
class Rules {
    -rules : string 
    +void displayRules() : void
}

class Deck {
    -player1 : Player
    -player2 : Player
    -discardPile : Pile
    -drawPile : Pile
    -gameRules : Rules
    +getPlayer1() : void
    +getPlayer2() : void
    +getdiscardPile() : void
    +getdrawPile() : void 
    +showRules() : void 
}

Deck "1" *-- "2" Player // Composition: A owns B: B is created and destroyed with A
Deck "1" *-- "2" Pile
Deck "1" *-- "1" Rules
Deck "1" *-- "108" Card
Player "1" *-- "1" Hand
Player "1" --> "*" Card // Association: A uses B, but doesn't own it
Hand "1" --> "*" Card
Pile "1" --> "*" Card