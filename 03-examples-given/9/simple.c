#include <stdio.h>
#include <string.h>
/* Simple array principles */
main()
{
	char data[10];
	strcpy(data,"Place Data Here");
	printf("SIZEOF ARRAY = %d\n", sizeof(data));
	printf("STRLEN ARRAY = %d\n", strlen(data));
	printf("ZEROTH CHAR  = %c\n", data[0]);
	printf("ARRAY ADDR= %p\n", data);
	/* percent p (%p) means print as Pointer(address) */
	printf("PRINT DATA= %s\n", data);
	/* percent s (%s) means print as string */
	int i;
	for ( i = 0; i < strlen(data); i++)
		putchar(data[i]);
	putchar('\n');
	printf("%d\n", data[i]);
	printf("|%c|\n", data[i]);

	char one[5];
	char two[10] = "Michael";
	strcpy(one,two); 
	printf("print a char = %c\n", data[20]);
}
