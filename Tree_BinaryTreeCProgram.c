#include <stdio.h>
#include <stdlib.h>

struct node {
	struct node* lchild;
	struct node* rchild;
	int data;
};
// REFERENCE: AKBARI SIR:
// https://www.learningcrux.com/video/mastering-data-structures-algorithms-using-c-andc/14/19
struct node {
	int size;
	int front;
	int rear;
	node **q;  // *q is for array and node * is for storing elements of type nodes
};

void Treecreate(struct qu* q, int size) {
	q->size = size;
	q->front = q->rear = 0;
	q->Q = (node**)malloc(q->size *
	                      sizeof(node*));  // array created dynamically from heap.
}

void enqueue(struct qu* q, node* q) {
	if ((q->rear + 1) % q->size == q->front)
		printf("Queue is Full.");
	else {
		q->rear = (q->rear) % q->size;
		q->Q[q->rear] = x;
	}
}

node* dequeue(struct qu* q) {
	node* x = NULL;
	if (q->front == q->rear)
		printf("Queue is Empty.\n");
	else {
		q->front = (q->front + 1) % q->size;
		x = q->Q[q->front];
	}
	return x;
}

struct node* root = NULL;
void create() {
	struct node *p, *t;
	int x;
	struct queue q;
	create(&q, 100);
	printf("Enter Root Value: ");
	scanf("%d", &x);
	root = (struct node*)malloc(sizeof(struct node));
	root->data = x;
	root->lchild = root->rchild = NULL;
	enqueue(&q, root);

	while (!isempty(q)) {
		p = dequeue(&q);
		printf("Enter left child");
		scanf("%d", &x);
		if (x != -1) {
			t = (struct node*)malloc(sizeof(struct node));
			t->data = x;
			t->lchild = t->rchild = NULL;  // leaf node.
			p->lchild = t;
			enqueue(&q, t);
		}
		printf("Enter right child");
		scanf("%d", &x);
		if (x != -1) {
			t = (struct node*)malloc(sizeof(struct node));
			t->data = x;
			t->rchild = t->lchild = NULL;  // leaf node.
			p->rchild = t;
			enqueue(&q, t);
		}
	}
}

int isempty(struct qu q) {
	return q.front = q.rear;  // will return true or false.
}
void preorder(struct node) {
	if (p) {
		printf("%d", p->data);
		preorder(p->lchild);
		preorder(p->rchild);
	}
}
int main() {
	Treecreate();
	preoder(root);

	return 0;
}