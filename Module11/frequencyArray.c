#include<stdio.h>
int main ()
{
    int n;
    scanf("%d %d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int cnt [7] = {0};
    int num;
    scanf("%d",&num);

    for(int i=0;i<n;i++)
    {
        int val = arr[i];
        cnt[val]++;        //increamenting the index(value) which is the value of arr[i];
    }
    printf("%d - %d", num, cnt[num]);
    /*
    int val;
    scanf("%d",&val);
    int count = 0;

    for(int i=0;i<n;i++)
    {
        if(arr[i] == val)
        {
            count++;
        }
    }
    printf("%d",count);
    */
    return 0;
}