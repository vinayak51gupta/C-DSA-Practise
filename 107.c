#include<stdio.h>
#include<stdlib.h>
void main(){      //comment
  int *ptr;
  ptr = (int*)calloc(5 , sizeof(int));
  for(int i=0 ; i<=4 ; i++){
    printf("enter %d value=" , i+1);
    scanf("%d" , &ptr[i]);
  }
  ptr = realloc(ptr , 8*sizeof(int));
  for(int i=5 ; i<=7 ; i++){
    printf("enter %d value=" , i+1);
    scanf("%d" , &ptr[i]);
  }
  for(int i=0 ; i<=7 ; i++){
    printf("%d value=%d\n" , i+1 , ptr[i]);
  }
}