#include<stdio.h>
int main ()
{
    int Tcase;
    scanf("%d",&Tcase);

    while(Tcase--)
    {
        int M1,M2,FirstDays;
        scanf("%d %d %d",&M1,&M2,&FirstDays);

        int scndDays = M1 * FirstDays / (M1 + M2);
        int saved_Days = FirstDays - scndDays;

        printf("%d\n",saved_Days );
    }
    return 0;
}

