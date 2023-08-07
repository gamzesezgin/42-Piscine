/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsezgin < gsezgin@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:21:35 by gsezgin           #+#    #+#             */
/*   Updated: 2023/07/17 13:30:39 by gsezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	top_line(int x, int y)
{
	int	check;

	if (x > 0 && y > 0)
	{
		if (x == 1 && y >= 1)
			check = 0 ;
		else
			check = 1;
		ft_putchar('/');
		while (x > 2)
		{
			ft_putchar('*');
			x--;
		}
		if (check == 1)
			ft_putchar('\\');
		ft_putchar('\n');
	}
	else
		write(1, "Enter True Value\n", 17);
}

void	middle_line(int x, int y)
{
	int	temp;

	if (x > 0 && y > 0)
	{
		while (y > 2)
		{
			temp = x;
			ft_putchar('*');
			while (temp > 2)
			{
				ft_putchar(' ');
				temp--;
			}
			if (x != 1)
				ft_putchar('*');
			ft_putchar('\n');
			y--;
		}
	}
}

void	bottom_line(int x, int y)
{
	int	check;

	if (x > 0 && y > 0)
	{
		if (y > 1)
		{
			if (x == 1 && y >= 1)
				check = 0 ;
			else
				check = 1;
			ft_putchar('\\');
			while (x > 2)
			{
				ft_putchar('*');
				x--;
			}
			if (check == 1)
				ft_putchar('/');
			ft_putchar('\n');
		}
	}
}

void	rush(int x, int y)
{
	top_line(x, y);
	middle_line(x, y);
	bottom_line(x, y);
}
