#include <stdio.h>
main()
{
	char letter;
	printf("SIZE OF A SINGLE CHAR IS %d\n", sizeof(letter));
	char string[50];
	printf("SIZE OF A 50 element char array is %d\n", sizeof(string));
	char lines[5][50];
	printf("SIZE OF A 5 x 50 char array is %d\n", sizeof(lines));


	strcpy(string, "Michael");
	printf("%s\n", string);
	printf("%s\n", string + 1);

	strcpy(string, "Steve");
	printf("%s\n", string);
	strcat(string, " Smith");
	printf("%s\n", string);
}
