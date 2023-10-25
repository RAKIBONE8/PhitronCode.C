#include<stdio.h>
int main ()
{

    char a[100001];
    gets(a);

    int i=0;
    while(a[i]!='\0')
    {
        if(a[i] == ',')
        {
            printf(" ");
        }
        else if(a[i]>='A' && a[i]<='Z')
        {
            printf("%c",a[i]+32);
        }
        else
        {
            printf("%c",a[i]-32);
        }

        i++;
    }
    return 0;
}