#include <stdio.h>
/**
 * main -main block
 * Label: printing numbers from base ten
 *
 * Return:0
 */
int main(void)
{
	int t = 0;

	while (t < 10)
	{
		putchar(48 + t);
		t++;
	}

	putchar('\n');
	return (0);
}
