#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Insert number1:\n");
    scanf("%d",&num1);
    printf("Insert number2:\n");
    scanf("%d",&num2);
    num3=num1;
    num1=num2;
    num2=num3;
    printf("number1:%d\n",num1);
    printf("number2:%d\n",num2);    
    return 0 ;

}