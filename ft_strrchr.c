/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fobiol-b <fobiol-b@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:46:05 by fobiol-b          #+#    #+#             */
/*   Updated: 2022/01/13 13:45:05 by fobiol-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strrchr(const char *s, int c)
{
	char			*iter;
	unsigned char	to_find;

	to_find = (unsigned char)c;
	iter = NULL;
	while (*s != 0)
	{
		if (*s == to_find)
			iter = (char *)s;
		s++;
	}
	if (to_find == 0)
		return ((char *)s);
	return (iter);
}
