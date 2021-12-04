// C program to replace last occurrence of a character with another in a string
 

#include <stdio.h>
#define MAX_SIZE 100 


void replaceLast(char * str, char oldChar, char newChar);


int main()
{
    char str[MAX_SIZE], oldChar, newChar;

    printf("Enter any string: ");
    gets(str);

    printf("Enter character to replace: ");
    oldChar = getchar();

    
    getchar();

    printf("Enter character to replace '%c' with: ", oldChar);
    newChar = getchar();


    printf("\nString before replacing: \n%s", str);

    replaceLast(str, oldChar, newChar);

    printf("\n\nString after replacing '%c' with '%c': \n%s", oldChar, newChar, str);

    return 0;
}

void replaceLast(char * str, char oldChar, char newChar)
{
    int i, lastIndex;

    lastIndex = -1;
    i = 0;

    
    while(str[i] != '\0')
    {
       
        if(str[i] == oldChar)
        {
            lastIndex = i;
        }

        i++;
    }

    if(lastIndex != -1)
    {
        str[lastIndex] = newChar;
    }
}