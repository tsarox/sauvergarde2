/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 15:13:43 by nchin             #+#    #+#             */
/*   Updated: 2018/09/08 18:01:56 by nchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int   check_ligne(char **grille, int valeur, int x, int y)
{
	int l;

	l = 0;
	while (l < 9)
	{
		if (grille[h][l] == valeur)
			return (0);
		l++;
	}
	return (1);
}

int		check_colonne(char **grille, int valeur, int x, int y)
{
	int h;

	h = 0;
	while (h < 9)
	{
		if (grille[l][h] == valeur)
			return (0);
		h++;
	}
	return (1);
}

int		check_bloc(char **grille, int valeur, int x, int y)
{
	int h;
	int l;
	int h_bloc;
	int l_bloc;

	h_bloc = 3*(h/3);
	l_bloc = 3*(l/3);

	Ligne du bloc 
	while (l = l_bloc;  )

	Colonne du bloc 
}
