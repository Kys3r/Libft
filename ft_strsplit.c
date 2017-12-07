/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albarbos <albarbos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 10:19:36 by albarbos          #+#    #+#             */
/*   Updated: 2017/11/21 11:35:54 by albarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	first;
	char	**tab;

	i = 0;
	first = 0;
	if (!s)
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(char *) * (ft_strclen(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			tab[first] = ft_memalloc(ft_strnlen(s, c, i) + 1);
			tab[first] = ft_strsub(s, i, ft_strnlen(s, c, i));
			first++;
		}
		while (s[i] != c && s[i])
			i++;
	}
	tab[first] = NULL;
	return (tab);
}
