/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsezgin <gsezgin@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:34:47 by gsezgin           #+#    #+#             */
/*   Updated: 2023/07/19 12:28:04 by gsezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_calculate(int x, int y)
{
	ft_putchar(48 + x / 10);
	ft_putchar(48 + x % 10);
	ft_putchar(' ');
	ft_putchar(48 + y / 10);
	ft_putchar(48 + y % 10);
	if (x != 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_print_calculate(x, y);
			y++;
		}
		x++;
	}
}
