/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsezgin <gsezgin@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:22:24 by gsezgin           #+#    #+#             */
/*   Updated: 2023/07/22 18:17:52 by gsezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	a;
	int	b;

	a = 0;
	b = size - 1;
	while (a < b)
	{
		swap = tab[a];
		tab[a] = tab[b];
		tab[b] = swap;
		a++;
		b--;
	}
}
