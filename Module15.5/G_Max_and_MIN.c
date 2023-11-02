#include<stdio.h>
#include<limits.h>
void MaxMin(int arr[],int n)
{
    int Min = INT_MAX;
    int Max = INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(arr[i]<Min)
        {
            Min = arr[i];
        }
        
        if(arr[i]>Max)
        {
            Max = arr[i];
        }
    }

    printf("%d %d",Min,Max);
}
int main ()
{
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    MaxMin(arr,n);
    return 0;
}