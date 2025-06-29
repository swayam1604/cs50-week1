#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        h = get_int("height : ");
    }
    while (h < 1 || h > 8);
    for (int i = 0; i < h; i++)
    {
        for (int o = 0; o < h - i - 1; o++)
        {
            printf(" ");
        }
        for (int o = 0; o < i + 1; o++)
        {
            printf("#");
        }
        printf("  ");
        for (int o = 0; o < i + 1; o++)
        {
            printf("#");
        }
        printf("\n");
    }
}
