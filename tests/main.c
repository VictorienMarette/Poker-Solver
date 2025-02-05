#include <stdio.h>
#include "../src/poker-env/Cards.h"

int main() {
    Deck deck;
    init_deck(deck);
    Card sortie[] = {card(TWO, HEARTS), card (THREE, HEARTS)};
    remove_multiple_cards(deck, sortie, 2);
    Card* restantes = malloc(50*sizeof(Card));
    get_cards(restantes,deck,50);
    for (int i =0; i<50; i++){
        printf("rank: %d, suit: %d\n", restantes[i].rank, restantes[i].suit);
    }
}