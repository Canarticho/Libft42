/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 02:14:06 by chle-van          #+#    #+#             */
/*   Updated: 2017/10/31 21:19:44 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(const char *s, char c)
{
	int wn;
	int i;

	i = 0;
	wn = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && (s[i]))
		{
			while (s[i] != c && s[i])
				i++;
			wn++;
		}
	}
	return (wn);
}
