#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
void swap(int arr[], int a, int b)
{
    int save = arr[a];
    arr[a] = arr[b];
    arr[b] = save;
}
int partition(int arr[], int left, int right)
{
    int pivot = arr[right];
    int i = left - 1;
    for (int j = left; j < right; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, right);
    return i + 1;
}
void quicksort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = partition(arr, left, right);
        quicksort(arr, left, mid - 1);
        quicksort(arr, mid + 1, right);
    }
}
int getnumber(char *s)
{
    if ((strcmp("a", s) == 0) || strcmp("one", s) == 0 || strcmp("another", s) == 0 || strcmp("first", s) == 0)
    {
        return 1;
    }
    else if (strcmp("two", s) == 0 || strcmp("both", s) == 0 || strcmp("second", s) == 0)
    {
        return 2;
    }
    else if (strcmp("three", s) == 0 || strcmp("third", s) == 0)
    {
        return 3;
    }
    else if (strcmp("four", s) == 0)
    {
        return 4;
    }
    else if (strcmp("five", s) == 0)
    {
        return 5;
    }
    else if (strcmp("six", s) == 0)
    {
        return 6;
    }
    else if (strcmp("seven", s) == 0)
    {
        return 7;
    }
    else if (strcmp("eight", s) == 0)
    {
        return 8;
    }
    else if (strcmp("nine", s) == 0)
    {
        return 9;
    }
    else if (strcmp("ten", s) == 0)
    {
        return 10;
    }
    else if (strcmp("eleven", s) == 0)
    {
        return 11;
    }
    else if (strcmp("twelve", s) == 0)
    {
        return 12;
    }
    else if (strcmp("thirteen", s) == 0)
    {
        return 13;
    }
    else if (strcmp("fourteen", s) == 0)
    {
        return 14;
    }
    else if (strcmp("fifteen", s) == 0)
    {
        return 15;
    }
    else if (strcmp("sixteen", s) == 0)
    {
        return 16;
    }
    else if (strcmp("seventeen", s) == 0)
    {
        return 17;
    }
    else if (strcmp("eighteen", s) == 0)
    {
        return 18;
    }
    else if (strcmp("nineteen", s) == 0)
    {
        return 19;
    }
    else if (strcmp("twenty", s) == 0)
    {
        return 20;
    }
    return -1;
}
char *s[7];
int num[6];
char *piece[6];
int main()
{
    // 输入并处理
    for (int i = 0; i < 7; i++)
    {
        s[i] = (char *)malloc(1001);
        scanf("%s", s[i]);
        char *p = s[i];
        if (isupper(*p))
        {
            *p -= 32;
        }
    }
    int index = 0;
    for (int i = 0; i < 6; i++)
    {
        if (getnumber(s[i]) != -1)
        {
            num[index] = (getnumber(s[i]) * getnumber(s[i])) % 100;
            index++;
        }
    }
    if (index == 0)
    {
        printf("0");
        return 0;
    }
    // 小的放前面，大的放后面
    quicksort(num, 0, index - 1);
    // 输出
    for (int i = 0; i < index; i++)
    {
        if (num[i] < 10)
        {
            if (i != 0)
            {
                printf("0");
            }
            printf("%d", num[i]);
        }
        else
        {
            printf("%d", num[i]);
        }
    }
    for (int i = 0; i < 6; i++)
    {
        free(s[i]);
        free(piece[i]);
    }
    return 0;
}