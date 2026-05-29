#include<stdio.h>
#include<string.h>
struct Student{
  char name[100];
  int rollno;
  float cgpa;
};
void main(){
  struct Student s[5];
   for(int i=0 ; i<=4 ; i++){
    printf("\nenter details of student %d=\n" , i+1);
    printf("name=");
    scanf("%s" , &s[i].name);
    printf("rollno=");
    scanf(" %d" , &s[i].rollno);
    printf("cgpa=");
    scanf(" %f" , &s[i].cgpa);
   }
}