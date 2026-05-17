#include<stdio.h>
void square(int no);
void main(){
    int no = 16;
    square(no);
    printf("%d" , no);
}
void square(int no){
    no = no*no;
    printf("%d\n" , no);
}