#include<stdio.h>
#define MAX_SIZE 100
void printArray(int arr[],int size);
 int main()
 {
     int size,i;
     int arrA[MAX_SIZE];
     int arrB[MAX_SIZE];
     int *arrA_ptr=arrA;
     int *arrB_ptr=arrB;
     int *last_ptr;


     printf("Enter the size of arrA:  ");
     scanf("%d",&size);
     printf("Enter the element in array A");
     for(i=0 ; i<size ; i++)
     {
         scanf("%d",(arrA+i));
     }
     
     last_ptr = &arrA[size-1];
     
     printf("\nArray A before copy ");
     printArray(arrA,size);
     printf("\n Array b before copying :");
     printArray(arrB,size);
     
     while (arrA<=last_ptr)
      {
          *arrB_ptr=*arrA_ptr;
          arrA_ptr++;
          arrB_ptr++;
      }
      printf("\n Array A after copying");
      printArray(arrA,size);
      printf("\n Array B after ,size");
      printArray(arrB,size);

      return 0;
 }
 void printArray(int *arr ,int size)
 {
   int i;
   for(i=0;i<size;i++)
    {
        printf("%d,",*(arr+i));
    }
 }