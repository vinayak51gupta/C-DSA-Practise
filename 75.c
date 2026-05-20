#include<stdio.h>
void main(){
  int arr[] = {1,2,34,4,34,6,34,8,9,0};
  int count = 0 , no;
  printf("enter a no to check how many times it occurs in array=");
  scanf("%d" , &no);
  for(int i=0 ; i<=9 ; i++){
   if(no==arr[i]){
    count++;
   }
  }
  printf("%d occurs %d times in array" , no , count);
}