#include<stdio.h>
#include<limits.h>
int main ()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int MinNum = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<MinNum)
        {
            MinNum = arr[i];
        }
    }
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == MinNum)
        {
            count++;
        }
    }

    if(count%2==0)
    {
        printf("Unlucky\n");
    }
    else
    {
        printf("Lucky\n");
    }
    return 0;
}