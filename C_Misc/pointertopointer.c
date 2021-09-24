
#include<stdio.h>
#include<conio.h>
int  main()
{

    int a=5;
    int *pa;
    int **ppa;
    pa=&a;
    ppa= &pa;
     printf("Address of a =%p\n", &a);
     printf("Value of pa= Address of a = %p\n",pa);
     printf("Value of *pa= Value of a = %d\n", *pa);
     /*Address of a =000000000061FE14
        Value of pa= Address of a = 000000000061FE14
        Value of *pa= Value of a = 5*/
    printf("Address of pa = %p\n",&pa);
    printf("Value of ppa = Address of pa =%p\n",ppa);
    printf("Value of *ppa = Address of pa =%p\n",*ppa);
    /*Address of pa = 000000000061FE08
    Value of ppa = Address of pa =000000000061FE08
    Value of *ppa = Address of pa =000000000061FE14*/
     printf("Value of **ppa = value of a =%p\n",**ppa);
     //Value of **ppa = value of a =0000000000000005
     printf("Address of ppa =%p\n",ppa);
     //Address of ppa =000000000061FE08
}
