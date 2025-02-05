#include "Cards.h"

#include <stdlib.h>

Card card(Rank rank, Suit suit){
    Card card;
    card.rank = rank;
    card.suit = suit;
    return card;
}


void init_deck(Deck deck){
    for (int rank = 0; rank < 13; rank++){
        for (int suit = 0; suit < 4; suit++){
            deck[rank][suit] = 1;
        }
    }
}

void remove_card(Deck deck, Card card){
    deck[card.rank][card.suit] = 0;
}

void remove_multiple_cards(Deck deck, Card cards[], int size_cards){
    for (int i = 0; i < size_cards;i++){
        deck[cards[i].rank][cards[i].suit] = 0;
    }
}

void add_card(Deck deck, Card card){
    deck[card.rank][card.suit] = 1;
}

void add_multiple_cards(Deck deck, Card cards[], int size_cards){
    for (int i = 0; i < size_cards;i++){
        deck[cards[i].rank][cards[i].suit] = 1;
    }
}


int numer_cards(Deck deck){
    int tot = 0;
    for (int rank = 1; rank < 15; rank++){
        for (int suit = 1; suit < 5; suit++){
            tot += deck[rank][suit];
        }
    }
}

void get_cards(Card output[],Deck deck, int size_output){
    int i = 0;
    for (int rank = 0; rank < 13; rank++){
        for (int suit = 0; suit < 4; suit++){
            if (i<size_output & deck[rank][suit] == 1){
                output[i].rank = rank;
                output[i].suit = suit;
                i++;
            }
        }
    }
}