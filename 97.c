#include<stdio.h>
#include<string.h>
struct Student{
  char name[100];
  int rollno;
  float cgpa; 
};
struct Teacher{
  char name[100];
  char section;
  float salary;
};
struct Staff{
  char name[100];
  char skill[100];
  float salary;
};
void main(){
  struct Student s1 = {"ARYAN" , 20 , 9.40};
  struct Student s2 = {"RAHUL" , 30 , 9.80};
  struct Student s3 = {"MOHAN" , 1 , 8.80};
  struct Teacher t1 = {"SUMAN" , 'A' , 50000};
  struct Teacher t2 = {"SARITA" , 'B' , 70000};
  struct Teacher t3 = {"NIDHI" , 'C' , 350000};
  struct Staff e1 = {"RAMU" , "Cleaning" , 15000};
  struct Staff e2 = {"CHOTU" , "Ironing" , 10000};
  struct Staff e3 = {"BABU" , "Chef" , 20000};
  printf("student 1 name : %s , rollno : %d , cgpa : %f\n" , s1.name , s1.rollno , s1.cgpa);
  printf("student 2 name : %s , rollno : %d , cgpa : %f\n" , s2.name , s2.rollno , s2.cgpa);
  printf("student 3 name : %s , rollno : %d , cgpa : %f\n\n\n" , s3.name , s3.rollno , s3.cgpa);
  printf("Teacher 1 name : %s , section : %c , salary : %f\n" , t1.name , t1.section , t1.salary);
  printf("Teacher 2 name : %s , section : %c , salary : %f\n" , t2.name , t2.section , t2.salary);
  printf("Teacher 3 name : %s , section : %c , salary : %f\n\n\n" , t3.name , t3.section , t3.salary);
  printf("Staff 1 name : %s , skill : %s , salary : %f\n" , e1.name , e1.skill , e1.salary);
  printf("Staff 2 name : %s , skill : %s , salary : %f\n" , e2.name , e2.skill , e2.salary);
  printf("Staff 3 name : %s , skill : %s , salary : %f\n" , e3.name , e3.skill , e3.salary);
}