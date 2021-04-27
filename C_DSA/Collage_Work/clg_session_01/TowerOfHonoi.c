#include<stdio.h>

int c;
void toh(int n, char s,char a,char d)
{
    if (n==1)
    {
        printf("\nStep %d: %c -> %c",++c,s,d);
        return 0;
    }
    toh(n-1,s,d,a);
    printf("\nStep %d: %c -> %c",++c,s,d);
    toh(n-1,a,s,d);
};


int main()
{
    int n;
    system("clear");
    printf("\nEnter no. of nodes: ");
    scanf("%d",&n);
    toh(n,'s','a','d');
    printf("\nTotal no. of steps: %d",c);
}
