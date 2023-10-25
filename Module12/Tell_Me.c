#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);

    while(n--)
    {
        int N;
        scanf("%d", &N);

        int ar[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &ar[i]);
        }

        int x;
        scanf("%d", &x);
        int flag = 0;

        for (int i = 0; i < N; i++)
        {
            if (ar[i] == x)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}