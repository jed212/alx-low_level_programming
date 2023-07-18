#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of
 * Jack Bauer, from 00:00 to 23:59
 *
 */
void jack_bauer(void)
{
	int h, minute;

	for (h = 0; h <= 23; h++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}

}
