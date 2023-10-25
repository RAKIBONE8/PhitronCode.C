#include<stdio.h>
#include<string.h>
int main ()
{
    char a[100000];
    scanf("%s",a);

    int consonant = strlen(a);

    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]=='a')
        {
            consonant--;
        }
        else if(a[i] == 'e')
        {
            consonant--;
        }
        else if (a[i] == 'i')
        {
            consonant--;
        }
        else if (a[i] == 'o')
        {
            consonant--;
        }
        else if (a[i] == 'u')
        {
            consonant--;
        }
    }

    printf("%d",consonant);
    return 0;
}