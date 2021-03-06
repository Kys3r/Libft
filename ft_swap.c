/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_swap.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/20 09:55:45 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/19 15:34:37 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap(char *a, char *b)
{
	char	i;

	if (a && b)
	{
		i = *a;
		*a = *b;
		*b = i;
	}
}
