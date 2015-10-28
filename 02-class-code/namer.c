#include <stdio.h>
#include <string.h>

int main(void)
{
  char name[64];

  printf("What's your name?\n");

  fgets(name, 64, stdin);
  name[strlen(name) - 1] = '\0';
  printf("hello, %s!\n", name);

}
