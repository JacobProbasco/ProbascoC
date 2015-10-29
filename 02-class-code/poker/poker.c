#include "card.c"
#include "deck.c"

/* Code by Jacob Probasco
 * jacobprobasco@outlook.com
 *   2015
 *  Poker Game
*/
//Change


int main(void)
{
    struct deck bicycle;
    
    bicycle.cards[0].rank = 3;
    bicycle.cards[0].suit = HEARTS;
    
    print_card(bicycle.cards[0]);
}
