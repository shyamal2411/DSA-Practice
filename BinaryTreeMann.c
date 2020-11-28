#include<stdio.h>
#include<stdlib.h>

struct Queue
{
	int size;
	int front;
	int rear;
	struct Node **Q;
};

void Qcreate(struct Queue *q, int size)
{
	q->size = size;
	q->front = q->rear = 0;
	q->Q = (struct Node **)malloc(q->size * sizeof(struct Node *));
}


void enqueue(struct Queue *q, struct Node *x)
{
	if ((q->rear + 1) % q->size == q->front)
	{
		printf("Queue is Full");
	}
	else
	{
		q->rear = (q->rear + 1) % q->size;
		q->Q[q->rear] = x;
	}
}

struct Node* dequeue(struct Queue *q)
{
	struct Node* x = NULL;
	if (q->front == q->rear)
	{
		printf("Queue is Empty");
	}
	else
	{
		q->front = (q->front + 1) % q->size;
		x = q->Q[q->front];
	}
	return x;
}

int isEmpty(struct Queue q)
{
	return q.front == q.rear;
}

struct Node
{
	struct Node *lchild;
	int data;
	struct Node *rchild;
};

struct Node *root = NULL;

void Bcreate()
{
	struct Node *p, *t;
	int x;
	struct queue q;
	Qcreate(&q, 100);

	printf("Enter root Value:");
	scanf("%d", &x);

	root = (struct Node*)malloc(sizeof(struct Node));
	root->data = x;
	root->lchild = root->rchild = NULL;
	enqueue(&q, root);

	while (!isEmpty(q))
	{
		p = dequeue(&q);
		printf("Enter Left Chlid:");
		scanf("%d", &x);
		if (x != -1)
		{
			t = (struct Node*)malloc(sizeof(struct Node));
			t->data = x;
			t->lchild = t->rchild = NULL;
			p->lchild = t;
			enqueue(&q, t);
		}

		printf("Enter Right Chlid:");
		scanf("%d", &x);
		if (x != -1)
		{
			t = (struct Node*)malloc(sizeof(struct Node));
			t->data = x;
			t->lchild = t->rchild = NULL;
			p->rchild = t;
			enqueue(&q, t);
		}
	}
}

void preorder(struct Node *p)
{
	if (p)
	{
		printf("%d", p->data);
		preorder(p->lchild);
		preorder(p->rchild);
	}
}

void inorder(struct Node *p)
{
	if (p)
	{
		inorder(p->lchild);
		printf("%d", p->data);
		inorder(p->rchild);
	}
}

void postorder(struct Node *p)
{
	if (p)
	{
		postorder(p->lchild);
		postorder(p->rchild);
		printf("%d", p->data);
	}
}

// void Levelorder(struct Node *p)
// {
// 	Queue *q;
// 	printf("%d", p->data);
// 	enqueue(&q, p);

// 	while (!isEmpty(q))
// 	{
// 		p = dequeue(&q);
// 		if (p->lchild)
// 		{
// 			printf("%d", p->lchild->data);
// 			enqueue(&q, p->lchild);
// 		}
// 		if (p->rchild)
// 		{
// 			printf("%d", p->rchild->data);
// 			enqueue(&q, pp->rchild);
// 		}
// 	}
// }

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Bcreate();
	preorder(root);
}