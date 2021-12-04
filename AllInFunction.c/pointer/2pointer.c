#include<stdio.h>
 void swap();
int main()
{
    int a,b;
    printf("Enter 2 num");
    scanf(" %d %d ",&a,&b);
    printf(" Before Swapping a:%d ,b:%d\n",a,b);
    swap(&a,&b);
    printf("After swapping a: %d,b:%d\n",a,b);
    return 0;
}
void swap(int *x ,int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}