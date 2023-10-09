
// // output :
// 1
// 23
// 456
// 78910
// 1112131415   

// #include<stdio.h>
// int main()
// {int n,a=1;
// printf("Enter how many rows");
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         printf("%d",a);
//         a++; 
//     }
    
    
//     printf("\n");
// }
// }



// return 0;
// }
// // output :
// A
// BC
// DEF 
// #include<stdio.h>
// int main()
// {int n;
// char c='A';
// printf("Enter how many rows");
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         printf("%c",c);
//         c++;
//     }
    
//     printf("\n");
// }
// return 0;}


//output 12345
//       1234
//       123
//       12
//       1

// #include<stdio.h>
// int main()
// {int i,j,n;
// printf("enter rows");
// scanf("%d",&n);
// for(i=n;i>=1;i--){
//     for(j=1;j<=i;j++){
// printf("%d",j);
//     }
//     printf("\n");
// }
// return 0;
// }






#include<stdio.h>
int main()
{int n;
printf("Enter how many rows");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");
}
}