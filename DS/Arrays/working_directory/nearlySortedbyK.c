#include<stdio.h>
#include<stdlib.h>

// trick is use insertion sort and just compare previous k. P.s: k should be less than logn, else go for Divide and conquer algo to sort.
void algo(int* arr,int size){
int i,temp;
for(i=1;i<size;i++){
k=0;
while(k<3&&i>=0){
	if(*(arr+i)>(arr+i-k)){
		temp = *(arr+i);
		*(arr+i)=*(arr+i-k);
		*(arr+i-k)=temp;
	}
	k++;
}
}
for(i=0;i<size;i++)printf("%d,",*(arr+i));
printf("\n");
return;
}


//driver 
int main(int argc, const char* argv[]){
int i,size=0;
printf("Enter the size of array:\n");
scanf("%d",&size);
int* arr =(int*)malloc(sizeof(int)*size);
printf("Enter elements\n");
for(i=0;i<size;i++)scanf("%d",&arr[i]);
algo(arr,size);
return 0;
}
