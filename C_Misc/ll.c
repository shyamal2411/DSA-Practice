#include<stdio.h>
#include<stdlib.h>
struct node{

    int data;
    struct node *next;
}*first=NULL;

int count(struct node *p)
{
  int l=0;

  while(p)
  {
    l++;
    p=p->next;
  }
  return l;
}
void create(int a[],int n)
{
  int i;
  struct node *tmp,*last;
  first =(struct node *)malloc(sizeof(struct node));
  first->data=a[0];
  first->next=NULL;
  last =first;

  for(i=1;i<n;i++)
  {
    tmp=(struct node *)malloc(sizeof(struct node));
    tmp->data=a[i];
    tmp->next=NULL;
    last->next=tmp;
    last=tmp;
  }
}


void display(struct node *p)
{
  while (p!=NULL)
  {
    printf("The element is:");
    printf("%d\n",p->data);
    p=p->next;
  }
}
/*no doing this method as other methods are better & easier

struct node *Lsearch(struct node *p,int key)
{
struct node *q;
while(p!=NULL)
{
if(key==p->data)
{
q->next=p->next;
p->next=first;
first=p;
return p;
}
q=p;
p=p->next;
}
return NULL;
}
*/
struct node *Lsearch(struct node *p,int key)
{
  while(p!=NULL)
  {
    if(key==p->data)
    return p;

    p=p->next;
  }
  return NULL;
}
//recursive version of linear search
struct node *Rsearch(struct node *p,int key)
{
  if(p==NULL)
  return NULL;
if(key==p->data)
  return p;
  Rsearch(p->next,key);
}

void insert (struct node *p,int index,int x)
{
  int i;
  struct node *t;
  if(index < 0 || index > count (p))
  return;

  t=(struct node *)malloc (sizeof(struct node));
  t->data=x;

  if(index == 0)
  {
    t->next=first;
    first =t;
  }
  else
  {
    for(i=0;i<index-1;i++)
    p=p->next;

    t->next =p->next;
    p->next=t;
  }
}
 void sortedinsert(struct node *p,int x)
 {
   struct node *t,*q= NULL;
   t=(struct node *)malloc(sizeof(struct node));
   t->data=x;
   t->next=NULL;
      if(first==NULL)
        first =t;
        else
        {
          while(p&& p->data<x)
          {
            q=p;
            p=p->next;
          }
          if(p==first)
        {
          t->next=first;
          first=t;
        }
        else
      {
        t->next=q->next;
        q->next=t;
      }

      }

 }
int main()
{
    struct node *tmp;/*In Lsearch video it was given as temp,was as tmp was used for
    above functions, continuing with tmp*/
  int a[]={1,2,3,5,7,8,89,56};
  create (a,8);// here in create (a,8);, 8 shows the nmber of elements to be inserted in list.

   //insert (first,8,11);
//tmp=Rsearch(first,27);// both these works,this is recursive method
//tmp=Lsearch(first,7); //& this is iterative method
  /*
          TEMPORARILY COMMENTED TO RUN OTHER FUNCTIONS
    if(tmp)
        {
          printf("Key is Found %d\n",tmp->data);
        }
      else{
            printf("Key not found\n");
          }*/
          sortedinsert(first,455);
       display(first);
       printf("\n\n");
    return 0;
}
