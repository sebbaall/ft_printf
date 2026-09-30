/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabahmad <sabahmad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 11:16:18 by sabahmad          #+#    #+#             */
/*   Updated: 2026/09/30 15:36:44 by sabahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	formatter(char format, va_list *list)
{
	if (format == 'c')
		return (ft_char(va_arg(*list, int)));
	if (format == 's')
		return (ft_string(va_arg(*list, char *)));
	if (format == 'd' || format == 'i')
		return (ft_numbers(va_arg(*list, int)));
	if (format == 'u')
		return (ft_unsigned_d(va_arg(*list, unsigned int)));
	if (format == 'p')
		return (ft_pointer(va_arg(*list, void *)));
	if (format == 'x')
		return (ft_hexa(va_arg(*list, unsigned int)));
	if (format == 'X')
		return (ft_upperhexa(va_arg(*list, unsigned int)));
	if (format == '%')
		return (ft_percent());
	return (-1);
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		len;
	int		checker;

	va_start(list, str);
	len = 0;
	while (*str)
	{
		if (*str == '%')
		{
			checker = formatter(*(++str), &list);
			if (checker == -1)
				return (va_end(list), -1);
			len += checker;
		}
		else
		{
			if (write(1, &(*str), 1) == -1)
				return (va_end(list), -1);
			len++;
		}
		str++;
	}
	va_end(list);
	return (len);
}
