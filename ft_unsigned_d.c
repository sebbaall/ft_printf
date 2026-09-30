/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_d.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabahmad <sabahmad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 15:32:47 by sabahmad          #+#    #+#             */
/*   Updated: 2026/09/29 15:38:28 by sabahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_d(unsigned int num)
{
	int		len;
	char	c;

	len = 0;
	if (num >= 10)
	{
		len = ft_unsigned_d(num / 10);
		if (len == -1)
			return (-1);
	}
	c = (num % 10) + '0';
	if (write(1, &c, 1) == -1)
		return (-1);
	return (len + 1);
}
