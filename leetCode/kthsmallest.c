#include<stdio.h>
#include<stdlib.h>

# define HEAP_CAPACITY 9
# define k_s 3
// input required smallest #

struct heap{
	int capacity;
	int* arr;
	int counter;
};

struct heap* createHeap(int capacity){
	struct heap* h = (struct heap*) malloc(sizeof(struct heap));
	h->capacity = capacity;
	h->arr = (int*) malloc(sizeof(int)*capacity);
	h->counter = 0;
	return h;
}

void insert(struct heap* h, int value){
	if(h->counter < h->capacity){
		h->arr[h->counter] = value;
		heapifyBottomTop(h,h->counter);
		h->counter++;
	}
}

void heapifyBottomTop(struct heap* h,int counter){
	int parentIdx = (counter-1)/2;
	if(h->arr[parentIdx] > h->arr[counter]){
		int temp = h->arr[parentIdx]; 
		h->arr[parentIdx] = h->arr[counter];
		h->arr[counter] = temp;
		//heapify
		heapifyBottomTop(h, parentIdx);
	}
}


void print(struct heap *h){
	    int i;
	    printf("____________Print Heap_____________\n");
	    for(i=0;i< h->counter;i++){
		printf("-> %d ",h->arr[i]);
	    }
}



void heapifyTopBottom(struct heap* h, int minIdx){
	int temp;
	int leftIdx = (minIdx*2)+1;
	int rightIdx = (minIdx*2)+2;
	int parentIdx = minIdx;
	
	// check if end of tree is reached
	if(leftIdx > h->counter) leftIdx = -1;
	if(rightIdx > h->counter) rightIdx = -1;
	// choosing the path.
	if((leftIdx != -1) && (h->arr[leftIdx] < h->arr[minIdx])) minIdx = leftIdx;
	if((rightIdx != -1) && (h->arr[rightIdx] < h->arr[minIdx])) minIdx = rightIdx;
	// if minimum index is not parent index. swap and heapify
	if(minIdx != parentIdx){
		temp = h->arr[minIdx];
		h->arr[minIdx] = h->arr[parentIdx];
		h->arr[parentIdx] = temp;
		heapifyTopBottom(h, minIdx);
	}
}


int popMin(struct heap* h){
	int temp;
	if(h->counter == 0){
		printf("Empty heap - %d\n",h->counter);
	}
	temp = h->arr[0];
	h->arr[0] = h->arr[h->counter-1];
	h->counter--;
	heapifyTopBottom(h, 0);
	return temp;
}


int kthsmallest(struct heap* h, int k){
	int i =0;
	int kthsmallest = -1;
	while(i < k){
		kthsmallest=popMin(h);
		i++;
	}
	return kthsmallest;
}




void main(int argc, const char* argv[]){
	int kth  = -1;
	int i =0;
	struct heap* h = createHeap(HEAP_CAPACITY);
	for(i = 9; i>0;i--){
	insert(h,i);
	}
	//print(h);
	kth = kthsmallest(h,k_s);
	printf(" %d rd smallest number is %d \n",k_s,kth);
	return 0;
}
