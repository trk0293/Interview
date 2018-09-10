/* Driver program from hacker rank */



// Complete the countSwaps function below.
void countSwaps(int a_count, int* a) {
    int sorted = false;
    int swaps =0;
    for(int i=0;i<a_count-1;i++){
        if(sorted != true){
            sorted = true;
            for(int j=0;j<a_count-1;j++){
                if(*(a+j)>*(a+j+1))
                {
                    int tmp = *(a+j+1);
                    *(a+j+1) = *(a+j);
                    *(a+j) = tmp;
                    sorted = false;
                    swaps++;
                }
            }
        }
    }
    printf("Array is sorted in %d swaps.\n",swaps);
    printf("First Element: %d\n",*a);
    printf("Last Element: %d\n",*(a+a_count-1));
    return;
}
