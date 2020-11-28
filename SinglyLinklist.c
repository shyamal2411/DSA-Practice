#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node* next;
}* first = NULL;

void create(int a[], int n) {
  int i;
  struct node *t, *last;
  first = (struct node*)malloc(sizeof(struct node));
  first->data = a[0];
  first->next = NULL;
  last = first;

  for (i = 1; i < n; i++) {
    t = (struct node*)malloc(sizeof(struct node));
    t->data = a[i];
    t->next = NULL;
    last->next = t;
    last = t;
  }
}
void display(struct node* p) {
  printf("The linkedlist is :\n");
  while (p != NULL) {
    printf("%d\t", p->data);
    p = p->next;
  }
  printf("\n");
}

void rdisplay(struct node* p) {
  if (p != NULL) {
    printf("%d\t", p->data);
    rdisplay(p->next);
    // printf("%d\t", p->data); /*if this line is executed after rdisplay
    // function, we can obtain reverse linkedlist, another way of reversing the
    // list*/
  }
}
int count(struct node* p) {  // time taken is n  O(n).
  // space is constant O(1).
  int c = 0;
  while (p != 0) {
    c++;
    p = p->next;
  }
  return c;
}

int rcount(struct node* p) {
  if (p == 0)
    return 0;

  else
    return rcount(p->next);
  /*
                  another approach
          if(p!=NULL)
          return 1+count(p->next);

          return 0;

          */
}
// iterative approach
int sum(struct node* p) {
  int s = 0;
  while (p != NULL) {
    s += p->data;
    p = p->next;
  }
  return s;
}
// resursive approach
int rsum(struct node* p) {
  if (p == NULL)
    return 0;
  else
    return rsum(p->next) + p->data;
}

// iterative approach
int max(struct node* p) {
  int max = -32767;

  while (p) {
    if (p->data > max)
      max = p->data;
    p = p->next;
  }
  return max;
}

int rmax(struct node* p) {
  int x = 0;

  if (p == 0)
    return (-32767);
  x = rmax(p->next);
  if (x > p->data)
    return x;

  else
    return p->data;
}

// Linear search function
// struct node * lsearch(struct node *p, int key)
// {
// 	while (p != NULL)
// 	{
// 		if (key == p->data)
// 			return p;
// 		p = p->next;
// 	}
// 	return NULL;
// }

// binary search approach
/*struct node * lsearch(struct node *p, int key)
{
        struct node *q;

        while (p != NULL)
        {
                if (key == p->data)
                {
                        q->next;
                        p->next = first;
                        first = p;
                        return p;
                }
                q = p;
                p = p->next;
        }
        return NULL;
}*/

// struct node * rsearch(struct node *p, int key)
// {
// 	if (p == NULL)
// 		return NULL;
// 	if (key == p->data)
// 		return p;
// 	rsearch(p->next, key);
// }

void sortinsert(struct node* p, int x) {  // min time is O(1),max time is O(n)
  struct node *t, *q = NULL;              // q is tail pointer
  t = (struct node*)malloc(sizeof(struct node));
  t->data = x;
  t->next = NULL;

  if (first == NULL)
    first = t; /*if no node in the lsit then assign t as first*/
  else {
    while (p && p->data < x) {
      q = p;
      p = p->next;
    }
    if (p == first) /*if the element we're inserting is smallest,then it has to
                       be inserted before first node*/
    {
      t->next = first;
      first = t;
    } else {
      t->next = q->next;
      q->next = t;
    }
  }
}

int issorted(struct node* p) {
  int x = -65536;
  while (p != NULL) {
    if (p->data < x)
      return 0;
    x = p->data;
    p = p->next;
  }
  return 1;
}

void duplicate(struct node* p) {
  struct node* q = p->next;
  while (q != NULL) {
    if (p->data != q->data) {
      p = q;
      q = q->next;
    } else {
      p->next = q->next;
      free(q);
      q = p->next;
    }
  }
}

void reverse1(struct node* p) {
  int *a, i = 0;
  struct node* q;
  a = (int*)malloc(sizeof(int) * count(p));
  while (q != NULL) {
    a[i] = q->data;
    q = q->next;
    i++;
  }
  q = p;
  i--;
  while (q != NULL) {
    q->data = a[i];
    q = q->next;
    i--;
  }
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input1.txt", "r", stdin);
  freopen("output1.txt", "w", stdout);
#endif

  // struct node  *temp;
  int a[] = {10, 20, 30, 40, 50};
  int n = sizeof(a[5]) / sizeof(int);
  void create(a, n);
  void reverse1(first);
  printf("%d\n", issorted(first));

  // if (issorted(first))//just another way of writing
  // {
  // 	printf("Sorted\n");
  // }
  // else
  // {
  // 	printf("Not sorted\n");
  // }
  // printf("Length of linkedlist is: %d\n", count(first));//or  rcount(first);
  // rdisplay(first);
  // printf("\nSum of elements in linkedlist is %d\n", sum(first));//or write
  // rsum(first); printf("\nMax is %d\n", max(first));//or write rmax(first)
  // temp = lsearch(first, 3);
  // if (temp)
  // 	printf("\n%d is found \n", temp->data);
  // else
  // 	printf("Key not found\n");
  // void sortinsert(first, 1);
  void duplicate(first);
  void display(first);

  printf("\n\n");
  return 0;
}