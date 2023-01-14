#include<stdio.h>
#define SIZE 100
int main()
{
    int i;
    char *ptr,*ptr2;
    char ary[SIZE],ary2[SIZE];
    printf("Insert string:");
    gets(ary);
    ptr=ary;
    ptr2=ary2;
    while(*(ptr2++)=*(ptr++));  //Coping one string to another
    printf("Coping string is: %s",ary2);
    return 0;
    
}