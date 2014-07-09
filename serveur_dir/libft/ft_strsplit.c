/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpontat <jpontat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 15:14:39 by jpontat           #+#    #+#             */
/*   Updated: 2013/12/27 15:17:29 by jpontat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_word(const char *s, char c)
{
	int		in_word;
	int		aux;
	int		i;

	in_word = 0;
	i = 0;
	aux = 0;
	while (s[i])
	{
		if (in_word && s[i] == c)
			in_word = 0;
		if (!in_word && s[i] != c)
		{
			in_word = 1;
			aux++;
		}
		i++;
	}
	return (aux);
}

static void	find_word(const char *s, int *j, int *u, char c)
{
	while (s[*j] != c && s[*j] != '\0')
	{
		(*j)++;
		(*u)++;
	}
}

char		**ft_strsplit(const char *s, char c)
{
	int		n;
	char	**tab;
	int		i;
	int		j;
	int		u;

	n = nb_word(s, c);
	tab = malloc((n + 1) * sizeof(char*));
	if (tab == NULL)
		return (NULL);
	tab[n] = 0;
	i = 0;
	j = 0;
	while (i < n)
	{
		while (s[j] == c)
			j++;
		u = 0;
		find_word(s, &j, &u, c);
		tab[i] = malloc((u + 1) * sizeof(char));
		ft_strncpy(tab[i], s + j - u, u);
		tab[i][u] = '\0';
		i++;
	}
	return (tab);
}
