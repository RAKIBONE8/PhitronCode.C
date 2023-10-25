#include<stdio.h>
int main ()
{
    char a[100];
    char b[100];

    scanf("%s\n%s",a,b);
    int i=0;
    while(1)
    {
        //Base condition
        if(a[i] == '\0' && b[i] == '\0')
        {
            printf("%s",a);//print any one string from this two
            break;
        }
        else if(a[i] == '\0')
        {
            printf("%s",a);
            break;
        }
        else if(b[i] == '\0')
        {
            printf("%s",b);
            break;
        }

        if(a[i] == b[i])
        {
            i++;
        }
        else if(a[i]>b[i])
        {
            printf("%s",b);
            break;
        }
        else
        {
            printf("%s",a);
            break;
        }
    }

    return 0;
}