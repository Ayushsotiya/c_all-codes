// some complication in this we cant use fgetc and fputc while we are reading writing too we will get some error and we can only use eof property with fgetc and while using fgetc it
// always read in character form so and we also need to print it in character form.
// fputc cant  use when we ask user to enter infomation
// fputc is used to right something and fgets c is used to print something 


// // HOW TO OPEN FILE AND CLOSE IT.
#include<stdio.h>
int main()
{FILE *fptr;
fptr = fopen("io.txt","w");
fclose(fptr);
return 0;
}



//// how to read  in file  

#include<stdio.h>
int main()
{FILE *fptr;
fptr = fopen("io.txt","r");
char ch;
fscanf(fptr,"%c",&ch);
printf("character is %c\n",ch);
fscanf(fptr,"%c",&ch);
printf("character is %c\n",ch);
fscanf(fptr,"%c",&ch);
printf("character is %c\n",ch);
fscanf(fptr,"%c",&ch);
printf("character is %c\n",ch);
fscanf(fptr,"%c",&ch);
printf("character is %c\n",ch);
fclose(fptr);
return 0;
}  

// interms of interger.

#include<stdio.h>
int main()
{FILE *fptr;
fptr = fopen("io.txt","r");
int n;
fscanf(fptr,"%d",&n);
printf("%d\n",n);
fscanf(fptr,"%d",&n);
printf("%d\n",n);
fscanf(fptr,"%d",&n);
printf("%d\n",n);
return 0;
}




 // how to  write  in file 
#include<stdio.h>
int main()
{FILE *fptr;
fptr = fopen("io.txt","a");
fprintf(fptr,"%s","M");
fprintf(fptr,"%s","A");
fprintf(fptr,"%s","N");
fprintf(fptr,"%s","G");
fprintf(fptr,"%s","O");
fclose(fptr);
return 0 ;
}




//// we can read and write in with the help of fputc to write and fgetc read

#include<stdio.h>
int main()
{FILE *fptr;
fptr = fopen("io.txt","r");
printf("%c",fgetc(fptr));
printf("%c",fgetc(fptr));
printf("%c",fgetc(fptr));
printf("%c",fgetc(fptr));
printf("%c",fgetc(fptr));
fclose(fptr);
return 0;
}   



#include<stdio.h>
int main()
{FILE *fptr;
fptr = fopen("io.txt","w");
fputc('M',fptr);
fputc('a',fptr);
fputc('n',fptr);
fputc('g',fptr);
fputc('o',fptr);
fclose(fptr);
return 0;
}   



// using loops 


#include<stdio.h>
int main()
{FILE *fptr;
fptr = fopen ("io.txt","r");
char c = fgetc(fptr);
while(c != EOF){
    printf("%c\n",c); //// while using fgetc remember that it will read value as  a character value so while printing use %c specifier
    c = fgetc(fptr);
}
printf("\n");
fclose(fptr);
return 0;}


// program to take input from the use and print it in file


#include<stdio.h>
int main()
{FILE *fptr;
fptr = fopen("io.txt","w");
char name[20];
int age;
float cgpa;
printf("enter the name");
scanf("%s",name);
printf("enter the age");
scanf("%d",&age);
printf("enter tha cgpa");
scanf("%f",&cgpa);

fprintf(fptr,"the name is %s",name);
fprintf(fptr,"the name is %d",age);
fprintf(fptr,"the name is %f",cgpa);
fclose(fptr);
return 0;
}




// write a program to write all the odd numbers from 1 to n in a file

#include<stdio.h>
int main()
{FILE *fptr;
fptr = fopen("io.txt","a");
int n;
printf("enter the no");
scanf("%d",&n);
for(int i = 1;i<=n;i++){
    if(i % 2 !=0){
        fprintf(fptr,"%d\t",i);
    }

}
fclose(fptr);
return 0;
}



// 2 numbers a&b are written in a file write a program to replace them with their sum

#include<stdio.h>
int main()
{FILE *fptr;
int c,d ;
fptr = fopen("io.txt","r");
fscanf(fptr,"%d\n",&c);
fscanf(fptr,"%d\n",&d);
fclose(fptr);
int sum = c+d;
fptr = fopen("io.txt","w");
fprintf(fptr,"%d",sum);
fclose(fptr);
return 0;
}



