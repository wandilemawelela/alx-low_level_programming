#include "main.h"

/**
  * jack_bauer - Prints every minute of the day of Jack Bauer,
  * starting from 00:00 to 23:59.
  * Return: 0
  */

void jack_bauer(void)
{
	int h_tens, h_ones, m_tens, m_ones, h_max;

	h_max = 58;
	h_tens = '0';

	while (h_tens < '3')
	{
		if (h_tens == '2')
		{
			h_max = '4';
		}
		h_ones = '0';
		while (h_ones < h_max)
		{
			m_tens = '0';
			while (m_tens < '6')
			{
				m_ones = '0';
				while (m_ones < 58)
				{
					_putchar(h_tens);
					_putchar(h_ones);
					_putchar(':');
					_putchar(m_tens);
					_putchar(m_ones);
					_putchar('\n');
					m_ones++;
				}
				m_ones = '0';
				m_tens++;
			}
			m_tens = '0';
			h_ones++;
		}
		h_ones = '0';
		h_tens++;
	}
}
