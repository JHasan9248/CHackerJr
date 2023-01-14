#include<stdio.h>
int main()
{
    float fah;
    printf("Insert Fahrenheit value:\n");
    scanf("%f",&fah);
    printf("Fahrenheit value is %.4f",((fah-32)*5)/9);
    return 0;
}