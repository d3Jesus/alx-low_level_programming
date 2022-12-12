#include<stdio.h>

/**
 * main -Entry point
 *
 * Description - Prints all possible combinations of third digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int firstDigit;
	int secondDigit;
	int thirdDigit;

	for (firstDigit = 0; firstDigit < 8; firstDigit++)
		for (secondDigit = firstDigit + 1; secondDigit < 9; secondDigit++)
			for (thirdDigit = secondDigit + 1; thirdDigit < 10; thirdDigit++)
			{
				putchar((firstDigit % 10) + '0');
				putchar((secondDigit % 10) + '0');
				putchar((thirdDigit % 10) + '0');

				if (firstDigit == 7 && secondDigit == 8 && thirdDigit == 9)
					break;

				putchar(',');
				putchar(' ');
			}	
	putchar(*"\n");
	return (0);
}
