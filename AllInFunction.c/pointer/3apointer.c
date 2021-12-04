#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE];
     int n;
     int *ptr=arr;
     printf("Enter the SIZE of array:-");
     scanf("%d",&n);
    
      printf("Enter element in array................");
      for(int i=0;i<n;i++)
      {
          scanf("%d\n",ptr);
          ptr++;
      }
      ptr=arr;

      printf("Array element ...............................");
      for(int i=0;i<n;i++)
      {
          printf("%d\n",*ptr);
          ptr++;

      }
      return 0;
}