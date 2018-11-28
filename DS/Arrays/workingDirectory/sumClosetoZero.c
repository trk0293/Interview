#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//# define closest -INFINITY //Need to replace with -inf
void fnclosest(int* arr, int size){
int l,r,leftIndex,rightIndex;
double closest = INFINITY;
l=0;r=size-1;
while(r>l){
if((*(arr+l)+*(arr+r)<closest) && (*(arr+l)+*(arr+r)>=0)){
	closest=*(arr+l)+*(arr+r);
	leftIndex  = l;
	rightIndex = r;
	l++;r--;
}
else if(*(arr+l)+*(arr+r)>=closest)r--;
else l++;
}
printf("closest sum is %f with values %d and %d\n",closest,*(arr+leftIndex),*(arr+rightIndex));
return;
}





int main(int argc, const char* argv[]){
int i,size;
int arr[]={-5,-2,1,2,6,9};
size = sizeof(arr)/sizeof(arr[0]);
fnclosest(arr,size);

return 0;
}
