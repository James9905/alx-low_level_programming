#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * label: prints letters in reverse
 *
 * Return:0
 */
int main(void)
{
	char t = 'z';

	while (t >= 'a')
	{
		putchar(t);
		t--;
	}

	putchar('\n');
	return (0);
}
