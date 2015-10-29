//
// card.h
// NO IMPLEMENTATION IN HEADER FILES
// Just declarations.

#ifndef CARD_H
#define CARD_H

enum suits {CLUBS, DIAMONDS, HEARTS, SPADES};

// NOTE: No Include stdio.h

struct card {
    int rank;
    enum suits suit;
};

void print_card(struct card);

#endif
