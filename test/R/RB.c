#include <stdio.h>
#define ui unsigned int
int pow2[32];
int main()
{
    ui k;
    scanf("%u", &k);
    for (int i = 31; i >= 0; i--)
    {
        if (((ui)1 << i) > (k / 2) && ((ui)1 << i) <= k)
        {
            pow2[i] = 1;
            k -= (1 << i);
        }
    }
    for (int i = 0; i < 32; i++)
    {
        if (pow2[i] == 1)
        {
            printf("%u ", (ui)1 << i);
        }
    }
    return 0;
}