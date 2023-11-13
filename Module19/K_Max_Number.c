#include<stdio.h>
#include<limits.h>
int MaxNum(int arr[],int n,int i)
{
   if(i==n)
   {
      return INT_MIN;
   }
   int ans = MaxNum(arr,n,i+1);
   if(arr[i] > ans)
   {
     return arr[i];
   }
   else
   {
      return ans;
   }
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

    int result = MaxNum(arr,n,0);
    printf("%d",result);
    return 0;
}