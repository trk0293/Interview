#include<stdio.h>
#include<stdlib.h>

typedef struct Queue{
int front;
int rear;
int capacity;
int arr*;
}Queue;


Queue* createQueue(int capacity){
Queue* queue = (Queue*)malloc(sizeof(Queue));
queue->front=queue->rear=-1;
queue->arr =(int*)malloc(sizeof(int)*capacity);
return queue;
}

int isEmpty(Queue* queue){
return queue->front==-1;
}

void enqueue(Queue* queue,int key){
queue->arr[queue->rear]=key;
if(queue->front==-1){
queue->front++;
}

int dequeue(Queue* queue){
if(!isEmpty(queue)){return queue->arr[queue->front];
queue->front++;
if(front == rear)queue->front=queue->rear=-1;
}
else return -1;
}


int algo(Queue* q0,Queue* q1,Queue* q2,int* arr, int size){
int i,sum=0;
// sum calculation
for(i=0;i<size;i++)sum+=*(arr+i);
//re-structure algo
switch(sum%3){
case 0:
	break;
case 1:
	if(!isEmpty(q1))
		dequeue(q1);
	else if(q2->front>1){
		dequeue(q2);
		dequeue(q2);
	}
	else{
		printf("Not possible to have multipler\n");
		return -1;
	}
	break;
case 2:
	if(!(isEmpty(q2))
		dequeue(q2);
	else if(q1->front>1){
		dequeue(q1);
		dequeue(q1);
	}
	else{
		prinf("Not possible to have multiplier \n");
		return -1;
	}
	break;
default:
	printf("This cannot happen\n");
}
//re arrange and print all queues.
goPrint();
return 0;
}

