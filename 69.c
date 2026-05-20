#include<stdio.h>
void printnumbers(int *ptr);
void main(){
    int arr[] = {1,2,3,4,5,6};
    printnumbers(arr);
}
void printnumbers(int *ptr){
    for(int i=0 ; i<=5 ; i++){
        printf("%d\n" , *ptr);
        ptr++;
    }
}