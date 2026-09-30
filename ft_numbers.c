/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabahmad <sabahmad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 11:44:11 by sabahmad          #+#    #+#             */
/*   Updated: 2026/09/29 11:47:16 by sabahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_numbers(long num)
{
	int		len;
	char	c;

	len = 0;
	if (num < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		len++;
		num = -num;
	}
	if (num >= 10)
	{
		len = ft_numbers(num / 10);
		if (len == -1)
			return (-1);
	}
	c = (num % 10) + '0';
	if (write(1, &c, 1) == -1)
		return (-1);
	return (len + 1);
}
