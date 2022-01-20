/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fobiol-b <fobiol-b@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:58:14 by fobiol-b          #+#    #+#             */
/*   Updated: 2022/01/20 13:40:39 by fobiol-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*src_iter;
	unsigned char	*dst_iter;

	src_iter = (unsigned char *)src;
	dst_iter = (unsigned char *)dst;
	while (len > 0)
	{
		dst_iter[len - 1] = src_iter[len - 1];
		len--;
	}
	return (dst);
}
