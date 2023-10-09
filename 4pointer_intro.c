
// // *ptr "*" ka mtlb hai ki jo addrres humne esme store karaya hai vha jo value hai 
// //    syntx to write a = 25;
// //                   *ptr =&a;
                    

// // intro
// #include<stdio.h>
// int main()
// {int a=12;
// int *b;
// b = &a;

// printf("the value of a is  %d\n",a);
// printf("the value of a is  %d\n",*b);
// printf("the value of a is  %d\n",*(&a));  //* is ka mtlb hota hai *(or idhar jo bhi hoga uski value address);
// printf("the value of a is  %u\n",b);
// printf("the value of a is  %u\n",&a);
// printf("the value of a is  %d\n",*(&b));
// printf("the value of a is  %u\n",&b);
// return 0;
// }



// pointer to pointer 
// #include<stdio.h>
// int main()
// {int a =15;
// int *b = &a;
// int **c = &b;
// printf("the value of a is  %d\n",a);
// printf("the value of a is  %d\n",*b);
// printf("the value of a is  %d\n",*(&a));  
// printf("the value of a is  %d\n",**c);  
// printf("the memory of a is  %d\n",**(&c));  
// printf("the memory of a is  %d\n",*(&b));
// printf("the memory of a is  %u\n",b);
// printf("the memory of a is  %u\n",&a);
// printf("the memory of a is  %u\n",*c);
// return 0;
// }





// #include<stdio.h>
// void swap(int *a ,int *b);
// int main()
// {int x,y;
// x = 10 , y = 20;
// swap(&x,&y);
// printf("%d\n%d\n",x,y);
// return 0 ;
// }
// void swap(int *a ,int *b){
//     int t = *a;
//      *a =*b;
//      *b = t;
//      printf("%d\n%d\n",*a,*b);
//      }




// #include<stdio.h>
// void change(int *i){
//     *i = (*i)*10;
// }
// int main()
// {int a =12;
// printf("%d\n",a);
// change(&a);
// printf("%d\n",a);
// return 0;
// }



// #include<stdio.h>
// void sub(int a,int b ,int *sum ,int *product , int *average );

// int main()
// {int a = 10;
// int b = 20;
// int sum;
// int product;
// int average ;
// sub(a,b,&sum,&product,&average);
// printf("%d\n",sum);
// printf("%d\n",product);
// printf("%d\n",average);

// return 0;
// }
// void sub(int a,int b ,int *sum ,int *product , int *average ){
//     *sum = a+b;
//     *product = a*b;
//     *average  =  (a+b)/2;
// }