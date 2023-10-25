#include<stdio.h>
int main ()
{
    int a1,a2,a3,result;
    scanf("%d%d%d%d",&a1,&a2,&a3,&result);

    if(a1+(a2*a3)==result)
    {
        printf("YES");
    }
    else if((a1-a2)+a3 == result)
    {
        printf("YES");
    }
    else if((a1*a2)+a3 == result)
    {
        printf("YES");
    }
    else if ((a1 + a2) * a3 == result)
    {
        printf("YES");
    }
    else if (a1-(a2*a3) == result)
    {
        printf("YES");
    }
    else if ((a1-a2)*a3 == result)
    {
        printf("YES");
    } 

    else if ((a1*a2)-a3 == result) {
        printf("YES");
    }
    else if ((a1+a2)-a3 == result)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

            return 0;
}