#include<stdio.h>
#include<stdlib.h>
void oddNumberCheck(int* arr, int size){
int i,result=0;
for(i=0;i<size;i++)result= result^*(arr+i);
result?printf("Odd Freq number is %d \n",result):printf("There is no odd Freq number \n");
return;
}
int main(int argc, char * argv[]){
int *arr,size,i;
printf("Enter the size of the array :\n");
scanf("%d",&size);
printf("Enter the elements of size %d with space between elements\n",size);
for(i=0;i<size;i++)scanf("%d",&arr[i]);
oddNumberCheck(arr,size);
return 0;
}
