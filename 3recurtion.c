#include<stdio.h>
int factorial(int a);
int main()
{int b,a;
 printf("enter the value for the factorial\n");
 scanf("%d",&a);
 b = factorial(a);
 printf("%d\n",b);
return 0;
}
int factorial(int a){
  int ans;  
    if(a==1){
        return 1;
    }
    else 
    {ans = a* factorial(a-1);
    return ans ;
    }
}



#include<stdio.h>
void hworld(int a);
int main()
{int a;
 printf("enter the value how many time you wanna print hello word");
 scanf("%d",&a);
 hworld(a);
return 0;
}
void hworld(int a){
  if(a == 0){
    return  ;
  }
  else
  { printf("hello world\n");
    hworld(a-1);
  }
}



#include<stdio.h>
int sum(int a);
int main()
{int d ,a;
printf("enter the no to find sum");
scanf("%d",&a);
d = sum(a);
printf("%d",d);
return 0;
}
int sum(int a){
    if(a == 1){
        return 1 ;
    }
    else {
    int b = a + sum(a-1);
    return b;}
}   




// fibonaci 
#include<stdio.h>
int fab(int a);
int main()
{int final = fab(10);
 printf("%d", final);
return 0;
 }
int fab(int a){
    if ( a==1 ){
        return 1 ;
    }
    else if (a==0){
        return 0;
    }
    else 
    {
     int sum  =fab(a-1)+fab(a-2);
     return sum;
    }}


