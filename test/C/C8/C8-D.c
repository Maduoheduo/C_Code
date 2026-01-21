#include <stdio.h>
#include <string.h>

char s[105];
char s1[105], s2[105];
int toint(char a[])
{
    int num = 0;
    int sign = 1, flag = 0;
    int n = strlen(a);
    if (a[0] == '-')
    {
        sign = -1;
        flag = 1;
    }
    for (int i = flag; i < n; i++)
    {
        num *= 10;
        num += a[i] - '0';
    }
    return num * sign;
}
double todouble(char a[])
{
    char *p = strchr(a, '.');
    double num = 0, sign = 1.0;
    char *q = a;
    if (*q == '-')
    {
        sign = -1;
        q++;
    }
    while (q < p)
    {
        num *= 10;
        num += *q - '0';
        q++;
    }
    q += 1;
    double base = 0.1;
    while (q < a + strlen(a))
    {
        num += base * (*q - '0');
        base *= 0.1;
        q++;
    }
    return num * sign;
}
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        char S[1];
        scanf("%s", s);
        char *p = strchr(s, '~'), *q = s;
        strncpy(S, s, 1);
        p++;
        switch (*p)
        {
        case 'B':
            s1[0] = '\0';
            s2[0] = '\0';
            p += 2;
            q = strchr(p, ',');
            strncpy(s1, p, q - p);
            strcpy(s2, q + 1);
            q = s2 + strlen(s2) - 1;
            *q = '\0';
            double P = todouble(s2);
            double N = 1.0 * toint(s1);
            printf("E(%s)=%.4lf,D(%s)=%.4lf\n", S, P * N, S, N * P * (1.0 - P));
            int L1 = strlen(s1), L2 = strlen(s2);
            for (int i = 0; i < L1; i++)
            {
                s1[i] = '\0';
            }
            for (int i = 0; i < L2; i++)
            {
                s2[i] = '\0';
            }
            break;
        case 'P':
            s1[0] = '\0';
            s2[0] = '\0';
            p += 2;
            strcpy(s1, p);
            p = s1 + strlen(s1) - 1;
            *p = '\0';
            double lamda = todouble(s1);
            printf("E(%s)=%.4lf,D(%s)=%.4lf\n", S, lamda, S, lamda);
            L1 = strlen(s1), L2 = strlen(s2);
            for (int i = 0; i < L1; i++)
            {
                s1[i] = '\0';
            }
            for (int i = 0; i < L2; i++)
            {
                s2[i] = '\0';
            }
            break;
        case 'G':
            s1[0] = '\0';
            s2[0] = '\0';
            p += 2;
            strcpy(s1, p);
            p = s1 + strlen(s1) - 1;
            *p = '\0';
            double P1 = todouble(s1);
            printf("E(%s)=%.4lf,D(%s)=%.4lf\n", S, 1.0 / P1, S, (1.0 - P1) / (P1 * P1));
            L1 = strlen(s1), L2 = strlen(s2);
            for (int i = 0; i < L1; i++)
            {
                s1[i] = '\0';
            }
            for (int i = 0; i < L2; i++)
            {
                s2[i] = '\0';
            }
            break;
        case 'U':
            s1[0] = '\0';
            s2[0] = '\0';
            p += 2;
            q = strchr(p, ',');
            strncpy(s1, p, q - p);
            strcpy(s2, q + 1);
            q = s2 + strlen(s2) - 1;
            *q = '\0';
            double a = todouble(s1);
            double b = todouble(s2);
            printf("E(%s)=%.4lf,D(%s)=%.4lf\n", S, (a + b) / 2.0, S, (b - a) * (b - a) / 12.0);
            L1 = strlen(s1), L2 = strlen(s2);
            for (int i = 0; i < L1; i++)
            {
                s1[i] = '\0';
            }
            for (int i = 0; i < L2; i++)
            {
                s2[i] = '\0';
            }
            break;
        case 'N':
            s1[0] = '\0';
            s2[0] = '\0';
            p += 2;
            q = strchr(p, ',');
            strncpy(s1, p, q - p);
            strcpy(s2, q + 1);
            q = s2 + strlen(s2) - 1;
            *q = '\0';
            double c = todouble(s1);
            double d = todouble(s2);
            printf("E(%s)=%.4lf,D(%s)=%.4lf\n", S, c, S, d);
            L1 = strlen(s1), L2 = strlen(s2);
            for (int i = 0; i < L1; i++)
            {
                s1[i] = '\0';
            }
            for (int i = 0; i < L2; i++)
            {
                s2[i] = '\0';
            }
            break;
        }
    }
    return 0;
}