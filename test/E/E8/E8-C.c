#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d\n", &n);
    while (n--)
    {
        int cnt = 0; // 放里面！
        char ch;
        while ((ch = getchar()) != '\n')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                cnt++;
        }
        if (cnt == 0)
        {
            printf("Ex Machina\n");
        }
        else
        {
            printf("Turing Complete!\n");
        }
    }
    return 0;
}