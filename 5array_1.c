
#include<stdio.h>
int main()
{int ary[5]={1,2,3,4,5,6};
int *ptr = ary; //  because array is pointer  
  *ptr  = &ary[0];//int *ary so, ary = &ary[0] so ary points the address of 0th index of ary 
return 0;               
}





#include<stdio.h>
int main()
{int arry[5];
 arry[0]=1;
 arry[1]=2;
 arry[2]=3;
 arry[3]=4;
 arry[4]=5;
 printf(" first %d\n", arry[0]);
 printf("second%d\n", arry[1]);
 printf("third%d\n", arry[2]);
 printf("fourth%d\n", arry[3]);
 printf("5 %d\n", arry[4]);

return 0;
}

//array- input and print
 #include<stdio.h>
 int main()

 {int a[5];
 for(int i=0;i<5;i++){
    printf("enter");
    /* scanf("%d",&a[i]);*/ scanf("%d",a+i);

 }
  for(int i=0;i<5;i++){
    printf("%d\n",*(a+i));
 }
return 0;
 }


arry in terms of pointer 

#include<stdio.h>
int main()
{
    int adhaar[5];
    int *pnt = adhaar;
    for(int i=0;i<5;i++){
        printf(" %d index :",i);
        scanf("%d", (pnt+i));

    }
    for(int i=0;i<5;i++){
        printf(" %d index is : %d\n",i,*(pnt+i));}
      return 0;
    }
 

 //arrey as a funtion;  
   

   #include<stdio.h>
   void print(int ary[], int n);
   int main()
   {int ary[]= {1,2,3,5};
   print(ary,4);
   return 0;
   }
   void print(int ary[], int n){
    for(int i =0; i<n;i++){
        printf("%d\t",ary[i]);
    }
   } 



//2d array

#include<stdio.h>
int main(){
int a[3][5],row = 3,coloumn = 5;
    for(int i=0;i<row;i++){
        for(int j=0;j<coloumn;j++){
            printf("enter the values \n");
            scanf("%d",&a[i][j]);
}
    for(int i=0;i<row;i++){
       for(int j=0;j<coloumn;j++){
           printf(" the value at row%d coloumn %d %d\n",i,j,a[i][j]);
}}
return 0;
}}

 


//  array practise;



// program to print table in array
#include<stdio.h>
int main()
{int a[10];
int n;
printf("enter the table you want ");
scanf("%d",&n);
 for(int i=0;i<10;i++){
  a[i]=n*(i+1);
 }
  for(int i=0;i<10;i++){
    printf("%d x %d = %d\n",n,i+1,*(a+i));
  }
return 0;
}




//  program to swap array

#include<stdio.h>
void rev(int  *pnt,int n){
    for(int  i=0;i<(n/2);i++){
   //int temp =  pnt[i];
//    pnt[i] = pnt[n-i-1];
//    pnt[n-i-1] = temp; 

     // or:
int firstvalue = pnt[i];//11
int secondvalue = pnt[n-i-1];//66
pnt[i] = secondvalue;
pnt[n-i-1] = firstvalue;
}
}
int main()
{int a[]= {11,22,33,44,55,66};
    rev(a,6);
    for(int  i=0;i<6;i++){
    printf("%d\n",a[i]);}
return 0;
}


// program to check postive no in array
#include<stdio.h>
void count(int *arry ,int n  );
int main()
{int a[10] = {-1,-2,3,4,5,6,7,8,9,10};
 count(a,10);
return 0;
}
void count(int *arry ,int n  ){
    int pos = 0 ;
    for(int i=0;i<n;i++){
        if(0<arry[i]){
            pos++;
        }
        else{
        }
    }
    printf("postive no is %d",pos);

}



//program to  to store table and print it
#include<stdio.h>
int main()
{int a[3][10];
for(int i=0;i<10;i++){
a[0][i] = 2*(i+1);
}
for(int k=0;k<10;k++){
a[1][k] = 7*(k+1);
}
for(int j=0;j<10;j++){ 
a[2][j] = 9*(j+1);
}
 for(int  i=0 ; i<3;i++){
     for(int  j=0 ; j<10;j++){
        printf("* = %d\t",a[i][j]); }  
 printf("\n");
 }
return 0;
} 

or
#include<stdio.h>
void printtable(int ary[][10],int n, int m ,int number);
int main()
{int a[3][10];
 printtable(a,0,10,2);
 printtable(a,1,10,7);
 printtable(a,2,10,9);
return 0;
}void printtable(int ary[][10],int n, int m ,int number){
  for(int i=0;i<m;i++){
     ary[n][i]= number*(i+1); 
  }
  for(int i=0;i<m;i++){
    printf("%dx%d=%d\n",number,i+1,ary[n][i]);
}
printf("*****************************************************\n");
printf("\n");
} 


// program to print address of a 3d array 
#include<stdio.h>
int main()
{int a[3][3][4];
   for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            for(int k =0;k<4;k++){
                  printf("index address a[%d] [%d] [%d] is  %u\n",i,j,k,&a[i][j][k]);
}
}
} 
return 0;
}


// program to find smallest no in array.
#include<stdio.h>
int main()
{int a[6]={14,5,4,435,1,65};
 int  small = a[0];
 for(int i=0;i<6;i++){
  if(a[i]<small){
    small = a[i];
  }
 }
 printf("%d",small);
return 0;
} 


// multiplication of matrix
#include<stdio.h>
int main()
{int r,c;
printf("enter  the row and columns ");
scanf("%d%d",&r,&c);
int  a[r][c],b[r][c],mult[r][c];
for(int  i =0;i<r;i++){
  for(int  j =0;j<c;j++){
    printf("enter");
    scanf("%d",&a[i][j]);
  }}
  for(int  i =0;i<r;i++){
  for(int  j =0;j<c;j++){
    printf("enter");
    scanf("%d",&b[i][j]);
  }}
  for(int  i =0;i<r;i++){
  for(int  j =0;j<c;j++){
    mult[i][j]=0;
    for(int  k =0;k<c;k++){
      mult[i][j]+=a[i][k]*b[k][j];
    }
  }}
  for(int  i =0;i<r;i++){
  for(int  j =0;j<c;j++){
    printf("%d\t",mult[i][j]);}
    printf("\n");
  }
return 0;
}


// progam to find the no in array.
#include<stdio.h>
int main()
{int a[5],n,pos,flag = 0;
for(int i=0;i<5;i++){
  printf("enter the elements");
  scanf("%d",&a[i]);
}
printf("enter the no");
scanf("%d",&n);
for(int i=0;i<5;i++){
  if(n==a[i]){
    pos =i,flag =1;
    break;
  }
}
if(flag==1){
  printf("the number is find at the position\t%d",pos+1);
}
else{
  printf(" not found");
}
return 0;
}