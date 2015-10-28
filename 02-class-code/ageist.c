#include <stdio.h>

int main(void)
{
  int year = 0;
  char buf[64];

  printf("Please enter the year you were born: ");
  for(;;) {
/* will cause infinite loop */
    if(scanf("%d", &year) != 1) {
      printf("Please enter a numeric year \n");
    } else {
      break;
    }
  }
  printf("You must be %d years old\n", 2015 - year);

}
