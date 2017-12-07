/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albarbos <albarbos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 10:32:16 by albarbos          #+#    #+#             */
/*   Updated: 2017/11/21 11:35:40 by albarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	char	*tempdest;
	char	*tempsrc;

	tempdest = (char *)dest;
	tempsrc = (char *)src;
	while (count--)
		*(unsigned char *)tempdest++ = *(unsigned char *)tempsrc++;
	return (dest);
}
