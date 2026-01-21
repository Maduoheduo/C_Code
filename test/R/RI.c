#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char s[100005][35];
int num[100005];
int read(int i)
{
    int ret = 0;
    char *b = s[i];
    while (*b != ' ')
    {
        ret *= 10;
        ret += *b - '0';
        b++;
    }
    return ret;
}
int cmp(const void *e1, const void *e2)
{
    if (*((int *)e1) < *((int *)e2))
        return -1;
    else if (*((int *)e1) > *((int *)e2))
        return 1;
    else
        return 0;
}
void output(int i)
{
    char s1[25];
    char *a = strchr(s[i], ' ');
    strcpy(s1, a + 1);
    printf("%s\n", s1);
}
int main()
{
    int n, m;
    scanf("%d %d\n", &n, &m);
    for (int i = 0; i < n; i++)
    {
        gets(s[i]);
        num[i] = read(i);
    }
    for (int i = 0; i < m; i++)
    {
        int *p = NULL;
        int x;
        scanf("%d", &x);
        p = (int *)bsearch(&x, num, n, sizeof(int), cmp);
        if (p != NULL)
        {
            output((int)(p - num));
        }
        else
        {
            printf("Not find!\n");
        }
    }
    return 0;
}