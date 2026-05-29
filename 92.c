#include<stdio.h>
#include<string.h>
struct Student{
  char name[100];
  int rollno;
  float cgpa;
};
void main(){
  struct Student s1 = {"ARYAN" , 20 , 9.20};
  struct Student s2 = {"RAM" , 30 , 9.40};
  struct Student s3 = {"SHAM" , 40 , 9.60};
  printf("%s  %d  %f\n" , s1.name , s1.rollno , s1.cgpa);
  printf("%s  %d  %f\n" , s2.name , s2.rollno , s2.cgpa);
  printf("%s  %d  %f\n" , s3.name , s3.rollno , s3.cgpa);
}