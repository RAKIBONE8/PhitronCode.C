#include<stdio.h>
#include<string.h>
int Palindrome(char s[],int i)
{
    int length = strlen(s);
    if(i==length/2)
    {
        return 1;
    }
    if(s[i] == s[length-i-1])
    {
        return Palindrome(s,i+1);
    }
    else
    {
        return 0;
    }
    
}
int main ()
{
    char s[100001];
    scanf("%s",s);
    int result = Palindrome(s, 0);
    if(result == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}