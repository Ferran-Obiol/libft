/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fobiol-b <fobiol-b@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:10:31 by fobiol-b          #+#    #+#             */
/*   Updated: 2022/01/20 16:17:16 by fobiol-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;

	if (ft_strlen((char *)s) < (int)start || len == 0)
		result = malloc(1);
	else
	{
		result = malloc(ft_strlen((char *)s) + 1);
	}
	if (result == NULL)
		return (NULL);
	ft_memcpy(result, &s[start], len);
	return (result);
}
