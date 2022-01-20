/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fobiol-b <fobiol-b@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 18:12:52 by fobiol-b          #+#    #+#             */
/*   Updated: 2022/01/20 14:04:22 by fobiol-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		i;
	int		j;
	size_t	dest_size;
	size_t	src_size;

	dest_size = ft_strlen(dst);
	src_size = ft_strlen((char *)src);
	i = 0;
	j = dest_size;
	if (dstsize == 0)
		return (src_size);
	if (dest_size < (dstsize - 1))
	{
		while (src[i] != '\0' && ((dest_size + i) < (dstsize) - 1))
		{
			dst[j++] = src [i++];
		}
		dst[j] = '\0';
	}
	if (dest_size >= dstsize)
		return (dstsize + src_size);
	return (dest_size + src_size);
}
