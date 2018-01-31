#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

/**                                                                                                                     * main - Entry point                                                                                                   *                                                                                                                      * Return: Always 0 (Success)                                                                                           */
int main(void)
{
        int n;

        srand(INT_MAX);
        n = rand();
        return (n);
}
