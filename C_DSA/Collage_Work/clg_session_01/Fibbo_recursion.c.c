#include<stdio.h>

int fibbo(int n)
{
    if (n==0||n==1)
        return n;
    else
        return (fibbo(n-1)+fibbo(n-2));
}
int main()
{
    int i,num;
    printf("\nenter the series:\n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
        printf("%d ",fibbo(i));
}
