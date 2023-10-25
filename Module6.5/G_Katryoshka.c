#include<stdio.h>
int main ()
{
    int Eye,Face,Body;
    long long int statue = 0;
    scanf("%d%d%d",&Eye,&Face,&Body);

    while (Eye >= 1 && Face >= 1 && Body >= 1)
    {
        statue++;
        Eye -= 1;
        Face -= 1;
        Body -= 1;
    }
    while (Eye >= 2 && Face >= 1 && Body >= 1)
    {
        statue++;
        Eye -= 2;
        Face -= 1;
        Body -= 1;
    }

    while(Eye>=2 && Body>=1)
    {
       statue++;
       Eye -= 2;
       Body -=1;
    }


    printf("%lld",statue);
        return 0;
}

