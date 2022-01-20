/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fobiol-b <fobiol-b@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 18:18:45 by fobiol-b          #+#    #+#             */
/*   Updated: 2022/01/13 12:46:17 by fobiol-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_separator(int c)
{
	if ((c == ' ' || c == '\t' || c == '\n'
			|| c == '\v' || c == '\f' || c == '\r'))
		return (1);
	return (0);
}

int	is_operator(char c)
{
	return (c == '+' || c == '-');
}

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (is_separator(*str))
		str++;
	if (is_operator(*str))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}
