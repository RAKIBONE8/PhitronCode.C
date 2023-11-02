#include<stdio.h>
int count_before_one(int arr[],int x) 
{ 
    int count = 0;
    for(int i=0;i<x;i++)
    {
        if(arr[i] == 1)
        {
            return count;
        }
        count++;
    }
    return count;
}
int main()
{
    int n;
    scanf("%d\n",&n);

    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int cnt = count_before_one(a,n);
    printf("%d",cnt);

    return 0;
}