
#include<stdio.h>

int main ()
{
    int n = 100;
    
    printf("Hello, world! I am learning C programming language. ^_^\n");
    printf("Programming is fun and challenging. /\\/\\/\\ \n");
    printf("I want to give my %d%% dedication to learn!\tI will succeed one day.",n);
}


/*
#include<stdio.h>

int main ()
{
    int n;
    scanf("%d",&n);

    if(n%3==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
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

    for(int i=1;i<=n;i++)
    {
        if((i%3==0) && (i%7==0))
        {
            printf("%d\n",i);
        }
    }

    return 0;
}
*/


/*
#include<stdio.h>

int main ()
{
    int rupee;
    scanf("%d",&rupee);

    if(rupee>=1000)
    {
        printf("I will buy Punjabi\n");
        rupee -= 1000;
        if(rupee>=500)
        {
          printf("I will buy new shoes\n");
          printf("Alisa will buy new shoes\n");
        }
    }

   
    else
    {
        printf("Bad luck!");
    }

    return 0;
}

*/