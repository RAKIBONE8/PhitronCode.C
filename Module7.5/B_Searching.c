#include<stdio.h>

int main ()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int x;
    scanf("%d",&x);
    int i=0;
    while(i<n)
    {
        if(arr[i]==x)
        {
            printf("%d",i);
            return 0;
        }
       i++;
    }
    printf("-1");

    return 0;
}