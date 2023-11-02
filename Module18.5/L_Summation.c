#include<stdio.h>
int SumArr(int arr[],int n,int sum)
{
    if(n==0)
    {
        return sum;
    }
    return SumArr(arr,n-1,sum + arr[n-1]);
}
int main ()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    printf("%d",SumArr(arr,n,sum));
    return 0;
}