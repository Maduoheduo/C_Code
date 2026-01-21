#include <stdio.h>
#include <string.h>
#define MEMORY_SIZE 65536
#define PROGRAM_SIZE 1024
char memory[MEMORY_SIZE];
char *ptr = memory;
char program[PROGRAM_SIZE];
int pc;
int program_length;
void interpret_program()
{
    while (pc < program_length)
    {
        char op = program[pc];
        switch (op)
        {
        case '>':
            ++ptr;
            break;
        case '<':
            --ptr;
            break;
        case '+':
            ++(*ptr);
            break;
        case '-':
            --(*ptr);
            break;
        case '.':
            putchar(*ptr);
            break;
        case ',':
            *ptr = getchar();
            break;
        case '[':
            if (*ptr == 0)
            {
                int bracket_count = 1;
                while (bracket_count > 0 && pc < program_length - 1)
                {
                    ++pc;
                    if (program[pc] == '[')
                    {
                        ++bracket_count;
                    }
                    else if (program[pc] == ']')
                    {
                        --bracket_count;
                    }
                }
            }
            break;
        case ']':
            if (*ptr != 0)
            {
                int bracket_count = 1;
                while (bracket_count > 0 && pc > 0)
                {
                    --pc;
                    if (program[pc] == ']')
                    {
                        ++bracket_count;
                    }
                    else if (program[pc] == '[')
                    {
                        --bracket_count;
                    }
                }
            }
            break;
        }
        ++pc;
    }
}
int main()
{
    scanf("%s", program);
    getchar();
    program_length = strlen(program);
    interpret_program();
    return 0;
}