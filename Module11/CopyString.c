#include<stdio.h>
#include<string.h>
int main ()
{
    int n;
    scanf("%d",&n);
    char a[n+1] ;
    char b[n+1] ;

    scanf("%s\n%s",a,b);
    // for(int i=0;i<n;i++)
    // {
    //     a[i] = b[i];
    // }
    strcpy(a,b);
    printf("%s %s",a,b);
    return 0;
}