//percentage
#include <stdio.h>
 
int main(void) {
  int ph,bg,cm,mh,ch,per;
 
  printf("Enter marks of physics subject : ");
  scanf("%d",&ph);
  printf("\nEnter marks of biology subject : ");
  scanf("%d",&bg);
  printf("\nEnter marks of computer subject : ");
  scanf("%d",&cm);
  printf("\nEnter marks of mathematics  subject : ");
  scanf("%d",&mh);
  printf("\nEnter marks of  chemistry subject : ");
  scanf("%d",&ch);
 
  per = (ph+bg+cm+mh+ch)/5;
 
  printf("\n obtained %d %% marks and ",per);
 
  if(per>100){
    printf("Invalid ");
  }else if(per>=90 && per<=100){
    printf(" grade is A");
  }else if(per>=80 && per<90){
    printf(" grade is B");
  }else if(per>=70 && per<80){
    printf(" grade is C");
  }else if(per>=60 && per<70){
    printf(" grade is D");
  }else if(per>=40 && per<60){
    printf(" grade is E");
  }else{
    printf(" grade is F");
  }
 
  return 0;

}

