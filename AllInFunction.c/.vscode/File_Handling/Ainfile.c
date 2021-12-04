#include<stdio.h>
int main()
{
    FILE*fp=NULL;
    int id;
    char name[100];
    float price;
    char choice;
    fp=fopen("product.txt","a");
    if(fp!=NULL)
    {
        printf("To stored the data press Y/y\n");
        scanf("%c",&choice);
        while(choice=='y'||choice=="Y")
        {
            printf("Enter product id\n");
            scanf("%d",&id);
            printf("Enter product name\n");
            scanf("%s",name);
            printf("Enter price\n");
            scanf("%f",&price);
            fprintf(fp,"%d %s %f \n",id,name,price);
            getchar();
            printf("Do you wants to continue(y/Y)\n");
            scanf("%c",&choice);
        }
    }
    fclose(fp);
}