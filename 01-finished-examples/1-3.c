#include <stdio.h>
/* Code by Jacob Probasco
 * jacobprobasco@outlook.com
 * 19 OCT 2015
 * Produce the output "(x,y) = (3,4)" with the given.
*/

int main(void){

int x = 3, y = 4;
int total = 0;
double a = 25.5, b = 20;

printf("(x,y) = (%d,%d)\n", x, y);

total = x + y;
printf("x + y = %d\n", total);

printf("(a,b) = (%f,%f)\n", a, b);

total = a + b;
printf("a + b = %d\n", total);

}
