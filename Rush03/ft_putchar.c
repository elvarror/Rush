/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypawijit <ypawijit@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 11:12:54 by ypawijit          #+#    #+#             */
/*   Updated: 2021/02/13 18:24:51 by ypawijit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	loop_putchar(char l, char m, char n, int a)
{
	int i;

	i = 1;
	while (i <= a)
	{
		if (i == 1)
			ft_putchar(l);
		else if (i == a)
			ft_putchar(m);
		else
			ft_putchar(n);
		i++;
	}
	ft_putchar('\n');
}
