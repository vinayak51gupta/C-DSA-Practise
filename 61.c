#include<stdio.h>
void calculate(int *sum , int *product , float *avg);
void main(){
  int sum , product ;
  float avg;
  calculate(&sum , &product , &avg);
  printf("sum will be =%d\n" , sum);
  printf("product will be =%d\n" , product);
  printf("average will be =%f\n" , (float)avg);
}
void calculate(int *sum , int *product , float *avg){
  int a , b;
  printf("enter first value =");
  scanf("%d" , &a);
  printf("enter second value =");
  scanf("%d" , &b);
  *sum = a+b;
  *product = a*b;
  *avg = (float)(a+b)/2;
}