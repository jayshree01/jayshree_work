//•	Gross Salary of an Employee
#include<stdio.h>
int main(void) {
   
  int bs,hra,da,gs;
 
  printf("Enter your Basic salary : ");
  scanf("%d",&bs);
 
  if(bs<=10000)
            {
            hra=bs*20/100;
             da=bs*80/100;
            gs=bs+hra+da;
            printf(" Gross salary is %d",gs);
        } 
  else 
       if(bs<=20000)
          {
            hra=bs*25/100;
            da=bs*90/100;
            gs=bs+hra+da;
            printf(" Gross salary is %d",gs);
        }
  else
        if(bs>20000)
        {
            hra=bs*30/100;
            da=bs*95/100;
            gs=bs+hra+da;
             printf(" Gross salary is %d",gs);
        } 
  else
  {
        printf("Invalid salary ");
  }
 
  return 0;
}
