#include <stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int eleNum;
    scanf("%d", &eleNum);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // sorting to get the maxsum
    for (int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j<n;j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int MaxSum = 0;
    for (int i = 1; i <= eleNum; i++)
    {
        MaxSum += arr[n - i];
    }
    printf("%d", MaxSum);
    return 0;
}

