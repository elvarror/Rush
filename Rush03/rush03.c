/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypawijit <ypawijit@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 11:15:35 by ypawijit          #+#    #+#             */
/*   Updated: 2021/02/14 15:22:12 by ypawijit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	loop_putchar(char l, char m, char n, int x);

void	rush(int x, int y)
{
	int j;

	j = 1;
	while (j <= y)
	{
		if ((j == 1) || (j == y))
		{
			loop_putchar('A', 'C', 'B', x);
		}
		else
		{
			loop_putchar('B', 'B', ' ', x);
		}
		j++;
	}
}
