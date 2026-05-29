#include<stdio.h>
#include<string.h>
struct Student{
    char name;
    int rollno;
    float cgpa;
};
void main(){
 char ch = 'A';
 struct Student CSE[10]; // 0 to 9
 for(int i=0 ; i<=9 ; i++){
    CSE[i].name = ch;
    ch++;
    CSE[i].rollno = (i+1);
    CSE[i].cgpa = 9.20;
 }
 for(int i=0 ; i<=9 ; i++){
    printf("%c  %d  %f\n" , CSE[i].name , CSE[i].rollno , CSE[i].cgpa);
 }
}