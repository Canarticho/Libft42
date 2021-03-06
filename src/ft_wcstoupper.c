/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 12:00:27 by chle-van          #+#    #+#             */
/*   Updated: 2017/07/07 12:03:50 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_wcstoupper(wchar_t *wcs)
{
	while (*wcs)
	{
		if (*wcs >= 'a' && *wcs <= 'z')
			*wcs -= 32;
		wcs++;
	}
}
