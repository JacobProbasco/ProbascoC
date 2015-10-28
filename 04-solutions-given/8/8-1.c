//
//      Exercise 8-1
//
#include <stdio.h>
#include <string.h>

#define LINE_SIZE 100

void reverse(char s[]);

main()
{
	char line[LINE_SIZE];
	
	printf("Enter a string to reverse: ");
	gets(line);
	reverse(line);
	printf("%s\n", line);
}

void reverse(char s[])
{
     int i = 0, j;
     char temp;
     
     j = strlen(s) - 1;  // point at char before '\0'
     
     while(i < j) {
          temp = s[i];
          s[i] = s[j];
          s[j] = temp;
          i++;
          j--;
     }
}
