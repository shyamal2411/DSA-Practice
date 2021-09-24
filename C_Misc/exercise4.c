#include<stdio.h>
/*int main()
{
    int i,arr[5] = {25,30,45,60,75},*p;
    p=arr;
    for(i=0;i<5; i++)
    {
        printf("%d\n%d\t",*(p+i),p[i]);
    }
}*/
/* Answer:
25
25      30
30      45
45      60
60      75
75*/

/*int main()
{
    int i,arr[5] = {25,30,45,60,75},*p=arr;
    for(i=0; i<5;i++)
    {
        (*p)++;
        printf("%d ",*p);
        p++;
    }
}*/
//26 31 46 61 76

int main()
{
    int arr[5]= {25,30,45,60,75},*p;
    for(p=&arr[0];p<arr+5;p++){
        printf("%d ",*p);
    }
}
//25 30 45 60 75
