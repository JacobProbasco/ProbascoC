#include  "employee.h"
#include <stdio.h>
#include <string.h>
main()
{
	struct employee worker;
	printf("%d\n", sizeof(worker));
	printf("%d\n", sizeof(struct employee));

	worker.pay = 90000;
	worker.dept = 'A';
	strcpy(worker.name, "Mike");
	printf("%s %.2f %c\n", worker.name, worker.pay, worker.dept);
}
