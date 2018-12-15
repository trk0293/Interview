#include<stdio.h>
#include<stdlib.h>

//node structure 

typedef struct llNode{
int data;
llNode* next;
}llNode;

//create  Node 
llNode* create(int data){
llNode* ll =(llNode*)malloc(sizeof(llNode));
ll->data = data;
ll->next = NULL;
return ll;
}

//reverse ll
llNode* algo(llNode* head){
llNode* prev,curr,nn=NULL;
curr = head;
while(nn!=NULL){
	prev=curr;
	curr=prev->next;
	nn=curr->next;
	curr->next=prev;
}
head = nn;
return head;
}

void printLl(llNode* head){
while(head->next!=NULL)printf("%d,",head->data);
}

//driver
int main(int argc, const char* argv[]){
llNode* head = create(1);
head->next = create(2);
head->next->next =create(3);
head->next->next =create(4);
head = algo(head);
printLl(head);
return 0;
}
