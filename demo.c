#include<stdio.h>
int sum(int no);
void main(){
    int no;
    printf("enter n to print sum of n natural nos=");
    scanf("%d" , &no);
    printf("sum will be=%d" , sum(no));
}
int sum(int no){
    if(no==1){
        return 1;
    }
    return no*sum(no-1);
}