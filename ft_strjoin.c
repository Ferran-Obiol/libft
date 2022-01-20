/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fobiol-b <fobiol-b@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:22:34 by fobiol-b          #+#    #+#             */
/*   Updated: 2022/01/20 15:32:42 by fobiol-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		size1;
	int		size2;

	size1 = ft_strlen((char *)s1);
	size2 = ft_strlen((char *)s2);
	result = malloc(size1 + size2 + 1);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s1, size1 + 1);
	ft_strlcat(result, s2, size1 + size2 + 1);
	return (result);
}
