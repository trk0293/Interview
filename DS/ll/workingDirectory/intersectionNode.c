#include<stdio.h>
#include<stdlib.h>

// linked list node structure
typedef struct llNode{
	int data;
	llNode* next;
}llNode;

//stack node structure 
typedef struct stack{
	int top;
	int capacity;
	int* arr;
}stack;


//create linked list Node
llNode* craetellNode(int data){
	llNode* ll =(llNode*)malloc(sizeof(llNode));
	ll->data=data;
	ll->next=0;
	return ll;
}

llNode* addllNode(llNode* head,int data){
llNode* head->next=(llNode*)malloc(sizeof(llNode));
head->next->data=data;
return head->next;
}

//create stack structure 
stack* createStack(int capacity){
stack* s = (stack*)malloc(sizeof(stack));
s->capacity = capacity;
s->top = -1;
s->arr = (int*)malloc(sizeof(int)*capacity);
return s;
}

// returns 1/True when stack is empty
int isEmpty(stack* s){
return s->top==-1;
}

//peek
int peek(stack* s){
if!(isEmpty(s))return s->(arr+capacity-1);
}

//push
int push(stack* s,int data){
s->top++;
s->arr[top]=data;
return peek(s);
}


//pop
int pop(stack* s){
if !isEmpty(s){
int tmp=s->arr[top];
s->top--;
return tmp; 
}
printf("stack's Empty!\n");
}

//algo
llNode* algo(llNode* h1,llNode* h2,stack* s1,stack* s2){
//Traverse ll-1 and add to stack 1
while!(h1->next){
printf("Added %d to stack 1\n",push(s1,h1->data);
h1=h1->next;
}
//Traverse ll-2 and add to stack 2
while!(h2->next){
printf("Added %d to stack 2\n",push(s2,h2->data);
h2=h2->next;
}
//verify if ll's merged
if(peek(s1)==peek(s2)){
while(pop(s1)==pop(s2))

}
printf("No merge!\n");
}

