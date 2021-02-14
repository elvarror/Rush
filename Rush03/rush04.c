#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int l;
	int c;

	l = 0;
	c = 0;
	while (l < y)
	{
		while (c < x)
		{
			if ((c == 0 && l == 0) || (c == x - 1 && l == y - 1))
				ft_putchar('A');
			else if ((c == x - 1 && l == 0) || (c == 0 && l == y - 1))
				ft_putchar('C');
			else if ((l > 0 && l < y - 1 && c == 0) || (c == x - 1 && l > 0 && l < y - 1))
				ft_putchar('B');
			else if ((c < x - 1 && l == 0) || (c < x - 1 && l == y - 1))
				ft_putchar('B');
			else if (c > 0 && l > 0 && c < x - 1 && l < y - 1)
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		l++;
		c = 0;
	}
}
