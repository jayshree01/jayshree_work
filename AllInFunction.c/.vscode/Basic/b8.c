#include<stdio.h>
int main()
{
    int n;
    float cel,fh;
    char ch;
    
    printf("enter the choice");
    scanf( " %c",&ch);
    if(ch=='c'||ch=='C')
    {
        printf("enter the no. is\n");
        scanf("%d",&n);
        cel=n-32*5/9;
        printf("%f celsius",cel);

    }
    else{
        if(ch=='f'||ch=='F') 
    {
        printf("enter the no. is\n");
        scanf("%d",&n);
        fh =n+32*9/5;
        printf("%f fahreinite",fh); 

    }
     else 
     printf("invalid command");
    }
    return 0;
 }

