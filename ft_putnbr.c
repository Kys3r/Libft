/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albarbos <albarbos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 10:12:48 by albarbos          #+#    #+#             */
/*   Updated: 2017/11/21 11:35:30 by albarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n < -2147483647)
	{
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + 48);
}