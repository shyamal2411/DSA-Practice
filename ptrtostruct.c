#include<stdio.h>
struct st{
     char name[20];
    int rollno;
    int marks;
};
void display(struct st *);
void inc_marks(struct st *);

main()
{
        struct st stu1= {"John", 28,97};
        struct st stu2= {"SG",78,56};
        inc_marks(&stu1);
        inc_marks(&stu2);
        display (&stu1);
        display(&stu2);
}
void inc_marks(struct st *stuptr)
{

    (stuptr->marks)++;
}
void display(struct st *stuptr)
{
    printf("Name- %s\t", stuptr->name);
    printf("Rollno- %d\t", stuptr->rollno);
    printf("Marks- %d\t", stuptr-> marks);
}
/*Name- John      Rollno- 28      Marks- 98       Name- SG        Rollno- 78      Marks- 57*/
