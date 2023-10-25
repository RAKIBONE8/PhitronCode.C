#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    int sumPositive = 0;
    int sumNegative = 0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<0)
        {
            sumNegative+=arr[i];
        }
        else
        {
            sumPositive+=arr[i];
        }
    }

    printf("%d %d",sumPositive,sumNegative);
    return 0;
}