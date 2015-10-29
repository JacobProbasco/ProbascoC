#include "card.c"
#ifndef DECK_H
#define DECK_H

struct deck {
    struct card cards[52];
    int cards_used;
};

#endif