#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Durk";
    my_dog.age = 3.5;
    my_dog.owner = "Ricky";
    print_dog(&my_dog);
    return (0);
}
