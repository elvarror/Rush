#include <unistd.h>

void	ft_putchar(char c);

void	loop_putchar(char l, char m, char n, int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar(l);
		else if (i == x)
			ft_putchar(m);
		else
			ft_putchar(n);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int j;

	j = 1;
	while (j <= y)
	{
		if (j == 1)
		{
			loop_putchar('A', 'A', 'B', x);
		}
		else if (j == y)
		{
			loop_putchar('C', 'C', 'B', x);
		}
		else
		{
			loop_putchar('B', 'B', ' ', x);
		}
		j++;
	}
}
