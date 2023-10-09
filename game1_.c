#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{int num,guess,attempt=1;
srand(time(0));
num = rand()%100+1;
printf("%d\n",num);
do{
    printf("guesss the no\n");
    scanf("%d",&guess);
    if(guess<num){
        printf(" guess higher no\n");}
    else if(guess>num){
        printf(" guess lower  no\n");}
    else
    {printf("guess was right and attempt in %d\n",attempt);}
    attempt++;
}while(guess!=num);
return 0;
}