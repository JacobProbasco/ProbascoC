#ifndef DECK_H
#define DECK_H

#include "card.h"

struct deck {
    struct card cards[52];
    int cards_used;
};

#endif