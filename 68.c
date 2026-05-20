#include<stdio.h>
void main(){
  int marks[10];
  int no;
  for(int i=0 ; i<=9 ; i++){
    marks[i] = 10*(i+1);
  }
  printf("enter the no which u want multiple of 10=");
  scanf("%d" , &no);
    while(no>=1 && no<=10){
      int *ptr = &marks[0];
      no = no-1;
      ptr = ptr+no;
      printf("value on that index is=%d\n" , *ptr);
      printf("enter the no which u want multiple of 10=");
      scanf("%d" , &no);
    }
  printf("you entered no outside range of array");
}
  