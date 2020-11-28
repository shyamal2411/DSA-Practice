#include<stdio.h>
struct student{
    char name[20];
    int rollno;
    int marks;
};
int main()
{

    struct student stu = {"SG",25,90};
    struct student *ptr =&stu;
    printf("Name- %s\n",ptr->name);
    printf("Rollno- %d\n",ptr-> rollno);
    printf("Marks- %d\n",ptr-> marks);
}
/*Name- SG
Rollno- 25
Marks- 90*/
