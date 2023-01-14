#include<stdio.h>
int main()
{
    int a,b;
    float div;
    printf("Insert two number:\n");
    scanf("%d%d",&a,&b);
    printf("Addition is %d\n",a+b);
    printf("Subtraction is %d\n",a-b);
    printf("Multiplication is %d\n",a*b);
    div=(float)a/b;
    printf("Divition is %.2f\n",div);
    printf("Quotient is %d",a%b);
    return 0;
}