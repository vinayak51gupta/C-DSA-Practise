#include<stdio.h>
#include<string.h>
int vowels(char str[]);
void main(){
    char str[] = "hello world";
    printf("no of vowels in a string=%d" , vowels(str));
}
int vowels(char str[]){
    int count=0;
    for(int i=0 ; i<=strlen(str) ; i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;
        }
    }
    return count;
}