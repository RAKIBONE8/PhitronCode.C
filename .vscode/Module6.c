// Even numbers
/*
#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(n==1)
        {
            printf("-1");
        }
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
*/
//Even,Odd,Pos,Negative

/*
#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);

    int a;
    int E=0,O=0,P=0,N=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);

        if(a%2==0)
        {
            E++;
        }
        else
        {
            O++;
        }

        if(a!=0 && a>0)
        {
            P++;
        }

        if(a<0)
        {
            N++;
        }
    }

    printf("Even: %d\n",E);
    printf("Odd: %d\n", O);
    printf("Positive: %d\n", P);
    printf("Negative: %d\n", N);
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
   int realPass = 1999;
   int a;

   while(scanf("%d",&a) != EOF)
   {
       if(a==realPass)
       {
          printf("Correct");
          return 0;
       }
       else
       {
         printf("Wrong\n");
       }
   }

    return 0;
}
*/
//Max term

/*
#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int Max = 0;
    int a;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);

        if(a>Max)
        {
           Max=a;
        }

    }
    printf("%d",Max);
    return 0;
}
*/

// Multiplication Table

/*
#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int Mul;

    for(int i=1;i<=12;i++)
    {
        Mul = n*i;
        printf("%d * %d = %d\n", n, i, Mul);
    }

    return 0;
}
*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        do
        {
            int lastdigit = a % 10;
            printf("%d ", lastdigit);
            a /= 10;
        } while (a != 0);

        printf("\n");
    }
    return 0;
}
