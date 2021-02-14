/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypawijit <ypawijit@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 11:12:54 by ypawijit          #+#    #+#             */
/*   Updated: 2021/02/14 15:21:03 by ypawijit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
