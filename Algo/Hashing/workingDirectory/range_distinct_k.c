#include<stdio.h>
#include<stdlib.h>

#define maxVal 10


void algo(int* arr, int low, int high,int size){
int i;
//Create hash arr k hash map
int* hash_arr_k = (int*)malloc(sizeof(int)*maxVal);
int* hash_arr =(int*)malloc(sizeof(int)*maxVal);
//create range hash map--o(range)
for(i=low;i<=high;i++)hash_arr_k[*(arr+i)]++;
//create complete array hash map (o(size)
for(i=0;i<size;i++)hash_arr[*(arr+i)]++;
//compare hash_arr_k with hash_arr
for(i=low;i<=high;i++){
if(hash_arr_k[(*arr+i)]==hash_arr[*(arr+i)]) printf("%d",*(arr+i));
}
return;
}

//Driver program
int main(int argc, const char* argv[]){
int i,size,low,high;
printf("edit .c and change maxVal macro to the maximum value\n");
printf("Enter size of the array \n");
scanf("%d",&size);
printf("Enter low and high index values \n");
scanf("%d",&low);
scanf("%d",&high);
printf("Enter elements\n");
int* arr=(int*)malloc(sizeof(int)*size);
for(i=0;i<size;i++)scanf("%d",&arr[i]);
algo(arr,low,high,size);
return 0;
}



