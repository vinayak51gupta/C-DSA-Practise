#include<stdio.h>
#include<string.h>
void main(){
    char name[30];
    for(int i=0 ; i<=29 ; i++){
        char ch;
        printf("enter %d alphabet of your name or press 0 if you are done=" , i+1);
        scanf(" %c" , &ch);
        if(ch=='0'){
            name[i] = '\0';
            break;
        }
        else{
            name[i] = ch;
        }
    }
    printf("%s" , name);
}