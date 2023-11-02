#include<stdio.h>
void patter(int x)
{
    int s = 1;
    if (x == 1)
    {
        printf("#");
        return ;
    }
    int line = 1;
    for (int i = x; i >= 1; i--)
    {
        for (int j = 1; j <= x - s; j++)
        {
            printf(" ");
        }
        s++;
        for (int j = 1; j <= (2 * x - 2 * i) + 1; j++)
        {
            if (line % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
        line++;
    }
    s = 1;
    for (int i = 2; i <= x; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        s++;
        for (int j = 1; j <= (2 * x - 2 * i) + 1; j++)
        {
            if (line % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
        line++;
    }
}
int main ()
{
    int n;
    scanf("%d",&n);
    patter(n);

    return 0;
}