//strlwr
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str1[]="C LANGUAGE ";
    char str2[]="C lanGuagE ";
    printf("convert to lower case :%s\n",strlwr(str1));
     printf("convert to lower case :%s",strlwr(str2));
     getch();
    return 0;
}