#include <stdio.h>
#include <unistd.h>

/**
 * main-prints exactly"and that piece of act is useful"
 * - Ebby Jerop, 2022-07-01",
 * followed by a new line, to the standad error.
 * Return: 1 if success.
 */
int main(void)
{
	write(2, "and that piece of act is useful\" - Dora korpar, 2015-10-19\n", 59);
	return (1);
}
