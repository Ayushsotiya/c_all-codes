ONE SPECIAL THING IN IT IS WE CAN CHANGE REINTIALLISE *STR TYPE OF STRING BUT CANT CHANGE STR[] TYPE OF STRING .
%s is used to take input and print it
puts() its used to print string.
gets() its is used to input string 


#include<stdio.h>
int main()
{ char ayush[]={'a','y','u','s','h','\0'};
// char *ptr = ayush;
// while(*ptr !='\0'){
//     printf("%c",*ptr);
//     ptr++;
// }
// //or
for(int i=0;ayush[i]!='\0';i++){
    printf("%c",ayush[i]);}

return 0;

}


//program to take input of sting from the user using %c not %s
 #include<stdio.h>
 int main()
 { char  a[10];
  char ch;
  int i=0;
  while(ch != '\n'){
    scanf("%c",&ch);
    a[i]=ch;
    i++;
  }
a[i]='\0';
puts(a);
 return 0;
 }




#include<stdio.h>
int main()
{char c[]="ayush";
printf("%s",c);
return 0;
}




 #include<stdio.h>
 int main(){
 char c[20];
 printf("enter the name in sting");
 scanf("%s",&c);
 printf("%s",c);
 }





#include<stdio.h>
int main()
{char c[20];
 printf("enter the name in sting");
 gets(c);
 puts(c); 
//or
//printf("%s",c);
return 0;
} 




//// library function in string
#include<string.h>



// strlen  tells the length of sting excluding the null character 

#include<stdio.h>
#include<string.h>
int main()
{ char name[] = "ayush sotiya";
 int l = strlen(name);
 printf("the length of the string is %d",l);

return 0;
}

#include<stdio.h>
int main()
{char a[]="ayush";
 int i =0 ;
 int l=0;
 while(a[i]!='\0'){
 l++;
 i++;
 }
 printf("%d",l);
return 0;
}



// strcpy is used to copy the content of second string into first string passed into it

#include<stdio.h>
#include<string.h>
int main()
{char a[] ="ayush";
 char b[20];
 strcpy(b,a);
 printf("%s",b);
 return 0;
}


// strcat is used to join two string

#include<stdio.h>
#include<string.h>
int main()
{char a[]= "ayush";
 char b[]="sotiya";
 strcat(a,b);
 printf("%s",a);
return 0;
}



// strcmp is used to compare two strings

#include<stdio.h>
#include<string.h>
int main()
{char a[]= "hello";
 char b[]="hello";
 int c =  strcmp(a,b);
 printf("%d",c);
 return 0;
}



// ap to salting the password

#include<stdio.h>
#include<string.h>
void salting(char a[]);
int main()
{char pass[10];
printf("enter the password");
 gets(pass);
 salting(pass);
 printf("the salting password is %s",pass);
 
return 0;
}
void salting(char a[]){
  char b[]="123";  
  strcat(a,b);
}




// program to slice the string

#include<stdio.h>
void slice(char str[],int khase,int khatak,char n[]);
int main()
{char name [100];
char newname[100];
 gets(name);
 slice(name,3,7,newname);
 puts(newname);
return 0;
}
void slice(char str[],int khase,int khatak,char n[]){
    int j;
    for(int i=khase,j=0 ;i<=khatak ;i++,j++){
       
        n[j] = str[i];
    }
    n[j]='\0';
}




// program to count the vowel in the string

 #include<stdio.h>
 int countvowl(char a[]);
 int main()
 {char a[] = "ayush";
 int c = countvowl(a);
 printf("the total vowel in this  %d",c);
 return 0;
 }
 int countvowl(char a[]){
    int count = 0;
    for(int i=0;a[i]!='\0';i++ ){
    
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
        count++;
    }
    }
    return count;

 }
 



// wap to find the ch in string
#include<stdio.h>
void check(char c[],char ch);
int main()
{char c[]="helloworld";
char ch;
printf("enter the world you wanna search");
scanf("%c",&ch);
check(c,ch);
return 0;
}
void check(char c[],char ch){
    int press =0;
    for(int i=0;c[i]!= '\0';i++){
        if(c[i]==ch){
        press = 1;
        }
    }
    if(press == 1){
        printf("present");
    }
    else{
        printf("not present");
    }
}