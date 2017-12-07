/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albarbos <albarbos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 10:20:05 by albarbos          #+#    #+#             */
/*   Updated: 2017/11/21 11:35:56 by albarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*s_n;
	char	*blank;
	size_t	i;
	size_t	j;

	if (s)
	{
		s_n = (char *)s;
		i = 0;
		j = ft_strlen(s) - 1;
		while (s_n[i] && (s_n[i] == ' ' || s_n[i] == '\t' || s_n[i] == '\n'))
			i++;
		while (s_n[j] && (s_n[j] == ' ' || s_n[j] == '\t' || s_n[j] == '\n'))
			j--;
		if (s_n[i] == '\0')
		{
			blank = ft_strnew(1);
			*blank = '\0';
			return (blank);
		}
		return (ft_strsub(s, i, j - i + 1));
	}
	return (NULL);
}
