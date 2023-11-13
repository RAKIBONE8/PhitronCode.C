#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int Mark = 5;
    int limit;

    limit = Mark + n / 2;
    for (int i = 1; i <= limit + 1; i++)
    {
        for (int j = 1; j <= (limit+1)-i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // For tree dew
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
