#include<stdio.h>

void input(int a[],int n)
{
    int i;
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
}

void selection(int a[],int n)
{
    int i,j,temp;
    for (i=0;i<n;i++)
    {   int min=i;
        for (j=i+1;j<n;j++)
        {
            if (a[i]>a[j])
            {
                min=j;
                //a[i]=a[j];
                //a[j]=temp;
            }
        }
        if (min!=i)
        {
            //swap(a[i],a[min]);
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
}
/*int swap(int a[],int a1[])
{
    int i,temp,min;
    temp=a[i];
    a[i]=a1[min];
    a1[min]=temp;
}*/

void output(int a[],int n)
{
    int i;
    for (i=0;i<n;i++)
        printf("%d\t",a[i]);
}

int main()
{
    int  a[100],i,j,n,temp;
    printf("\nEnter no. of array element: ");
    scanf("%d",&n);
    printf("\nEnter the array elements: ");
    input(a,n);
    printf("\nBefore sorting: ");
    output(a,n);
    selection(a,n);
    printf("\nafter sorting: ");
    output(a,n);
}
