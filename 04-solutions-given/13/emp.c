#include <stdio.h>
struct emp
{
	int a;
	char p;
	int b;
	char pp;
};
main()
{
	struct emp x;
	printf("%d\n", sizeof(x));
}
