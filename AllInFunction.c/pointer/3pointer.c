#include<stdio.h>
void arr(int a[]);
int main()
{
    int a[]={10, 20,30, 40,50};
    arr(a);
    for(int i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
}
void arr(int p[])
{
    for(int i=0;i<5;i++)
    p[i]=p[i]+1;
       
}