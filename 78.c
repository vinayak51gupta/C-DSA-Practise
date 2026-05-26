#include<stdio.h>
void main(){
    char firstname[30];
    char lastname[30];
    printf("enter firstname=");
    scanf("%s" , &firstname);
    printf("enter lastname=");
    scanf("%s" , &lastname);
    for(int i=0 ; i<30 ; i++){
        if(firstname[i]=='\0'){
            break;
        }
        else{
            printf("%c" , firstname[i]);
        }
    }
    printf(" ");
    for(int i=0 ; i<30 ; i++){
        if(lastname[i]=='\0'){
            break;
        }
        else{
            printf("%c" , lastname[i]);
        }
    }
}