#include<stdio.h>
#include<limits.h>
int main ()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    int min = INT_MAX;
    int max = INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min = a[i];
            
        }
    
        if(a[i]>max)
        {
            max = a[i];
        }
    }
    
    int j1,j2;
    for(int i=0;i<n;i++)
    {
        if(a[i] == min)
        {
            j1 = i;
        }
        if (a[i] == max)
        {
            j2 = i;
        }
        
    }

    int temp = a[j1];
    a[j1] = a[j2];
    a[j2] = temp;

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}