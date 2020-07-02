#include <stdio.h>
/**
 * main - Entry point
 * Description:
 * program that prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
        int first;
        int second;
        int count = 49;

        for (first = 48; first <= 57; first++)
        {
                for (second = count; second <= 57; second++)
                {
                        putchar(first);
                        putchar(second);
                        if (first == 56 && second == 57)
                        {
                                return(0);
                        }
                        if (first != 56 || second != 57)
                        {
                                putchar(',');
                                putchar(' ');
                        }
                }
                count++;
        }
        putchar('\n');
        return (0);
}
