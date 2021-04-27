/*pattern:
    1
   12
  123
 1234
12345
*/

#include<stdio.h>

int main()
{
    int i,j,k;
    for (i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("%d",k);
        printf("\n");
    }

}
