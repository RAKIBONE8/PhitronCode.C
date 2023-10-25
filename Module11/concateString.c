#include<stdio.h>
#include<string.h>
int main ()
{
    int n;
    scanf("%d",&n);
    char a[n+1];
    char b[2*n+1];

    scanf("%s %s",a,b);
    strcat(a,b);

    printf("%s",a);

    /*
     int i = 0;
     while(1)
     {
         if(a[i] == '\0')
         {
             printf("%s",b);
             break;
         }
         printf("%c",a[i]);
         i++;
     }
    */
    return 0;
}