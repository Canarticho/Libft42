/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 03:17:50 by chle-van          #+#    #+#             */
/*   Updated: 2016/11/24 07:08:56 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int c)
{
	if (c < 0)
	{
		ft_putchar('-');
		ft_putnbr(-(c / 10));
		ft_putchar(c % 10 + '0');
	}
	else if (c >= 10)
	{
		ft_putnbr(c / 10);
		ft_putchar(c % 10 + '0');
	}
	else
		ft_putchar(c + '0');
}
