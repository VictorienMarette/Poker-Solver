#include <stdbool.h>

typedef enum { HEARTS=1, DIAMONDS=2, CLUBS=3, SPADES=4 } Suit;
typedef enum { TWO=2, THREE=3, FOUR=4, FIVE=5, SIX=6, SEVEN=7, EIGHT=8, NINE=9, TEN=10, JACK=11, QUEEN=12, KING=13, ACE=14 } Rank;

typedef struct {
    Rank rank;
    Suit suit;
} Card;

typedef bool Deck[13][4];

void initDeck(Deck *deck);

//Card pick_card(Deck deck);

void remove_card(Deck *deck, Card card_i);
void remove_multiple_cards(Deck *deck, Card card_indexs[]);
void add_card(Deck *deck, Card card_i);
//Card pick_and_remove_card(Deck *deck);