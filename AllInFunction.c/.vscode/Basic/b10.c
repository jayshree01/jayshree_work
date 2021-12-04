//factorial of a number 
#include<stdio.h>
int main(){
    int n,i=1,fact=1;
    printf("enter the no.\n");
    scanf("%d",&n);
    while(i<=n)
    {
        
        fact=fact*i;
        i++;
            
         

    }
      printf("%d",fact);
    
    return 0;

}