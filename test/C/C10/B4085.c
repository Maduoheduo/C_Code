#include <stdio.h>
int tid[1005], pid[1005], state[1005];
int s[105][105];
int cnt[105];
int flag[105];
int last[105];
int find(int t, int n) // r是倒数
{
    int i = 0;
    while (i < n)
    {
        if (state[i] == 1 && last[tid[i] - 1] == 0)
        {
            last[tid[i] - 1] = 1;
        }
        int ac = 1;
        for (int j = 0; j < t; j++)
        {
            if (last[j] == 0)
            {
                ac = 0;
                break;
            }
        }
        if (ac == 1)
        {
            return tid[i];
            break;
        }
        i++;
    }
    return -1;
}
int main()
{
    int n, t, p, k, s1 = -1, s2 = -1, s3 = -1, s4 = -1;
    scanf("%d%d%d%d", &n, &t, &p, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &tid[i], &pid[i], &state[i]);
        if (state[i] == 1)
        {
            if (s[tid[i] - 1][pid[i] - 1] == 0)
            {
                cnt[tid[i] - 1]++;
            }
            s[tid[i] - 1][pid[i] - 1] = 1;
        }
    }
    // 能否获奖
    for (int i = 0; i < t; i++)
    {
        if (cnt[i] >= k)
        {
            flag[i] = 1;
        }
    }
    // s1
    for (int i = n - 1; i >= 0; i--)
    {
        if (state[i] == 1)
        {
            s1 = tid[i];
            break;
        }
    }
    // s2
    for (int i = n - 1; i >= 0; i--)
    {
        if (state[i] == 1)
        {
            int exit = 0;
            for (int j = i - 1; j >= 0; j--)
            { // 可能要特判
                if (tid[j] == tid[i] && pid[j] == pid[i] && state[j] == 1)
                {
                    exit = 1;
                    break;
                }
            }
            if (exit == 0)
            {
                s2 = tid[i];
                break;
            }
        }
    }
    // s3
    for (int i = n - 1; i >= 0; i--)
    {
        if (state[i] == 1 && flag[tid[i] - 1] == 0)
        {
            int exit = 0;
            for (int j = i - 1; j >= 0; j--)
            { // 可能要特判
                if (state[j] == 1 && tid[j] == tid[i] && pid[j] == pid[i])
                {
                    exit = 1;
                    break;
                }
            }
            if (exit == 0)
            {
                s3 = tid[i];
                break;
            }
        }
    }
    // s4
    if (p == 1)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            if (state[i] == 1)
            {
                int exit = 0;
                for (int j = i - 1; j >= 0; j--)
                { // 可能要特判
                    if (tid[j] == tid[i] && pid[j] == pid[i] && state[j] == 1)
                    {
                        exit = 1;
                        break;
                    }
                }
                if (exit == 0)
                {
                    s4 = tid[i];
                    break;
                }
            }
        }
    }
    else
    {
        s4 = find(t, n);
        }
    printf("%d %d %d %d", s1, s2, s3, s4);
    return 0;
}