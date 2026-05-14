#include<stdio.h>
void main(){
    for(int i=1 ; i<10 ; i++){
        if(i==6){
            continue;
        }
        else{
            printf("%d " , i);
        }
    }
}