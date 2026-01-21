#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char s[100005];
int cnt[26];
int idx[26];
char S[26] = "ETAOINSHRDLCUMWFGYPBVKJXQZ";
int cmp(const void *p1, const void *p2)
{
    int a = *(int *)p1, b = *(int *)p2;
    if (cnt[a] > cnt[b])
        return -1; // a要排在b前面时，返回负数值
    else if (cnt[a] < cnt[b])
        return 1; // a要排在b后面时，返回正数值
    else
        return 0; // 不需要变动时，返回0
}
int main()
{
    int index = 0;
    char ch;
    while ((ch = getchar()) != EOF)
    {
        s[index] = ch;
        index++;
    }
    int n = strlen(s);
    for (int i = 0; i < 26; i++)
    {
        idx[i] = i;
    }
    for (int i = 0; i < n; i++)
    {
        if (isupper(s[i]))
        {
            cnt[s[i] - 'A']++;
        }
        else if (islower(s[i]))
        {
            cnt[s[i] - 'a']++;
        }
    }
    qsort(idx, 26, sizeof(int), cmp);
    for (int i = 0; i < n; i++)
    {
        if (islower(s[i]))
        {
            int m = 0;
            for (int j = 0; j < 26; j++)
            {
                if (idx[j] == s[i] - 'a')
                {
                    m = j;
                    break;
                }
            }
            s[i] = 'a' + S[m] - 'A';
        }
        else if (isupper(s[i]))
        {
            int m = 0;
            for (int j = 0; j < 26; j++)
            {
                if (idx[j] == s[i] - 'A')
                {
                    m = j;
                    break;
                }
            }
            s[i] = 'A' + S[m] - 'A';
        }
    }
    puts(s);
    return 0;
}