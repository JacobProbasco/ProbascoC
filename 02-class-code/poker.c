#include <stdio.h>
#include <string.h>

/* Code by Jacob Probasco
 * jacobprobasco@outlook.com
 *   2015
 *  Poker Game
*/
//Change
struct card {
    int rank;
    char suit[9];
    int suit_lookup;
};

char *suit_names[] = {"Clubs", "Diamonds", "Hearts", "Spades"};

void print_card(struct card);

int main(void){

    struct card three_of_hearts;
    
    three_of_hearts.rank = 3;
    three_of_hearts.suit_lookup = 2;
    
    print_card(three_of_hearts);

}

void print_card(struct card the_card)
{
    printf("%d of %s\n", the_card.rank, suit_names[the_card.suit_lookup]);
}