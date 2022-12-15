#include "main.h"

/**
 * main - tests function that prints if integer is positive or negative
 * return: 0
 */

int main(void)
{
	int month;
	int day;
	int year;

	month = 2;
	day = 29;
	year = 2000;

	print_remaining_days(month, day, year);

	return (0);
}
