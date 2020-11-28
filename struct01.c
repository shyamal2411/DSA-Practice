#include<stdio.h>
#include<string.h>
struct student{
char name[20];
int rollno;
float marks;
};
main()
{

    struct student stu1 = {"Shyamal", 25,2};
    struct student stu2, stu3;
    strcpy(stu2.name,"John");
    stu2.rollno =26;
    stu2.marks =98;
    printf("Enter the name, rollno, and marks for stu3: ");
    scanf("%s %d %f",stu3.name,&stu3.rollno,&stu3.marks);
    printf("stu1: %s %d %.2f\n",stu1.name, stu1.rollno, stu1.marks);
    printf("stu2: %s %d %.2f\n",stu2.name, stu2.rollno, stu2.marks);
    printf("stu3: %s %d %.2f\n",stu3.name, stu3.rollno, stu3.marks);

}
/*Enter the name, rollno, and marks for stu3: 98 45 23
stu1: Shyamal 25 2.00
stu2: John 26 98.00
stu3: 98 45 23.00 */
