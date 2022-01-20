/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fobiol-b <fobiol-b@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 13:17:05 by fobiol-b          #+#    #+#             */
/*   Updated: 2022/01/11 20:04:04 by fobiol-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, unsigned int len)
{
	unsigned char	d;
	unsigned char	*p;

	d = (unsigned char)c;
	p = (unsigned char *)b;
	while (len > 0)
	{
		*p = d;
		p++;
		len--;
	}
	return (b);
}
