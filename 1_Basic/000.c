#include<stdio.h>
int main()
{
    int i,j,n,m,k;
    printf("Insert n:");
    scanf("%d",&n);
    m=n/2+1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {

            if(j==(m-(i+1)) || (j==(m+(i+1))) || i==m || j==m)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
