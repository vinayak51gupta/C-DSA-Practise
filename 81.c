#include<stdio.h>
void main(){
    char name[30];
    printf("enter full name=");
    fgets(name , 30 , stdin);
    int count = 0;
    for(int i=0 ; i<30 ; i++){
        if(name[i]=='\n'){
            break;
        }
        else{
            count++;
        }
    }
    printf("length of name is=%d" , count);
}