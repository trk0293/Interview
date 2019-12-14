#include<stdio.h>
#include<stdlib.h>

# define num_mistakes 1

int algo(int** arr, int size){
int err_cnt=0;
int i =1;
while(size-i > 0){

if(*(*(arr)+size-i) >= (*(*(arr)+size-i-1))){
//Do nothing
}

else if(*(*(arr)+size-i) < (*(*(arr)+size-i-1))){
	err_cnt++;
	if(err_cnt <= num_mistakes)*(*(arr)+size-i-1) = *(*(arr)+size-i)-1;
	else return -1;
}
i++;
}
return 0;
}


void main(int argc, const char* argv[]){

int arr[3] = {4,2,3};
int* arr_ptr = arr;
int size = 3;
int ret_code = algo(&(arr_ptr),size);
if(ret_code == -1)printf("cant do it \n");
else printf("changed to non-decreasing order. de-reference arr\n");
return ;
}
