#include<stdio.h>
struct st{
    char name[20];
    int rollno;
    float marks;
};
main()
{
    struct st st1 = {"Drashti",24,100}, st2;
    st2= st1;
    printf("st1 : %s %d %.2f\n", st1.name, st1.rollno, st1.marks);

    printf("st2 : %s %d %.2f\n", st2.name, st2.rollno, st2.marks);
}
/*st1 : Drashti 24 100.00
st2 : Drashti 24 100.00*/
