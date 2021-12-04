#include<stdio.h>
int  sum();
int main()
{
    int a,b,add;
    printf("Enter value of a and b");
    scanf("%d %d",&a,&b);
      add = sum(&a,&b);
     printf("Sum of a and b: %d",add);
}
int sum(int *p,int *q)
{
 int sum ;   
    sum=*p+*q;
    return sum;
}