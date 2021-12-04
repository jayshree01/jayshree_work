//strstr()
#include <stdio.h>
#include <string.h>
int main()
{
    char myname[100]="something happen anytime";
    char *p;
    p=strstr(myname,"happen");
       printf("%s\n",p);
      getchar();
    return 0;
}

