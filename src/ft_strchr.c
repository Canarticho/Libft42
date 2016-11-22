/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 00:30:16 by chle-van          #+#    #+#             */
/*   Updated: 2016/11/17 01:00:44 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s || (char)c == *s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}