#include<stdio.h>
#include<stdlib.h>
void main(){
  int *ptr;
  int odd=1;
  int even=2;
  ptr = (int*)calloc(5 , sizeof(int));
  for(int i=0 ; i<=4 ; i++){
    ptr[i] = odd;
    odd += 2;
    printf("%d\t" , ptr[i]);
  }
  printf("\n");
  ptr = realloc(ptr , 6*sizeof(int));
  for(int i=0 ; i<=5 ; i++){
    ptr[i] = even;
    even+=2;
    printf("%d\t" , ptr[i]);
  }
}