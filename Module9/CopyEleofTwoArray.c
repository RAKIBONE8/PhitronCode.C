#include<stdio.h>
int main ()
{
    int n,m;
    scanf("%d %d",&n,&m);

    int arr1[n];
    int arr2[m];
    int O = n+m;
    int ans[O];
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    
    
    for(int j=0;j<m;j++)
    {
        scanf("%d",&arr2[j]);
    }

    for(int i=0;i<n;i++)
    {
        ans[i]=arr1[i];
    }

    int i=n;
    for(int j=0;j<m;i++)
    {
        ans[i] = arr2[j];
        i++;
    }

    for(int i=0;i<O;i++)
    {
        printf("%d ",ans[i]);
    }

    return 0;
}