#include<stdio.h>
#include<stdlib.h>

int main()
{

	int a = 3;
	int *p = &a;

	printf("Value of p=address of a is %p\n", (p));
	printf("Value of p is %d\n", (p)++);
	printf("Value of p is %d\n", ++(p));
	printf("Value of p is %d\n", ++(p));
	//printf("Value of p is %p\n", --(*p));
	printf("Value of p is %p\n", (*p)--);
	printf("Value of p is %p\n", (*p));
}
