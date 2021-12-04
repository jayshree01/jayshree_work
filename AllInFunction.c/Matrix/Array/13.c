//* C program to count the number of even and odd elements in an array


#include<stdio.h>
#include<conio.h>
 
 int count(int a[],int n)
 {
 	int i,even=0,odd=0;
    for(i=0; i<n; i++)
    {
          if(a[i]%2==0)
          even++;
          else
          odd++;
		           
    }
    
     printf("even numbers in array: %d",even);
     printf("\n odd numbers in array: %d",odd);
 }
int main()
{
    int a[1000],i,n,sum;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    count(a,n);
 
 
    
}