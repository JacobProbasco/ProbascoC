#include <stdio.h>
/* Code by Jacob Probasco
 * jacobprobasco@outlook.com
 *   2015
*/

int main(void){


int x = 5, y = 10, r = 7, z = 12;
							// 5+10 = 15
x = x + y++;				// after add, incre y(11)
printf("%d %d\n", x, y);	// print total

r += ++z;					// 7+13 (z++) set r(20)
printf("%d %d\n", r, z);	// print r(20), z(13)

int a = 5, b = -5;

printf("%d", a + b ? a + b : a - b);
			// print a + b if a+b <= 0
			// else, print a-b (5- -5, so 10)
}
