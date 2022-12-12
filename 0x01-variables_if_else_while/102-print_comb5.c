#include<stdio.h>

/**
 * main -Entry point
 *
 * Description - Prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int firstNumber;
	int secondNumber;

	for (firstNumber = 0; firstNumber <= 98; firstNumber++)
		for (secondNumber = firstNumber + 1; secondNumber <= 99; secondNumber++)
		{
			putchar((firstNumber / 10) + '0');
			putchar((firstNumber % 10) + '0');

			putchar(' ');

			putchar((secondNumber / 10) + '0');
			putchar((secondNumber % 10) + '0');

			if (firstNumber == 98 && secondNumber == 99)
				break;

			putchar(',');
			putchar(' ');
		}

	putchar(*"\n");
	return (0);
}
