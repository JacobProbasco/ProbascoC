//
// card.h
// NO IMPLEMENTATION IN HEADER FILES
// Just declarations.

#ifndef CARD_H
#define CARD_H

#include <stdio.h>

struct card {
    int rank;
    char *suit;
    
};

void print_card(struct card);


#endif