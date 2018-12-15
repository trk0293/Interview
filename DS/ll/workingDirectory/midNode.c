#include<stdio.h>
#include<stdlib.h>

//Node structure
typedef struct Node{
	int data;
	llNode* next;
}llNode;

//create a Node
llNode* create(int data){
llNode* node = (llNode*)malloc(sizeof(llNode));
node->data = data;
node->next = NULL;
return node;
}

//find mid element
llNode* algo(llNode* head){
llNode* s_ptr,f_ptr=head;
while(f_ptr->next->next!=NULL){
	s_ptr=s_ptr->next;
	f_ptr=f_ptr->next->next;
}
return *s_ptr;
}

//print linked list
void printLl(llNode* head){
while(head->next!=NULL){
	printf("%d",head->next);
	head = head->next;
}
return;
}

//driver
int main(int argc, const char* argv[]){
llNode* head = create(1);
head->next=create(2);
head->next=create(3);
head->next=create(4);
llNode* mid =algo(head);
printf("%d",mid->data);
return 0;
}
