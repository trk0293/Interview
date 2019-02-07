#include<stdio.h>
#include<stdlib.h>

# define maxVal 10

int* algo(int* arr, int size){
int i;
//create hashmap
int* hashArr = (int*)malloc(sizeof(int)*maxVal);
for(i=0;i<size;i++)hashArr[*(arr+i)]++;
// create a duplicate array 
int* outArr* =(int*)malloc(sizeof(int)*size);
// bread and butter
for(i=0;i<size;i++){
for(j=i;j<hashArr[*(arr+i];j++)outArr[j]=hashArr[*(arr+i)]
}
return outArr;
}

//Driver program
int main(int argc,const char* argv[]){
int i,size,*out;
printf("Enter size of arr \n");
scanf("%d",&size);
int* arr =(int*)malloc(sizeof(int)*size);
printf("Enter elements :");
for(i=0;i<size;i++)scanf("%d",&arr[i]);
out = algo(arr,size);
for(i=0;i<size;i++)printf("%d-",*(out+i));
printf("\n");
return 0;
}

