#include <stdio.h>
#include <string.h>
char a[100][1001]; // save lines
int main()
{
    int i, j, k = 0, tmp;
    char *lines[100], *temptr; // pointer to each line
    int lens[100];             // keep line's length
    while (gets(a[k]) != NULL) // read all lines
    {
        lines[k] = a[k];
        lens[k] = strlen(lines[k]);
        k++;
    }
    for (i = 1; i < k; i++) // bubble sorting
        for (j = 0; j < k - i; j++)
        {
            int dicflag = (lens[j] == lens[j + 1]) && (strcmp(lines[j], lines[j + 1]) > 0); // 字典序比较
            if (lens[j] > lens[j + 1] || dicflag)
            {
                tmp = lens[j];
                lens[j] = lens[j + 1];
                lens[j + 1] = tmp; // 交换长度
                temptr = lines[j];
                lines[j] = lines[j + 1];
                lines[j + 1] = temptr; // 交换指针
            }
        }
    for (i = 0; i < k; ++i)
        printf("%s\n", lines[i]);
    return 0;
}