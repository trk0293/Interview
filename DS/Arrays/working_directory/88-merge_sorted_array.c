#include<stdio.h>
#include<stdlib.h>



// algo
void algo (int* arr1, int* arr2, int m, int n){
	int i,j,temp,sweep_index;
	for(j=n-1;j>=0;j--){
		sweep_index = m-1-1;
		temp = *(arr2+j);
		if(*(arr2+j) <= *(arr1+m-1)){
			*(arr2+j) = *(arr1+m-1);
			while(sweep_index >= 0){
				if(temp < *(arr1+sweep_index)){
					*(arr1+sweep_index+1) = *(arr1+sweep_index);
					if(sweep_index == 0){
						*(arr1+sweep_index) = temp;
						break;
					}
				}
				if(temp > *(arr1+sweep_index)){
					*(arr1+sweep_index+1) = *(arr1+sweep_index);
					*(arr1+sweep_index+1) = temp;
					break;
				}
			else sweep_index--;
			}

		}
		/* un-comment block to print arrays for every iteration
		i =0;
		while(i<5){
			printf("%d-%d \n",*(arr1+i),*(arr2+i));
			i++;
		}
		printf("-------------------------------\n");
		*/
	}

	int* conc_array = (int*)malloc(sizeof(int)*(m+n));
	for(i=0;i<m;i++){
		conc_array[i] = *(arr1+i);
	}
	for(i=0;i<n;i++){
		conc_array[m+i] = *(arr2+i);
	}
	j=0;
	while(j < (m+n)){
		printf("%d,",conc_array[j]);
		j++;
	}
	return;
}




// driver program

int main(int argc, const char* argv[]){

int arr1[5] = {5,12,17,21,23};
int arr2[5] = {1,2,4,6,8};
algo(arr1,arr2,5,5);
return 0;
}
