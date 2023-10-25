#include<stdio.h>
//Arithmetic operator
/*
int main ()
{
    int a=10,b=20;
    int sum=a+b;
    printf("%d \n",sum);

    int mns = b-a;
    printf("%d\n",mns);
    
    int x = 3;
    float div = b*1.0/x;
    printf("%f\n",div);

    int mul = a*b;
    printf("%d\n",mul);

    int mod = a%b;
    printf("%d",mod);
}
*/

// conditional statement type 1

/*
int main ()
{
    int rupee;
    scanf("%d",&rupee);

    if(rupee >= 100)
    {
        printf("Burger khabo");
    }
    else
    {
        printf("Khabona");
    }

    return 0;
}
*/

// conditional statement type 2

/*
int main ()
{
    int rupee;
    scanf("%d",&rupee);

    if(rupee>=100)
    {
        printf("Burger Khabo");
    }
    else if(rupee>=30)
    {
        printf("Fuchka Khabo");
    }
    else
    {
        printf("Khabona");
    }

    return 0;
}
*/

//conditional statement type 3

int main ()
{
    int rupee;
    scanf("%d",&rupee);

    if(rupee>=5000)
    {
        printf("Digha jabo\n");

        if(rupee>=10000)
        {
            printf("kolkata shopping a jabo\n");
        }
        else
        {
            printf("going Home\n");
        }
    }
    else
    {
        printf("Angul chusbo");
    }

    return 0;
}