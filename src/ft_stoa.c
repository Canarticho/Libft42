/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 08:24:40 by chle-van          #+#    #+#             */
/*   Updated: 2017/09/04 18:39:58 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_stoa(int16_t s, char *buffer, int base)
{
	int16_t	i;
	char	str[2 * 8 + 2];
	int		neg;
	int		tmp;

	neg = 0;
	ft_bzero(str, 2 * 8 + 2);
	i = 0;
	tmp = 0;
	if (s < 0)
		neg = 1;
	while (s / base)
	{
		tmp = (s % base > 0) ? (s % base) : (-s % base);
		str[i++] = (tmp >= 10) ? (tmp - 10 + 'a') : (tmp + '0');
		s = s / base;
	}
	if (neg)
		s = -s;
	tmp = s % base;
	str[i++] = (s % base >= 10) ? (tmp - 10 + 'a') : (tmp + '0');
	if (neg == 1)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_strcpy(buffer, ft_strrev(str)));
}
