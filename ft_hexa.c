/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabahmad <sabahmad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 13:48:40 by sabahmad          #+#    #+#             */
/*   Updated: 2026/09/30 13:55:35 by sabahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(unsigned long nbr)
{
	int		len;
	char	*hexa;
	char	c;

	hexa = "0123456789abcdf";
	while (nbr >= 16)
	{
		len = ft_hexa(nbr / 16);
		if (len == -1)
			return (-1);
	}
	c = hexa[nbr % 16];
	if (write(1, &c, 1) == -1)
		return (-1);
	return (len + 1);
}
