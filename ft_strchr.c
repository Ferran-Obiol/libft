/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fobiol-b <fobiol-b@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:39:50 by fobiol-b          #+#    #+#             */
/*   Updated: 2022/01/13 12:48:21 by fobiol-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	to_find;

	to_find = (unsigned char) c;
	while (*s != 0)
	{
		if (*s == to_find)
			return ((char *)s);
		s++;
	}
	if (to_find == 0)
		return ((char *)s);
	return (NULL);
}
