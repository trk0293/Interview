#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>


// node structure 
typedef struct Node{
int data;
struct Node* next;
}llNode;

//create head node
llNode* createNode(int data){
llNode* head = (llNode*)malloc(sizeof(llNode));
head->data=data;
head->next=NULL;
return head;
}

//add Node
llNode* addNode(llNode* head, int data){
head->next =(llNode*)malloc(sizeof(llNode));
head->next->data=data;
head->next->next = NULL;
printf("\n %d -> %d",head->data,head->next->data);
return head->next;
}

// print all nodes 
void printAll(llNode* head){
printf("\n");while(head!=NULL){
printf("%d-",head->data);
head=head->next;
}
printf("\n");
}


void algo(llNode* head){
llNode* a_list = head;
head = head->next;
llNode* b = head;
head=head->next;
tmp_a = a_list;
tmp_b = b_list;
int flag = 0;
while(head!=NULL){
if(flag == 0){
tmp_a->next=head;
tmp_a = tmp_a->next;
}
if(flag==1){
tmp_b->next=head;
tmp_b = tmp_b->next;
}
if flag ? flag=0 : flag=1;
}
printf("First sub list \n");
printAll(a_list);
printf("second sub list \n");
printAll(b_list);
return ;
}


//driver program 
int main(int argc, const char* argv[]){
int i; 
llNode* head = createNode(1);
llNode* tmp_head =head;
tmp_head = addNode(tmp_head,2);
tmp_head = addNode(tmp_head,3);
tmp_head = addNode(tmp_head,4);
tmp_head = addNode(tmp_head,5);
tmp_head = addNode(tmp_head,6);
printAll(head);
return 0;
}
