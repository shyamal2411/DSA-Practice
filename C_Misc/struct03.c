#include<stdio.h>
struct st{
    char name[20];
    int rollno;
    int marks;
    };
    void display(char name[], int rollno, int marks);
    main()
{

    struct st stu1 = {"John",12, 18};
    struct st stu2;

   strcpy(stu2.name, "Mary");
    stu2.rollno = 18;
    stu2.marks =90;
    display(stu1.name,stu1.rollno, stu1.marks);
    display(stu2.name,stu2.rollno, stu2.marks);

}
void display(char name[],int rollno, int marks)
{
    printf("Name- %s\n",name);
    printf("Rollno- %d\n",rollno);
    printf("Marks- %d\n",marks);

}
/*Name- John
Rollno- 12
Marks- 18
Name- Mary
Rollno- 18
Marks- 90*/
