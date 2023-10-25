/*
    *
  * * *
* * * * *
*/

/*
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * n - 2 * i) + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

*/
/*

    *
  * * *
* * * * *
  * * *
    *

*/

#include <stdio.h>
int main()
{
    int n,s,k;
    scanf("%d", &n);
    s=n-1;
    k=1;

    /*
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * n - 2 * i) + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * n - 2 * i) + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    */

    for(int i=1;i<=2*n-1;i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        if(i<n-1)
        {
            s--;
            k=k+2;
        }
        else
        {
            s++;
            k=k-2;
        }
        printf("\n");
    }
    return 0;
}