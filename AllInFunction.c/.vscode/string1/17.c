/**
 * C program to find the first occurrence of a character in a string
 */
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 


int indexOf(const char * str, const char toFind);


int main()
{
    char str[MAX_SIZE];
    char toFind;
    int index;

   
    printf("Enter any string: ");
    gets(str);
    printf("Enter character to be searched: ");
    toFind = getchar();

    index = indexOf(str, toFind);

    if(index == -1)
        printf("'%c' not found.", toFind);
    else
        printf("'%c' is found at index %d.", toFind, index);

    return 0;
}


int indexOf(const char * str, const char toFind)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == toFind)
            return i;
        i++;
    }

   
    return -1;
}