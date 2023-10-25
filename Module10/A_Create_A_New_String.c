#include<stdio.h>
#include<string.h>
int main ()
{
    char a[1000];
    char b[1000];
    scanf("%s\n",a);
    scanf("%s",b);

    int l1 = strlen(a);
    int l2 = strlen(b);
    
    printf("%d %d\n",l1,l2);
    printf("%s %s",a,b);

    return 0;
}