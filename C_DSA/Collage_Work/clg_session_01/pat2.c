#include<stdio.h>
int main()
{
    int j,k;
    for(j=1;j<=5;j++)
    {
        for (k=1;k<=j;k++)
            printf(" %d",j+k-1);
        printf("\n");
    }
}
/*OUTPUT:
 1
 2 3
 3 4 5
 4 5 6 7
 5 6 7 8 9
 */
