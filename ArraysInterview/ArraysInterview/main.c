// Moore voting algorithm to find the majority element in an array. 




#include<stdio.h>
#include<stdlib.h>

int findMajority(int* arr, int size){
	int* dupArr=(int*)malloc(sizeof(arr));
	int i,count=0;
	int index = *(arr);
	/* Moore voting algorithm sub -1 end*/
	for(i=0;i<size;i++){
		if(*(arr+i)==index)
			{
				count++;
				dupArr[index]=count;
			}
		else if(*(arr+i)!=index && dupArr[index]>0){
				count--;
				dupArr[index]=count;
			}
		else{
				index = *(arr+i);
				dupArr[index]=1;
		}		
	}
	printf("%d \n",index);
	
	/* check if Moore's decision is true sub-2 end*/


}



int main(int argc, const char * argv[]){
	int arr[]={2,2,2,2,2,3,4};
	int size=sizeof(arr)/sizeof(arr[0]);
	findMajority(arr,size);
	return 0;
}