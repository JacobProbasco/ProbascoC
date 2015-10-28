#include <stdio.h>
#include <string.h>
#include "employee.h"
main()
{
	struct employee worker;
	struct employee *p;
	
	worker.dept ='A';
	worker.pay = 20000;
	strcpy(worker.name, "mike");
	p = &worker;

	printf("%c\n", worker.dept);
	printf("%s\n", worker.name);
	printf("%.2f\n", worker.pay);

	printf("%c\n", p->dept);
	printf("%s\n", p->name);
	printf("%.2f\n", p->pay);

	printf("%c\n", (*p).dept);
	printf("%s\n", (*p).name);
	printf("%.2f\n", (*p).pay);
}
