#include<stdio.h>
int main()
{
    float cel;
    printf("Insert Celcius value:\n");
    scanf("%f",&cel);
    printf("Fahrenheit value is %.4f",(((9*cel)/5)+32));
    return 0;
}