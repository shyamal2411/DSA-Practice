#include<stdio.h>
struct node{
    int info;
    struct node *link;
};

int main(struct node *start)
{
    /*while(p!=NULL){
        p=p->link;
    }*/
    struct node *p;
    if(start ==NULL)
    {
        printf("List is empty.\n ");
        return;
    }
    p=start;
    printf("List is: \n");
    while(p!= NULL)
    {
       //  scanf("%d ",p->info);
        printf("%d ",p->info);
        p=p->link;
    }
    printf("\n\n");
}
