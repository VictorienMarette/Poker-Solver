#include <stdbool.h>

typedef enum { HEARTS=0, DIAMONDS=1, CLUBS=2, SPADES=3 } Suit;
typedef enum { TWO=0, THREE=1, FOUR=2, FIVE=3, SIX=4, SEVEN=5, EIGHT=6, NINE=7, TEN=8, JACK=9, QUEEN=10, KING=11, ACE=12} Rank;

typedef struct {
    Rank rank;
    Suit suit;
} Card;

Card card(Rank rank, Suit suit);

typedef bool Deck[13][4];

void init_deck(Deck deck);

void remove_card(Deck deck, Card card);
void remove_multiple_cards(Deck deck, Card cards[], int size_cards);
void add_card(Deck deck, Card card);
void add_multiple_cards(Deck deck, Card cards[], int size_cards);

int numer_cards(Deck deck);

void get_cards(Card output[],Deck deck, int size_output);