#include<stdio.h>
void main(){
  int i=0 , no;
  printf("enter a no=");
  scanf("%d" , &no);
  int arr[no];
  while(i<no){
   if(i==0){
    arr[0] = 0;
   }
   else if(i==1){
    arr[1] = 1;
   }
   else{
    arr[i] = arr[i-1] + arr[i-2];
   }
   i++;
  }
  for(int j=0 ; j<no ; j++){
   printf("%d\t" , arr[j]);
  }
}