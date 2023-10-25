#include<stdio.h>
int main ()
{
    int num;
    scanf("%d",&num);

    int rightdigit = num%10;
    int leftdigit = num/10;

    if(num>=10 && num<=99 && rightdigit%leftdigit == 0)
    {
        printf("YES");
    }
    else if (num >= 10 && num <= 99 && leftdigit%rightdigit == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
        return 0;
}