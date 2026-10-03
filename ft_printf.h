/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabahmad <sabahmad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 11:17:13 by sabahmad          #+#    #+#             */
/*   Updated: 2026/10/02 12:11:32 by sabahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_char(char c);
int	ft_string(char *str);
int	ft_numbers(long num);
int	ft_unsigned_d(unsigned int num);
int	ft_pointer(void *ptr);
int	ft_hexa(unsigned long nbr);
int	ft_upperhexa(unsigned long nbr);
int	ft_percent(void);

#endif
