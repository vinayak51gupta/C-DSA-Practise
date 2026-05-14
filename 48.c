#include<stdio.h>
void printHW(int count);
void main(){
 printHW(7);
}
void printHW(int count){
 if(count==0){
    return;
 }
 printf("Hello world\n");
 printHW(count-1);
}