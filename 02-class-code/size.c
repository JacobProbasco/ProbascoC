
# include <stdio.h>

int main(void)
{
  printf("char %d\n", sizeof(char));
  printf("char * %d\n", sizeof(char *));
  printf("int * %d\n", sizeof(int *));
  printf("float * %d\n", sizeof(float *));
  printf("void %d\n", sizeof(void *));
  printf("void %d\n", sizeof(void(*)()));

}
