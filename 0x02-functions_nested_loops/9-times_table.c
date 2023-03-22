#include "main.h"
#include <stdio.h>
/**
 * times_table - prints  the product
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int a, b, ans;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			ans = a * b;
				
			if (b < 9)
			{
				if (ans > 9)
					printf("%d, ", ans);
				else
					printf(" %d, ", ans);
			}
			else
			{
				if (ans > 9)
				{
					printf("%d", ans);
				}
				else
					printf(" %d", ans);
			}
		
		}
		printf("\n");
	}
}

