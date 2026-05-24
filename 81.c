#include<stdio.h>
void main(){
    char name[30];
    printf("enter user's name=");
    fgets(name , 30 , stdin);
    int count = 0;
    for(int i=0 ; i<=29 ; i++){
        if(name[i]=='\n'){
            break;
        }
        else if(name[i]!=' '){
            count++;
        }
    }
    printf("length of user's name is=%d" , count);
}