#include<stdio.h>
int main()
{
    FILE*fp=NULL;
    char data[2000];
    char x;
    fp=fopen("lets_do_it.txt","r");
    if(fp==NULL)
    {
        printf("file Not found........\n");

    }
    else{
        x=fgetc(fp);
        while (x!=EOF)
        {
          printf("%c",x);
          x=fgetc(fp);
        }
        
    }
    fclose(fp);
}