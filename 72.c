#include<stdio.h>
void reverse(int arr[]);
void main(){
  int arr[] = {7,14,21,28,35,42,49};
  reverse(arr);
}
void reverse(int arr[]){
  int start = 0;
  int end = 6;
  while(start<=end){
    int swap = arr[start];
    arr[start] = arr[end];
    arr[end] = swap;
    start++;
    end--;
  }
  for(int i=0 ; i<=6 ; i++){
    printf("%d\t" , arr[i]);
  }
}