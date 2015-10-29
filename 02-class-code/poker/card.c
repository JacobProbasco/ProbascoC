//
//  card.c
//  
//
//  Created by Jacob Probasco on 10/29/15.
//
//
#include "card.h"

#include <stdio.h>

void print_card(struct card the_card)
{
    printf("%d of %s\n", the_card.rank, the_card.suit);
}


// NOTE: No endif in introC