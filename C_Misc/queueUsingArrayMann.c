#include<stdio.h>
#include<stdlib.h>

struct Queue
{
	int size;
	int front;
	int rear;
	int *Q;
};

void enqueue(struct Queue *q, int x)
{
	if (q->rear == q->size - 1)
	{
		printf("Queue is Full");
	}
	else
	{
		q->rear++;
		q->Q[q->rear] = x;
	}
}

void Cenqueue(struct Queue *q, int x)
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

int Cdequeue(struct Queue *q)
{
	int x = -1;
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

int dequeue(struct Queue *q)
{
	int x = -1;
	if (q->front == q->rear)
	{
		printf("Queue is Empty");
	}
	else
	{
		q->front++;
		x = q->Q[q->front];
	}
	return x;
}

void Display(struct Queue q)
{
	for (int i = q.front + 1; i <= q.rear; i++)
	{
		printf("%d ", q.Q[i]);
	}
	printf("\n");
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	struct Queue q;
	scanf("%d", &q.size);
	q.Q = (int *)malloc(q.size * sizeof(int));
	q.front = -1;
	q.rear = -1;
	enqueue(&q, 10);
	enqueue(&q, 20);
	enqueue(&q, 30);
	enqueue(&q, 30);
	enqueue(&q, 50);
	dequeue(&q);
	Display(q);
}