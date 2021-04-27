#include<stdio.h>
int main()
{
    int i,j,k;
    for (i=5;i>=1;i--)
    {
        for (j=1;j<=i-1;j++)
            printf(" ");
        for (k=i;k<=5;k++)
            printf("%d",k);
        printf("\n");
    }
}
/* OUTPUT:
                    5
                4   5
            3   4   5
        2   3   4   5
    1   2   3   4   5

    */
