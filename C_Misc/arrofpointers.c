#include<stdio.h>
int main()
{

    int *pa[3];
    int i,a=5,b=10,c=15;
    pa[0] =&a;
    pa[1] =&b;
    pa[2] =&c;
    for(i=0;i<3;i++){
        printf("pa[%d] %p\t",i,pa[i]);
        printf("*pa[%d] %d\t",i,*pa[i]);

    }
}
/*pa[0] 000000000061FDFC  *pa[0] 5        pa[1] 000000000061FDF8  *pa[1] 10       pa[2] 000000000061FDF4  *pa[2] 15*/
