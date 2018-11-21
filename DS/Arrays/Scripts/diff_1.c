//Diff between two numbers. Larger element has the highest index.
//Find the maximum difference between two elements in an array such that larger element appears after the smaller number
//propably T(n)=o(n^2)

#include<stdio.h>
#include<stdlib.h>


void diffcal(int* arr,int size){
	int l,r,lMax,rMax,diff=0;
	for(r=size-1;r>=1;r--){
		for(l=r-1;l>0;l--){
			if(*(arr+r)-*(arr+l)>diff)
			{diff = *(arr+r)-*(arr+l); lMax= *(arr+l);rMax=*(arr+r);} 
		}
	}
	printf("The algo output %d and %d as numbers and %d as difference \n",lMax,rMax,diff);
	return;
}


int main(int argc, const char * argv[]){
	int arr[]={4,3,10,2,9,1,6};
	int size=sizeof(arr)/sizeof(arr[0]);
	diffcal(arr,size);
	return 0;

}