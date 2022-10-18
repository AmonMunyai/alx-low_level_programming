#include "main.h"

/**
 * jack_bauer - prints every minute of the day, 00:00 to 23:59
 * Return: 0
 */
void jack_bauer(void)
{
	int hour, min;

	for (hour = 0; hour < 24; hour++) /* prints hours */
	{
		for (min = 0; min < 60; min++) /* prints minutes */
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
