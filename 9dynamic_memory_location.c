// memory allocation example
#include<stdio.h>
#include<stdlib.h>
int main()
{int *ptr;
ptr = (int*)(malloc(5*sizeof(int)));
ptr[0]=0;
ptr[1]=1;
ptr[2]=2;
ptr[3]=3;
ptr[4]=4;
for(int i=0;i<5;i++){
    printf("%d\n",ptr[i]);
}
return 0;
}



// continous memory allocation
#include<stdio.h>
#include<stdlib.h>
int main()
{float *ptr;
ptr = (float*)calloc(5,sizeof(float));//// it will take gurantee that  0 value will place in the memory
for(int i=0;i<5;i++){
    printf("%f\n",ptr[i]);
}
return 0;
} 


////use of free()
////it help to free the location which we assigened using malloc and calloc
#include<stdio.h>
int main()
{
float *ptr;
ptr = (float*)calloc(5,sizeof(float));
for(int i=0;i<5;i++){
    printf("%f\t",ptr[i]);
}
free(ptr);
printf("\n");
ptr = (float*)calloc(2,sizeof(float));
for(int i=0;i<2;i++){
    printf("%f\t",ptr[i]);
}
return 0;
}



// wap to  memory allocate and enter the no in it and after that reallocate it and re-enter the no . and print it
#include<stdio.h>
#include<stdlib.h>
int main()
{int *ptr;
ptr = (int*)calloc(5,sizeof(int));
printf("enter the numbers");
for(int i =0;i<5;i++){
    scanf("%d",&ptr[i]);
}
printf("enter again");
ptr = realloc(ptr,8);
for(int i =0;i<8;i++){
    scanf("%d",&ptr[i]);
}
for(int i =0;i<8;i++){
    printf("the %d number is %d\n",i,ptr[i]);
}
return 0;
}




// wap using memory allocate and input no by user and print it 
#include<stdio.h>
#include<stdlib.h>
int main()
{int *ptr;
ptr = (int*)calloc(5,sizeof(int));
printf("enter the no");
for(int i=0;i<5;i++){
    scanf("%d",&ptr[i]);
}
for(int i =0;i<5;i++){
    printf("the %d number is %d\n",i,ptr[i]);
}
return 0;
}


// allocate memory to store first 5 odd numbers then reallocate it to store first 6 even number
#include<stdio.h>
#include<stdlib.h>
int main()
{int *ptr;
ptr = (int*)malloc(5*sizeof(int));
ptr[0]=1;
ptr[1]=3;
ptr[2]=5;
ptr[3]=7;
ptr[4]=9;
for(int i =0;i<5;i++){
 printf("the %d number is %d\t",i,ptr[i]);}
 printf("\n");
ptr = realloc(ptr,6);
ptr[0]=2;
ptr[1]=4;
ptr[2]=6;
ptr[3]=8;
ptr[4]=10;
ptr[5]=12;
for(int i=0;i<6;i++){
printf("the %d number is %d\t",i,ptr[i]);}
free(ptr);
return 0;
}