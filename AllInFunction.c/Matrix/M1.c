//addition of matrix

#include<stdio.h>

void getData(int firstMatrix[2][2],int secondMatrix[2][2],int rowFirst,int colFirst,int rowSecond,int colSecond);
void addMatrix(int firstMatrix[2][2],int secondMatrix[2][2],int addMatrix[2][2],int rowFirst,int colFirst,int rowSecond,int colSecond);
void displayMatrix(int addMatrix[2][2],int rowFirst,int ColFirst,int colSecond ,int rowSecond );
int main()
{
  int firstMatrix[2][2],secondMatrix[2][2],add[2][2];
  int rowFirst,colFirst,rowSecond,colSecond,i,j,k;
  printf("Enter row and column of First Matrix.........");
  scanf("%d%d",&rowFirst,&colFirst);
  printf("Enter row and column of Second Matrix.........");
  scanf("%d%d",&rowSecond,&secondMatrix);
  while(colFirst!=rowSecond)
  {
      printf("column of first matrix is not equal to row of second matrix");
      printf("Enter row and column of First Matrix.........");
       scanf("%d%d",&rowFirst,&colFirst);
      printf("Enter row and column of Second Matrix.........");
       scanf("%d%d",&rowSecond,&colSecond);
  }
   getData(firstMatrix,secondMatrix,rowFirst,colFirst,rowSecond,colSecond);
   addMatrix( firstMatrix, secondMatrix, add, rowFirst, colFirst, rowSecond, colSecond );
   displayMatrix(add[2][2], rowFirst,colFirst,colSecond, rowSecond );
   return 0;

}
void getData(int firstMatrix[2][2],int secondMatrix[2][2],int rowFirst,int colFirst,int rowSecond,int colSecond)
{
    int i,j;
    printf("Enter element of matrix a:................");
  for(i=0;i<rowFirst;i++)
  {
      for(j=0;j<colFirst;j++)
      {
          printf("Enter Element a %d%d:",i+1,j+1);

          scanf("%d",&firstMatrix[i][j]);
      }
  }
  printf("Enter element of matrix b:................");
   for(i=0;i<rowSecond;i++)
  {
      for(j=0;j<colSecond;j++)
      {
          printf("Enter Element b %d%d:",i+1,j+1);

          scanf("%d",&secondMatrix[i][j]);
      }
  }

}
void addMatrix(int firstMatrix[2][2],int secondMatrix[2][2],int add[2][2],int rowFirst,int colFirst,int rowSecond,int colSecond )
{
    int i ,j;
   
    for(i=0;j<rowFirst;i++)
    {
        for(j=0;j<colSecond;j++)
        {
                add[i][j]=firstMatrix[2][2]+secondMatrix[2][2];
        }
    }
}
void displayMatrix(int add[2][2],int rowFirst,int colFirst,int colSecond,int rowSecond )
   {
       int i,j;
       for(i=0;j<rowFirst;i++)
    {
        for(j=0;j<colSecond;j++)
        {
                printf("Addition of Matrix ..................\n%d ",add[i][j]);
        }
    }

   }

