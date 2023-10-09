
// how to declate stucture;

#include<stdio.h>
#include<string.h>
struct student
{
   int roll;
   float cgpa;
   char name[20];
};
int main()
{struct student s1;
s1.roll = 37;
s1.cgpa = 8.9;
strcpy(s1.name,"ayush");
printf("the name is %s\n",s1.name);
printf("the roll no is %d\n",s1.roll);
printf("the cgpa is %f\n",s1.cgpa);
return 0;
}





//  how to insilitaion of sturcute variable

#include<stdio.h>
struct student{
int roll;
float cgpa;
char name[20];};
int main()
{struct student s1={87,78.9,"ayush"};
printf("%d",s1.roll);
printf("%f",s1.cgpa);
printf("%s",s1.name);
return 0;}




//  structure as an array

#include<stdio.h>
#include<string.h>
struct student
{
   int roll;
   float cgpa;
   char name[20];
};
int main()
{struct student cs[100];
 cs[0].roll = 37;
 cs[0].cgpa = 78.9;
 strcpy(cs[0].name,"ayush");
 printf("%d\n",cs[0].roll);
  printf("%f\n",cs[0].cgpa);
  printf("%s\n",cs[0].name);
}

#include<stdio.h>
struct students{
    int roll;
    char name[20];
    char address[30];
};
int main()
{int n;
struct students z[100];
printf("how many students");
scanf("%d",&n);
for(int i=0;i<n;i++){
    printf("enter detail for the %d student",i+1);
    scanf("%d%s%s",&z[i].roll,&z[i].name,&z[i].address);
}
for(int i=0;i<n;i++){
    printf("roll = %d\tname = %s\t address = %s\n",z[i].roll,z[i].name,z[i].address);
}
return 0;
}


// stucture with pointer

#include<stdio.h>
struct student{
int roll;
float cgpa;
char name[20];};
int main()
{struct student s1={37,78.9,"ayush"};
 struct student *ptr;
 ptr = &s1;
printf("%d\n",(*ptr).roll); //or
printf("%d",ptr->roll);
return 0;
}



 

// stuctue with function

#include<stdio.h>
struct student{
int roll;
float cgpa;
char name[20];
};
void printinfo(struct student s1);
int main()
{struct student student={78,78.9,"ayush"};
    printinfo(student);
return 0;
}
void printinfo(struct student s1){
    printf("%d\n",s1.roll);
    printf("%f\n",s1.cgpa);
    printf("%s\n",s1.name);
}




// how to make shotname alise

#include<stdio.h>
typedef struct student{
int roll;
float cgpa;
char name[20];
}stu;
int main()
{stu s1={37,78.9,"ayush"};
 printf("%d",s1.roll);
 printf("%f",s1.cgpa);
 printf("%s",s1.name);
return 0;
}




//// program to enter the detail of the 4 person and print it while using function array and structure

#include<stdio.h>
#include<string.h>
typedef struct address{
int houseno;
int block;
char city[20];
char state[20];
}add;
void printdetail(add s2);
int main()
{struct address s1[4];
printf("enter the detalil fo the first person");
scanf("%d",&s1[0].houseno);
scanf("%d",&s1[0].block);
scanf("%s",&s1[0].city);
scanf("%s",&s1[0].state);

printf("enter the detalil fo the second person");
scanf("%d",&s1[1].houseno);
scanf("%d",&s1[1].block);
scanf("%s",&s1[1].city);
scanf("%s",&s1[1].state);

printf("enter the detalil fo the third person");
scanf("%d",&s1[2].houseno);
scanf("%d",&s1[2].block);
scanf("%s",&s1[2].city);
scanf("%s",&s1[2].state);

printf("enter the detalil fo the fourth person");
scanf("%d",&s1[3].houseno);
scanf("%d",&s1[3].block);
scanf("%s",&s1[3].city);
scanf("%s",&s1[3].state);
printdetail(s1[0]);
printdetail(s1[1]);
printdetail(s1[2]);
printdetail(s1[3]);
return 0;
}
void printdetail(add s2){
printf("%d %d %s %s\n",s2.houseno,s2.block,s2.city,s2.state);
}
 





////  program to find the sum of vectors 

#include<stdio.h>
struct sum{
    int x;
    int y;
};
void vectorsum(struct sum v1,struct sum v2, struct sum final);
int main()
{struct  sum v1={1,2};
struct sum v2={4,6};
struct sum sum;
vectorsum(v1,v2,sum);
return 0;
}
void vectorsum(struct sum v1,struct sum v2, struct sum final){
final.x = v1.x + v2.x;
final.y = v1.y + v2.y;
printf("the sum of vector is %di + %dj",final.x,final.y);
}





// program to create structure to store complex numbers (use arrow operator)
#include<stdio.h>
typedef  struct complex
{
int a ;
int b;
}com;

int main()
{com x = {2,4};
com *ptr =&x;
printf("the real part is %d\n",ptr->a);
printf("the imageniry  part is %d",ptr->b);

return 0;
}