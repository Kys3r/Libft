/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albarbos <albarbos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 10:09:59 by albarbos          #+#    #+#             */
/*   Updated: 2017/11/21 11:35:59 by albarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int i;
	int temp;
	int negative;

	i = 0;
	temp = 0;
	negative = 1;
	if (!(str[0]))
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		negative = (str[i] == '-' ? -1 : 1);
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		temp = (temp * 10 + (str[i] - '0'));
		i++;
	}
	return (temp * negative);
}
