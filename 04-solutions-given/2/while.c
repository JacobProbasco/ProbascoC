#include <stdio.h>
main()
{
	int i = 1;		/*     */
	int sum = 0;		/*     */

	while ( i <= 10 )
		sum += i++;
	printf("%d\n", sum);
}
