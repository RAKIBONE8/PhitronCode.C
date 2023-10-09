/*
#include<stdio.h>

int main ()
{
    int a,b;
    scanf("%d %d",&a,&b);

    if(a>=b)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;

}
*/

/*
#include<stdio.h>
int main ()
{
    int a,b;
    scanf("%d %d",&a,&b);



    if(a%b == 0)
    {
        printf("Multiples");
    }

    else if(b%a==0)
    {


            printf("Multiples");

    }
    else
    {
        printf("No Multiples");
    }
    return 0;
}

*/

/*
#include<stdio.h>
int main ()
{
    char MYletter;
    scanf("%c",&MYletter);

    if(MYletter>='a' && MYletter<='z')
    {
        printf("%c",MYletter - 32);
    }
    else
    {
        printf("%c",MYletter + 32);
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);

    while(n>=10)
    {
        n/=10;
    }
    if(n%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main ()
{
    char E;
    scanf("%c",&E);

    if(E>='a'&& E<='z')
    {
        printf("ALPHA\nIS SMALL");
    }
    else if (E>='A' && E<='Z')
    {
        printf("ALPHA\nIS CAPITAL");
    }
    else
    {
        printfw("IS DIGIT");
    }

    return 0;
}
*/


#include<stdio.h>
int main ()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
     
    // smaller value
    if (a <= b && a <= c)
    {
        printf("%d ", a);
    }
    else if (b <= a && b <= c)
    {
        printf("%d ", b);
    }
    else
    {
        printf("%d ", c);
    }
    // bigger value
    if(a>=b && a>=c)
    {
        printf("%d",a);
    }
    else if(b>=a && b>=c)
    {
        printf("%d",b);
    }
    else
    {
        printf("%d",c);
    }
    
    return 0;
}