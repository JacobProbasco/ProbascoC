//
//  card.c
//  
//
//  Created by Jacob Probasco on 10/29/15.
//
//
#include "card.h"

#include <stdio.h>

char *suits[] = {"Clubs", "Diamonds", "Hearts", "Spades"};

void print_card(struct card the_card)
{
    printf("%d of %s\n", the_card.rank, the_card.suit);
}