#include "holberton.h"
/**
 *  - prints the last #
 *
 *Return: 0;
 */
void times_table(void)
{
    int x; /*axis x */
    int y; /*axis y*/
    int multi; /*multiplier of x and y*/
    
    for (x = 0; x < 10; x++) /*this is the rows*/
    {
        for (y = 0; y < 10; y++) /*this is the columns */
        {
            multi = x*y;
            
        if (y != 0)
        {
            if (multi < 10)
            {
             _putchar(44);
             _putchar(32);
             _putchar(32);
             _putchar((multi % 10) + '0');
            }
            else if (multi > 9)
            {
             _putchar(44);
             _putchar(32);
             _putchar((multi / 10) + '0');
             _putchar((multi % 10) + '0');
            }
        }
        else
        {
        _putchar((multi % 10) + '0');  
        }
        
        }
        _putchar('\n');
        y = 0;
    }
}


