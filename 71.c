#include<stdio.h>
int odd(int arr[3][4]);
void main(){
    int arr[3][4] = {{1,2,3,4} , 
                     {5,6,7,8} , 
                     {9,10,11,12}};
    printf("no of odd nos in array is=%d" , odd(arr));
}
int odd(int arr[3][4]){
    int count = 0;
    for(int i=0 ; i<=2 ; i++){
        for(int j = 0 ; j<=3 ; j++){
            if(arr[i][j]%2 != 0){
                count++;
            }
        }
    }
    return count;
}