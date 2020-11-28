#include<stdio.h>
func(float f[],int *i, char c[5]);
int main()
{
    float farr[5] = {1,2,3,4,5};
    int iarr[5] =   {9,8,7,4,5};
    char carr[5] =  {6,5,4,1,2};
    printf("Size of farr =%u \n", sizeof(farr));
    printf("Size of iarr =%u \n", sizeof(iarr));
    printf("Size of carr =%u \n", sizeof(carr));
    func(farr,iarr,carr);
}
func(float f[],int *i, char c[5])
{
    printf("Inside the function: \n");
    printf("Size of f= %u\n",sizeof(f));
    printf("Size of i= %u\n",sizeof(i));
    printf("Size of c= %u\n",sizeof(c));

}
/*Size of farr =20
Size of iarr =20
Size of carr =5
Inside the function:
Size of f= 8
Size of i= 8
Size of c= 8*/
