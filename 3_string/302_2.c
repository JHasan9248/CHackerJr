#include<stdio.h>
#include<string.h>
int main()
{
    char ary[12],ary2[8];
    printf("Insert the string:");
    gets(ary);
    strncpy(ary2,ary,sizeof(ary2));
    ary2[sizeof(ary2)-1]='\0';
    printf("Copied string is %s ",ary2);
    return 0;

}