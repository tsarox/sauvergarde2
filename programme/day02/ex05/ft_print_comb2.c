/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 21:27:39 by nchin             #+#    #+#             */
/*   Updated: 2018/09/09 00:44:46 by nchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		ft_affichage(int nb1, int nb2)
{
	int d;
	int u;
	int a;
	int b;

	d = ((nb1 / 10) + 48);
	u = ((nb1 % 10) + 48);
	if (nb1 <= 98)
	{
		ft_putchar(d) || ft_putchar(u) || ft_putchar(' ');
	}
	a = ((nb2 / 10) + 48);
	b = ((nb2 % 10) + 48);
	if (nb2 <= 99)
	{
		ft_putchar(a) || ft_putchar(b);
	}
	if (nb1 != 98)
	{
		ft_putchar(',') || ft_putchar(' ');
	}
	return (0);
}

void	ft_print_comb2(void)
{
	int nb1;
	int nb2;

	nb1 = 0;
	while (nb1 <= 98)
	{
		nb2 = nb1 + 1;
		while (nb2 <= 99)
		{
			ft_affichage(nb1, nb2);
			nb2++;
		}
		nb1++;
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
