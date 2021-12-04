#include<stdio.h>
int main()
{
    FILE*fp=NULL;
    char data[2000];
    fp=fopen("lets_do_it.txt","w");
    if(fp==NULL)
    {
        printf("unable to create file......");

    }
    else{
        printf("Enter some text............\n");
        fgets(data,2000,stdin);
        fprintf(fp,"%s",data);
        printf("Data Saved into the file..........");
        
    }
    fclose(fp);
}