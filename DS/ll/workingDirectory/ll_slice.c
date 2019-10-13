#include<stdio.h>
#include<stdlib.h>

typedef struct llnode{
	int data;
	llnode* next;
}node;



void slice_fn(node** ll_1, node** ll_2, int len_1, int len_2){
int i;
node* last = NULL; 
node* head = last;
for( i=0; i<len_1;i++){
	last->next = (node*)malloc(sizeof(node));
	last->next->data = *(*(ll_1)->data); 
	last->next->next = NULL;
	last = last->next;
	*ll_1 = *(ll_1)->next;
	len1-=1;
	last->next = (node*)malloc(sizeof(node));
	last->next->data = *(*(ll_2)->data);
	last->next->next = NULL;
	last = last->next;
	*ll_2 = *(ll_2)->next;
	len2-=1
}

while(len2>0){
	last->next = (node*)malloc(sizeof(node));
	last->next->data = *((*ll_2)->data);
	last->next->next = NULL;
	last = last->next;
        *ll_2 = *(ll_2)->next;
	len2-=1;
}	
printlast(&(head->next));
return;
}


void printlast ( node** last){
while(*last != NULL){
	printf("%d->",*(*(last)->data));
	*(last) = *(last)->next;
}
printf("\n");
return;
}



void main( int argc, const char* argv[]){
node* ll1, ll2=NULL;
node* ll1_b = ll1;
node* ll2_b = ll2;

int len1,len2 =3;
for(i=0;i<len1;i++){
	ll1->next = (node*)malloc(sizeof(node));
	ll1->next->data = i;
	ll1->next>next == NULL;
	ll1 = ll1->next;
}
for(i=4;i<len2;i++){
	ll2->next = (node*)malloc(sizeof(node));
	ll2->next->data = i;
	ll2->next->next = NULL;
	ll2 = ll2->next;
}
slicefn(&ll1_b,&ll2_b,len1,len2);
return;
}
