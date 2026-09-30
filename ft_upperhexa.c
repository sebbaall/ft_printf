/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upperhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabahmad <sabahmad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 14:17:46 by sabahmad          #+#    #+#             */
/*   Updated: 2026/09/30 15:30:35 by sabahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_upperhexa(unsigned long nbr)
{
	int		len;
	char	*hexa;

	hexa = "0123456789ABCDEF";
	while (nbr >= 16)
	{
		len = ft_upperhexa(nbr / 16);
		if (len == -1)
			return (-1);
	}
	if (write(1, &hexa[nbr % 16], 1) == -1)
		return (-1);
	return (len + 1);
}
