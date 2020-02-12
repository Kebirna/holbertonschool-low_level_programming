#include "holberton.h"
#include <stdio.h>
/**
 *print_to_98 - prints all the number from n to 98
 *
 *Return: string with the numbers
 */
void print_to_98(int n)
{
    if(n < 98)
    {
        for(; n <= 98; n++)
        {
            printf("%d", n);
            
            if(n < 98)
            {
                printf(", ");
            }
        }
        printf("\n");
    }
    
    else if(n > 98)
    {
        for(; n >= 98; n--)
        {
            printf("%d", n);
            
            if(n > 98)
            {
                printf(", ");
            }
        }
        printf("\n");
    }
    else if (n = 98)
    {
        printf("%d\n", n);
    }
}
