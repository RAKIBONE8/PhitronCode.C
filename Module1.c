#include<stdio.h>
/*
int main ()
{
    printf("Rakib is a peaceful soul\n");
    printf("\tNoob coder");

    return 0;
}
*/

/*
ESCAPE character
 \n - new line
 \t - tab
*/

/*
int main ()
{
    // int rakib = 18;
    // int x = 10;
    // int y = 12;

    // printf("%d %d %d",rakib,x,y);

    // float effort = 120.99;

    // printf("%0.2f",effort);

    char Goku = 'S';
    printf("%c",Goku);

    return 0;
}
*/

/*
int main ()
{
    // int king,queen;
    // char c;
    // float f;

    // scanf("%d %c %f",&king,&c,&f);
    // printf("%d %c %0.2f",king,c,f);

    int a,b;

    scanf("%da %db",&a,&b);
    printf("%da %db",a,b);

    return 0;
}
*/

/*
int main ()
{
    // int  a = 1000000000; //(-10^9 - +10^9);
    // long long int b = 1000000000000000000; //(-10^18 - +10^18);
    // printf("%lld",b);

    double a = 2006.8439652920843;

    printf("%0.15lf",a);
    return 0;
}
*/

//Rakib

int main ()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}