#include<stdio.h>
void main(){
    int sum = 0;
    for(int i=5 ; i<=50 ; i++){
        sum = sum+i;
    }
    printf("sum of all nos from 5 to 50=%d" , sum);
}