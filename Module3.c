//Loop
/*
#include<stdio.h>
int main ()
{
   for(int i=1;i<=3;i=i+1)
   {
     printf("Rakib\n");
   } 
   return 0;
}
*/

/*
#include<stdio.h>
int main ()
{
    int i;
    for(i=2;i<=20;i=i+2)
    {
        printf("%d\n",i);
    }
}
*/

/*
#include<stdio.h>

int main ()
{
    int i,n;
    long long int sum=0;
    printf("enter the limit of the loop\n");
    scanf("%d",&n);

    for(i=1;i<=n;i=i+1)
    {
        sum+=i;
        
    }
    printf("%d\n",sum);
    return 0;
}
*/

/*
#include<stdio.h>
int main ()
{
    int i;

    for(i=1;i<=10;i++)
    {
        if(i%2 == 0)
        {
            printf("%d - Even\n",i);
        }
        else
        {
            printf("%d - Odd\n",i);
        }
    }
    return 0;
}
*/

/*
#include<stdio.h>

int main ()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==5)
        {
            break;
        }
        printf("%d\n",i);
    }
}
/*
#include<stdio.h>

int main ()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==5)
        {
            continue;
        }
        printf("%d\n",i);
    }
}
*/
//while loop
/*
#include<stdio.h>

int main ()
{
    int i,n;
    scanf("%d",&n);

    i=1;
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
}
*/

//do while
#include<stdio.h>
int main ()
{
    int i,n;
    scanf("%d",&n);

    i=1;
    do
    {
       printf("%d\n",i);
       i++;
    } while (i<=n);
    
}