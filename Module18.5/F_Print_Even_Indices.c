#include<stdio.h>
void Evenindices(int arr[],int n)
{
   if(n == 0)
   {
      return;
   }
   int index = n - 1;
   if ((index) % 2 == 0)
   {
      printf("%d",arr[index]);
      if ((n-1) > 0)
      {
          printf(" ");
      }
   }
   
   Evenindices(arr,n-1);
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
    Evenindices(arr,n);
    return 0;
}