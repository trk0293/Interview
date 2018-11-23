#include<stdio.h>
#include<stdlib.h>

int compare(int a, int b);
void diffcal(int* arr,int size){
    // step:1 create diff array. diff[i] = *(arr+i+1)-*(arr+i)
    int diffValue,temp,i=0;
    int* diff= (int*)malloc((size-1)*sizeof(int));
    for(i=0;i<size-1;i++){
        diff[i] = *(arr+i+1)-*(arr+i);
    }
    //print diff array.  // -- Debug test.
    for(i=0;i<=size-2;i++){
        printf("diff on %d is %d \n",i,diff[i]);
    }
    
    // step 2 : Find the sub array that has great sum. Traverse throught diff array.
    diffValue = diff[0];
    for(i=1;i<=size-2;i++){
        if(diff[i-1]>0){
            diff[i]=diff[i-1]+diff[i];
            diffValue=compare(diffValue,diff[i]);
        }}
    printf("Largest difference is %d \n",diffValue);
    return ;
}
int compare(int a, int b){
    if (a>=b) return a;
    else return b;
}

int main(int argc, const char * argv[]){
    
    int arr[]={3,1,4,7,5,100,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    diffcal(arr,size);
    return 0;
}


