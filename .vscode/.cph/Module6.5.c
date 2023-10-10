#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    char firstch = 'a';
    if (ch == 'z')
    {
        printf("%c", firstch);
    }
    else
    {
        printf("%c", ch + 1);
    }
    return 0;
}