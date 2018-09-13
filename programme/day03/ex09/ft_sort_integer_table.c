/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 12:52:49 by nchin             #+#    #+#             */
/*   Updated: 2018/09/12 16:42:05 by nchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i1;
	int i2;
	int tmp;

	i1 = 0;
	while (size != 0)
	{
		while (i1 < size)
		{
			i2 = i1 + 1;
			if ((tab[i1]) > (tab[i2]))
			{
				tmp = tab[i1];
				tab[i1] = tab[i2];
				tab[i2] = tmp;
			}
			i1++;
		}
		i1 = 0;
		size--;
	}
}
