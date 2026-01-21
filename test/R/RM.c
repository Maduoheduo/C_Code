#include <stdio.h>
int Q[105];
int main()
{
    int T;
    scanf("%d", &T);
    int a[4];
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < T; i++)
    {
        int temp = a[0];
        Q[i] = a[3];
        a[0] = a[1] ^ a[3];
        a[3] = a[2];
        a[2] = a[1];
        a[1] = temp;
    }
    for (int i = 0; i < T; i++)
    {
        printf("%d", Q[i]);
    }
    return 0;
}