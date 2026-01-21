#include <stdio.h>
#define mod 1e9 + 7
int lens[100005];
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &lens[i]);
    }
    long long cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (lens[j] == lens[i])
            {
                for (int i = 0;)
            }
        }
    }
    return 0;
}