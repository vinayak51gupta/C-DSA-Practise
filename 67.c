#include<stdio.h>
void main(){
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;
    printf("%d\n%d" , ptr , _ptr);
    printf("\n%d" , ptr-_ptr);
    _ptr = &age;
    printf("\n%d" , _ptr==ptr);
}