#include<stdio.h>
int main()
{
    printf("#include<stdio.h>\nint main() {\n    int a, b, sum;\n    scanf(\"%%d%%d\", &a, &b);\n    sum = a + b;\n    printf(\"%%d + %%d = %%d\", a, b, sum);\n    return 0;\n}");
    return 0;
}