/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fobiol-b <fobiol-b@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:34:06 by fobiol-b          #+#    #+#             */
/*   Updated: 2022/01/20 16:03:52 by fobiol-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*result;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}	
	end = ft_strlen((char *)s1);
	while (s1[end] && ft_strchr(set, s1[end]))
	{
		end--;
	}
	result = malloc((end - start + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result = ft_substr(s1, start, end - start);
	return (result);
}
