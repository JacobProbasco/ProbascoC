#include <stdio.h>

/* Code by Jacob Probasco
 * jacobprobasco@outlook.com
 * 23 OCT 2015
 *
 * "copy this code" */
#define MAX 10
int main(){

  int x[MAX] = {10,12,14,16,18,20,22,24,26,28};

  int *px;

  int sum = 0;
  for ( px = x + MAX -1; px >= x; px--)
		sum += *px;
}
