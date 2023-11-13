#include <stdio.h>
int CntVowel(char s[], int i)
{
    if (s[i] == '\0')// base case
    {
        return 0;
    }
    int ans = CntVowel(s, i + 1);

    if (s[i] >= 'A' && s[i] <= 'Z')
    {
        s[i] += 32;
    }

    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
    {
        return ans + 1;
    }
    else
    {
        return ans;
    }
}
int main()
{
    char s[1001];
    fgets(s, sizeof(s), stdin);
    int i = 0;
    int count = CntVowel(s, i);
    printf("%d", count);
    return 0;
}