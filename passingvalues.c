#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

void foo( char ** ptr)
{
   *ptr = malloc(255); // allocate some memory - malloc returns address value
   //you are assigning that address val to ptr
   
   /* key points:
   to change val of MyVariable: pass by reference
   to use val of MyVariable but not change it: pass by val
   MyVariable can be direct variable or reference (this is recursive)
   */
   
   strcpy( *ptr, "Hello World");
}
void alloc( uint32_t *defa,int *b){
    printf("in alloc: %d\n",*b);
    *b=20;
    printf("in alloc: %d\n",*b);
    char *ptr2 = malloc(255);
    *defa = ptr2;
}
void foo2 (char* ptr){
    strcpy(ptr,"Hello World");
}
int main()
{
   char *ptr = 0;
   uint32_t a=0;
   int b = 10;
   printf("%d\n",b);
  
   printf("%ld\n",ptr);
   //printf("%d\n",*ptr);
   // call function with a pointer to pointer
   //foo( &ptr );
   alloc(&a,&b);
   printf("%d\n",b);
   ptr = a;
   printf("%ld\n",a);
   //ptr = malloc(255); // allocate some memory
   foo2(ptr);
   printf("%ld",ptr);
   printf("\n%c",*ptr);
   printf("\n%s\n", ptr);
   // free up the memory
   free(ptr);
   return 0;
}
