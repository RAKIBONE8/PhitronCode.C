#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);

    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int pos;
    scanf("%d",&pos);

    for(int i=n;i>=pos+1;i--)
    {
        arr[i]=arr[i-1];
    }

    arr[pos] = 100;

    for(int i=0;i<n+1;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}