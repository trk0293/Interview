#include<stdio.h>
#include<stdlib.h>

//Node structure 
typedef struct Node{
	int data;
	llNode* next;
}llNode;

//create a Node
llNode* create(int data){
llNode* node=(llNode*)malloc(sizeof(llNode));
node->data=data;
node->next=NULL;
return node;
}

//kth element from tail
llNode* kthElement(llNode* head){
llNode* kth_ptr,home_ptr=NULL;
kth_ptr = head->next->next;
home_ptr=head;
while(kth_ptr->next){
	kth_ptr=kth_ptr->next;
	home_ptr=home_ptr->next;
}
return home_ptr;
}

//driver
int main(int argc,const char* argv[]){
llNode* head=create(1);
head->next=create(2);
head->next->next=create(3);
head->next->next->next=create(4);
llNode* kth_ptr=kthElement(head);
printf("%d",kth_ptr->data);
return 0;
}
