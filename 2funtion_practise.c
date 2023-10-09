#include<stdio.h>
void table(int n);
int main()
{int n;
printf("enter the table you want\n");
scanf("%d",&n);
table(n);
return 0;
}
void table(int n){
    for(int i=1;i<=10;i++){
        printf("%d\n",i*n);
    }


}
#include<stdio.h>
float calculatetaxprice(float value);

int main()
{   float value = 100;
float value  = calculatetaxprice(value);
printf("value is % f", value);

return 0;
}
float calculatetaxprice(float value){
    value = value + (0.18* value);
    printf("final value is %f", value);
    return value;
}



// celius to feranite
#include<stdio.h>
float convert(float cel);
int main()
{float a;
printf("enter the value of celius tmperature");
scanf("%f",&a);
float final = convert(a);
printf("%f",final);
return 0 ;
}
float convert(float cel){
float c = cel * 9.0/5.0 + 32;
return c ;
}


 #include<stdio.h>
 int  cal( maths, english,san);
int main()
{int maths  = 63;
 int english = 90;
 int san = 93;

 printf ("%d",cal( maths, english,san));// we can  write like that too without making onther varialbe int xyz = cal( maths, english,san); and prinf("%d",xyz);
return 0;
}int  cal(int maths,int english,int san){
    int c = ((maths+ english+san)/3);
    return c;
}
