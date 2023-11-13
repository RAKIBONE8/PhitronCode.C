#include<stdio.h>
int main ()
{
    int testCase;
    scanf("%d",&testCase);

    for(int i=1;i<=testCase;i++)
    {   
        long long int Mul,a,b,c;
        scanf("%lld %lld %lld %lld",&Mul,&a,&b,&c);
        int flag = 0;
        long long int givenMul = (a*b)*c;
        if(givenMul == 0)
        {
           if(Mul == 0)
           {
              printf("0\n");
           }
           else
           {
            printf("-1\n");
           }
        }
        else if(Mul % givenMul == 0)
        {
            printf("%lld\n",Mul/givenMul);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}