#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    if (n != m)
    {
        printf("Not Scalar Matrix\n");
    }

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i != j)
            {
                if (arr[i][j] != 0)
                {
                    flag = 0;
                }
            }
            if (i == j && arr[i][j] != 1)
            {
                flag = 0;
            }
        }
    }
    if (flag == 0)
    {
        printf("Not Unit Matrix\n");
    }
    else
    {
        printf("Unit Matrix\n");
    }

    return 0;
}