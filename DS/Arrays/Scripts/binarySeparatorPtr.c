
/*Binary separator.c
//Separate binaries in the input array
//input:size, array with binaries(random).
//output:separated binaries.
Author : raghav
*/
#include<stdio.h>
#include<stdlib.h>

void binarySeparator(int* arr,int size){
int l,temp=0;
int r=size-1;
for(l=0;l<=r;l++){
if(*(arr+l)){
while(r>l){
    if(!*(arr+r)){
        temp=*(arr+l);
        *(arr+l)=*(arr+r);
        *(arr+r)=temp;
        r--;
        break;
    }
    r--;
}
}
}
printf("\n Elements are :");
for(l=0;l<size;l++)printf(" %d",*(arr+l));
return;
}


int main(int argc,const char argv[]){
int *arr,size,i;
printf("Enter size of array:");
scanf("%d",&size);
arr = (int*)malloc(sizeof(int)*size);
printf("\nEnter elements : ");
for(i=0;i<size;i++)scanf("%d",&arr[i]);
binarySeparator(arr,size);
return 0;
}
