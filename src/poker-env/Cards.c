#include "Cards.h"

void initDeck(Deck *deck){
    for (int rank = 1; rank < 15; rank++){
        for (int suit = 1; suit < 5; suit++){
            *deck[rank][suit] = 1;
        }
    }
}

void remove_card(Deck *deck, Card card_i){
    *deck[card_i.rank][card_i.suit] = 0;
}
void remove_multiple_cards(Deck *deck, Card card_indexs[]);
void add_card(Deck *deck, Card card_i);