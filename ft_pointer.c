/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabahmad <sabahmad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 11:32:55 by sabahmad          #+#    #+#             */
/*   Updated: 2026/09/30 15:54:00 by sabahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(void *ptr)
{
	unsigned long	address;
	int				len;

	if (!ptr)
	{
		if (write(1, "(nil)", 5) == -1)
			return (-1);
		return (5);
	}
	address = (unsigned long)ptr;
	len = 0;
	if (write(1, "0x", 2) == -1)
		return (-1);
	len = ft_hexa(address);
	if (len == -1)
		return (-1);
	return (len + 2);
}
