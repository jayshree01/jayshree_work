// C program to append data to a file
 

#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1000


void readFile(FILE * fPtr);


int main()
{
    FILE *fPtr;
    char filePath[100];

    char dataToAppend[BUFFER_SIZE];


    printf("Enter file path: ");
    scanf("%s", filePath);

    fPtr = fopen(filePath, "a");


    if (fPtr == NULL)
    {
        printf("\nUnable to open '%s' file.\n", filePath);
        printf("Please check whether file exists and you have write privilege.\n");
        exit(EXIT_FAILURE);
    }


    printf("\nEnter data to append: ");
    fflush(stdin);         
    fgets(dataToAppend, BUFFER_SIZE, stdin);


    fputs(dataToAppend, fPtr);


    fPtr = freopen(filePath, "r", fPtr);

    printf("\nSuccessfully appended data to file. \n");
    printf("Changed file contents:\n\n");
    readFile(fPtr);

    fclose(fPtr);

    return 0;
}



/**
 * Reads a file character by character 
 * and prints on console.
 * 
 * @fPtr    Pointer to FILE to read.
 */
void readFile(FILE * fPtr)
{
    char ch;

    do 
    {
        ch = fgetc(fPtr);

        putchar(ch);

    } while (ch != EOF);
}