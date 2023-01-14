#include<stdio.h>
#define SIZE 100
int main()
{
    int vou=0,con=0,i;
    char ary[SIZE];
    printf("Insert a string:");
    gets(ary);
    while(ary[i]!='\0')
    {
        if(ary[i]=='a'||ary[i]=='e'||ary[i]=='i'||ary[i]=='o'||ary[i]=='u'||
        ary[i]=='A'||ary[i]=='E'||ary[i]=='I'||ary[i]=='O'||ary[i]=='U')
        {
            vou++;
        }
        else 
        {
            con++;
        }
        i++;
    }
    printf("Total vowel is %d and conconent is %d",vou,con);
    return 0;
}