#include <stdio.h>
#include <string.h>

#define MAX 100

void reverse(char string[]);

main()
{
	char line[MAX] = "hi";

	fgets(line, MAX, stdin);
	reverse(line);
	printf("%s\n", line);
}

void reverse(char string[])
{
	int i = 0;
	char newstring[MAX];
	strcpy(newstring, string);
	int count = strlen(newstring) - 1;

	
	while (count >= 0) {
		string[i++] = newstring[count];
		count = count - 1;
	}
	string[i] = '\0';
}
