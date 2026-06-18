#include<stdio.h>
#include<string.h>
void main(){
   char name[100];
   for(int i=0 ; i<=99 ; i++){
   printf("enter a character or press 0 to terminate=");
   scanf("%c" , &name[i]);
   getchar();
   if(name[i]=='0'){
    break;
   }
   }
   printf("name=");
   for(int i=0 ; name[i] != '0' ; i++){
    printf("%c" , name[i]);
   }
}