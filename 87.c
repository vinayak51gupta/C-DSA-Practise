#include<string.h>
#include<stdio.h>
void slice(char str[] , int n , int m);
void main(){
    char str[30];
    int n , m;
    printf("enter a string=");
    fgets(str , 30 , stdin);
    printf("enter nth value=");
    scanf("%d" , &n);
    printf("enter mth value=");
    scanf("%d" , &m);
    slice(str , n , m);
}
void slice(char str[] , int n , int m){
    printf("sliced string=");
    for(int i=n ; i<=m ; i++){
     printf("%c" , str[i]);
    }
}