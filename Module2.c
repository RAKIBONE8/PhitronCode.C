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

//condition

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