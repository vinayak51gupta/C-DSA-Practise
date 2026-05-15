#include<stdio.h>
int sum(int no);
void main(){
    int no;
    printf("enter a no=");
    scanf("%d" , &no);
    printf("sum of digits=%d" , sum(no));
}
int sum(int no){
    int net=0;
    while(no>0){
        int r = no%10;
        net = net +r;
        no = no/10;
    }
    return net;
}