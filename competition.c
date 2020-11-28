#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define print(x) printf(%d,x)
#define decode(s,t,a,m,p,e,d)m##s##a##t
#define begin decode(a,n,i,m,a,t,e)


int funcf(int x);
int funcg(int y);
int foo(int n, int k);
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
//1)
	// char * A[] = {"C", "C++", "JAVA", "PHP"};
	// char ** b[] = {A + 2, A + 1, A + 3, A}, ***C;
	// C = b;
	// ++C;
	// printf("%s", *(*C + 1) + 1);

//2)	// int d, s;
	// do {
	// 	s = 0;
	// 	while(n)
	// 	{
	// 		d = n % 10;
	// 		s += d;
	// 		n /= 10;
	// 	}
	// 	n = s;
	// } while (n / 10 != 0);
	// return s;
//3)
	// int i = 32, k, l, m, j = 0 * 20;
	// k = i | j;
	// l = i & j;
	// m = k ^ l;
	// printf("%d %d %d %d %d", i, j, k, l, m);

//4)	// dp p1, p2, p3;
	// typedef double *dptr;
	// dptr ptr1, ptr2, ptr3;
	// printf("%u %u", sizeof(p3), sizeof(ptr3));
	// return 0;


// 	main(void)

// 	x = 5;
// 	p(&x);
// 	printf(x);

// }
// int x;
// void Q(int z)
// {
// 	z += x;
// 	printf(z);

// }
// void p(int *y)
// {
// 	int x = *y + 2;
// 	Q(x);
// 	*y = x - 1;
// 	printf(x);


	// double pi = 3.1415926535;
	// int a = 1;
	// int i;
	// for (i = 0; i < 3; i++)
	// 	if (a = cos(pi * i / 2))
	// 		printf("%d", 1);
	// 	else
	// 		printf("%d", 0);

	// int pla = 1;
	// switch (pla << (2 + pla))
	// {
	// default:
	// 	printf("Sachin");
	// case 4:
	// 	printf("Virat");
	// case 5:
	// 	printf("Sehwag");
	// case 8:
	// 	printf("Dhoni");
	// }
	// return 0;

	// int ar[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

	// int (*ptr)[4];
	// ptr = ar;
	// printf("%d", **ptr + * (*(ptr + 1) + 2) + * (*(ptr + 2) + 3));

	// return 0;

	// int val = f(5);
	// printf("%d\n", val);

// x=1;
// y="2";
// z=3;
// sum =0;
// for()

// 	int x = 5, y = 10, count;
// 	for (count = 1; count <= 2; count++)
// 	{
// 		y += funcf(x) + funcg(x);
// 		printf("%d", y);
// 	}
// }
// int funcf(int x)
// {
// 	int y;
// 	y = funcg(x);
// 	return (y);
// }
// int funcg(int x)
// {
// 	static int y = 10;
// 	y += 1;
// 	return (y + x);


// int begin()
// {
// 	printf("hello");
// }

// int f(int n)
// {
// 	if (n == 0)
// 		return 1;
// 	else
// 		return f(n - 1) - n + f(n - 1) + 2;
// }

	// int a[] = {1, 2, 3, 4, 5};
	// int b[] = {1, 2, 3, 4, 5};
	// if (a == b)
	// {
	// 	printf("yes");
	// }
	// else
	// {
	// 	printf("no");
	// }
	// return 0;

	int d = foo(1024, 2);
	printf("%d", d);
	return 0;
}
int foo(int n, int k)
{
	if (n < 1)
		return 0;

	return 1 + foo(n / k, k * 2);
}