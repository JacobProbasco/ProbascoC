#include <stdio.h>

/* Code by Jacob Probasco
 * jacobprobasco@outlook.com
 * 22OCT2015
 *
 * reverse - reverses a string */

#define MAX 100

void reverse(char string[]);

int main(void){

  char line[MAX];

  printf("Enter a String that you want reversed.\n"); 
  
  fgets(line, MAX, stdin);	/* Get from user */
  
  reverse(line);			/* Reverse string */
  printf("%s\n", line);		/* Print results */

}

/*** Functions ***/

void reverse(char s[]){

  char rev[MAX];
  int place;				/* Index location */
  end = s
  for (s[0]; != NULL; i++)
    char rev[MAX];

}
