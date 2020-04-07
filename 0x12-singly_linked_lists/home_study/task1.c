#include "header.h"
#include <stdio.h>

int print_single()
{
	my_struct struct1;
	my_struct struct2;
	my_struct struct3;
	my_struct *my_list;
	int counter;

	my_list = &struct1;
	struct1.data = 5;
	struct2.data = 6;
	struct3.data = 7;

	struct1.next = &struct2;
	struct2.next = &struct3;
	struct3.next = NULL;

	printf("Data entered in the list:");
	printf("Data = %d", struct1.data);
	printf("Data = %d", struct2.data);
	printf("Data = %d", struct3.data);

	return (0);
}
