#include<stdio.h>
#include<stdlib.h>


void diffcal(int* arr,int size){
// step:1 create diff array. diff[i] = *(arr+i+1)-*(arr+i)
int diffValue,i=0;
int* diff= (int*)malloc(size*sizeof(int));
for(i=0;i<size;i++){
diff[i] = *(arr+i+1)-*(arr+i);
}
/*print diff array.  -- Debug test.
for(i=0;i<size;i++){
printf("diff on %d is %d \n",i,diff[i]);
}
*/
// step 2 : Find the sub array that has great sum. Traverse throught diff array.
for(i=0;i<size;i++){
if(i==1) diffValue = diff[i];
if((diff[i-1]>0) && (i>0))
diffValue=diffValue+compare(diff[i],diff[i-1]));
}
printf("Largest difference is %d \n",diffValue);
return ;
}

int compare(int a, int b){
	if (a>=b) return a;
	else return b;
}

int main(int argc, const char * argv[]){
	int arr[]={4,3,10,2,9,1,6};
	int size=sizeof(arr)/sizeof(arr[0]);
	diffcal(arr,size);
	return 0;

}
