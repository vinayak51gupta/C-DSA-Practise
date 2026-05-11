#include<stdio.h>
void main(){
    char ch , ch1;
 printf("enter the day first alpahbet=");
 scanf("%c" , &ch);
 printf("\nenter r for rain or s for snow , c for clear weather=");
 scanf("%c" , &ch1);
 if(ch=='s' && ch1=='s'){
    printf("true");
 }
 else{
    printf("false");
 }
}