#include <stdio.h>
double average(int hits, int atbats);
int sum(int hits, int atbats);
main()
{
	int answer;
	int number1, number2;

	number1 = 10;
	number2 = 20;

	printf("Starting\n");
	answer = sum(number1, number2);
	printf("Sum is %d\n", answer);

	int x = 50, y = 40;
	answer = sum(x, y);
	printf("Sum is %d\n", answer);

	printf("%d\n", sum(100,300) * 3);
	printf("Ending\n");
	printf("%.3f\n", average(100,300));
	printf("%d\n", sum(10.5, 20.6));
	long s = 5, t = 5;
	printf("%d\n", sum(s,t));
}
int sum(int a, int b)
{
	printf("INSIDE THE FUNCTION: a is %d\n", a);
	printf("INSIDE THE FUNCTION: b is %d\n", b);
	int c;
	c = a + b;
	return(c);
}
double average(int hits, int atbats)
{
	double result;
	result = hits;
	result = result/atbats;
	return result;
}
