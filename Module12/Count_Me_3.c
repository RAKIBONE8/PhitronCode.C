#include<stdio.h>
#include<string.h>
int main ()
{
    int n;
    scanf("%d",&n);

    while(n--)
    {
        char a[100001];

        scanf("%s", a);

        int capital = 0;
        int small = 0;
        int digits = 0;

        for (int i = 0; i < strlen(a); i++)
        {
            if (a[i] >= 'A' && a[i] <= 'Z')
            {
                capital++;
            }
            else if (a[i] >= 'a' && a[i] <= 'z')
            {
                small++;
            }
            else if (a[i] >= '0' && a[i] <= '9')
            {
                digits++;
            }
        }

        printf("%d %d %d \n", capital, small, digits);
    }

   
    return 0;
}