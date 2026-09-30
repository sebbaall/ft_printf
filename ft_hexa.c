/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabahmad <sabahmad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 13:48:40 by sabahmad          #+#    #+#             */
/*   Updated: 2026/09/30 15:42:19 by sabahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(unsigned long nbr)
{
	int		len;
	char	*hexa;

	len = 0;
	hexa = "0123456789abcdef";
	if (nbr >= 16)
	{
		len = ft_hexa(nbr / 16);
		if (len == -1)
			return (-1);
	}
	if (write(1, &hexa[nbr % 16], 1) == -1)
		return (-1);
	return (len + 1);
}
