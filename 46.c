#include<stdio.h>
#include<math.h>
void printsquare(int no);
void main(){
    int no;
    printf("enter a no to print its square=");
    scanf("%d" , &no);
    printsquare(no);
}
void printsquare(int no){
 printf("square of the no is =%f" , pow(no , 2));
}