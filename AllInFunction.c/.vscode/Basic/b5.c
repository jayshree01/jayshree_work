#include<stdio.h>
     
     float calculateSI(float p,float r,float t)
      {
          float si;
          si=p*r*t/100;
          return si;
      }
      int main()
      {
           int  a=5,b=5;
           float c=4.3,x;
          
          x=calculateSI(a,b,c);
           printf("simple interest %.2f",x);
           return 0;
      }