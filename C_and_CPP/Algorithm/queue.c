#include <stdio.h>
#include <stdlib.h>

struct queue {
	int size;
	int f;
	int r;
	int *arr;
};

int isEmpty(struct queue *q){
	if(q->r == q->f){
		return 1;
	}
	return 0;
}

int isFull(struct queue *q){
	if (q->r == q->size-1)
	{
		return 1;
	}
	return 0;
}

void enqueue(struct queue *q, int val){
	if (isFull(q))	
	{
		printf("This Queue is full\n");
	}
	else {
		q->r++;
		q->arr[q->r] = val;

	}

}

int dequeue(struct queue *q){
	int a = -1;
	if(isFull(q)){
		printf("THis Queue is isEmpty\n");
	} else {
		q->f++;
		a = q->arr[q->f];
	}

	return a;
}

int main() {
	struct queue q;
	q.size = 400;
	q.f = q.r = 0;
	q.arr = (int*) malloc(q.size*sizeof(int));

	return 0;
}