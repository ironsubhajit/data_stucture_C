#include<stdio.h>
void input(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nenter no %dth element of the array: ",i+1);
        scanf("%d",&a[i]);
    }
}
void bubble(int a[],int n)
{
    int i,j,temp;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

void output(int a[], int n)
{
    int i;
    for (i=0;i<n;i++)
        printf("%d\t",a[i]);
}

void main()
{
    int a[100],i,j,n,item,temp;
    printf("\nEnter the no. of array element: ");
    scanf("%d",&n);
    //printf("\nenter the array element: ");
    input(a,n);
    printf("\nbefore sorting:\n");
    output(a,n);
    bubble(a,n);
    printf("\nafter sorting:\n");
    output(a,n);
}
