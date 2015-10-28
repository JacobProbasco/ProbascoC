//
//   Exercise 7-3
//
#include <stdio.h>

int count_bits(unsigned int x);

main()
{
     unsigned int x = 0;
     char line[10];
     x = atoi(gets(line));
     printf("%d\n", count_bits(x));
     x = atoi(gets(line));
     printf("%d\n", count_bits(x));
}

int count_bits(unsigned int x)
{
     int count = 0;

     while( x != 0 ){
          if(x & 01)
               count++;
          x = x >> 1;
     }
     return(count);
}
