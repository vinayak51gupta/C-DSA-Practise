#include<stdio.h>
void main(){
  int arr[] = {10,2654,3,79999,432,321,888,6789};
  int largest;
  for(int i=0 ; i<8 ; i++){
    if(i==0){
      largest = arr[i];
    }
    else if(arr[i]>largest){
      largest = arr[i];
      }
  }
  printf("the largest no is=%d" , largest);
}