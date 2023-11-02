#include<stdio.h>
int main ()
{
    int n,m;
    scanf("%d %d",&n,&m);
    if(n != m)
    {
        printf("Not Diagonal Matrix\n");
    }
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    // Primary Diagonal

    /*
    int flag = 1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i!=j)
            {
                if(arr[i][j] != 0)
                {
                    flag = 0;
                }
            }
            if(i == j && arr[i][j] == 0)
            {
                flag = 0;
            }
        }
    }
    if(flag == 0)
    {
        printf("Not Primary Diagonal\n");
    }
    else
    {
        printf("Primary Diagonal\n");
    }
    */

    // Secondary Diagonal
    /*
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(i+j == n-1)
            {
                if(arr[i][j] == 0)
                {
                    flag = 0;
                }

            }
            if(i+j != n-1 && arr[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    if (flag == 0)
    {
        printf("Not Secondary Diagonal\n");
    }
    else
    {
        printf("Secondary Diagonal\n");
    }
    */

    return 0;
}