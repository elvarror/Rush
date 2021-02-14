/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypawijit <ypawijit@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 12:03:39 by ypawijit          #+#    #+#             */
/*   Updated: 2021/02/14 15:21:12 by ypawijit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	rush(int x, int y);

int		main(void)
{
	rush(5, 3);
	rush(5, 1);
	rush(1, 1);
	rush(1, 5);
	rush(4, 4);
	return (0);
}
