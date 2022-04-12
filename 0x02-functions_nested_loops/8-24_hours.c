#include "main.h"

/**
 * jack_bauer - jack_bauer
 * Description: Prints timer count down
 * Return: 00:00 timer
 */

void jack_bauer(void)
{
	int hr;
	int mn;

	for (hr = 0; hr < 24; hr++)
	{
		for(mn = 0; mn < 60; mn++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((mn / 10) + '0');
			_putchar((mn % 10) + '0');
			_putchar('\n');
		}
	}
}
