#include<stdio.h>
int main()
{
    int d,w,y,day;
    printf("Insert days :\n");
    scanf("%d",&d);
    y=d/365;
    w=(d-(365*y))/7;
    day=d-(y*365)-(w*7);
    printf("Year is %d\n week is %d\n day is %d\n",y,w,day);
    return 0;
}