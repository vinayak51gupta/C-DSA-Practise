#include<stdio.h>
#include<string.h>
struct Student{
  char name[100];
  char section;
  int rollno;
  float cgpa; 
};
void main(){
 struct Student s[5];
 for(int i=0 ; i<=4 ; i++){
  printf("enter details of student %d :\n" , (i+1));
  printf("name :");
  scanf("%s" , &s[i].name);
  printf("section :");
  scanf(" %c" , &s[i].section);
  printf("rollno :");
  scanf("%d" , &s[i].rollno);
  printf("cgpa :");
  scanf("%f" , &s[i].cgpa);
 }
 for(int i=0 ; i<=4 ; i++){
  printf("here are details of all student %d: " , (i+1));
  printf("name :%s\n" , s[i].name);
  printf("section :%c\n" , s[i].section);
  printf("rollno :%d\n" , s[i].rollno);
  printf("cgpa :%f\n" , s[i].cgpa);
 }
}