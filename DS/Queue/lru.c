#include<stdio.h>
#include<stdlib.h>
//#include<cstddef.h>
struct Qnode{
	int data;
	struct Qnode* prev;
	struct Qnode* next;
};

void push(struct Qnode** head, int value){
	//step 1 create a new node
	struct Qnode* nN = (struct Qnode*)malloc(sizeof(struct Qnode));
	nN->data = value;
	//step 2 change next of new node to head
	nN->next = *head;
	nN->prev = NULL;
	//step 3 change previous of head to new node
	if(*head != NULL)
		(*head)->prev = nN;
	//step 4 make new node as head
	*(head) = nN;
return;
}

/*
struct Qnode* remove_after(struct Qnode** p_node){
	struct Qnode* tmp_ptr = *p_node->next;
	*p_node->next = *p_node->next->next;
	*p_node->next->prev = *p_node;
return tmp_ptr;
}
*/
struct Qnode* remove_l(struct Qnode** p){
	struct Qnode* tmp_ptr = *p;
	(*p)->prev->next = (*p)->next;
	(*p)->prev->next->prev = (*p)->next;
return tmp_ptr;
}

void printall(struct Qnode* p){
	while(p != NULL){
	printf("%d->",p->data);
	p=p->next;
}
printf("\n");
return;
}
int main(int argc, const char* argv[]){
struct Qnode* head = NULL; 
push(&head,7);
push(&head,8);
push(&head,9);
printall(head);
struct Qnode* removed_node = remove_l(&(head->next));
printf("%d\n",removed_node->data);
return 0;
}
