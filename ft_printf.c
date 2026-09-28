#include <stdarg.h>

int	formatter(char format, va_list *list)
{
	if (format == 'c')
		return (ft_putchar(va_arg(*list, int)));
	if (format == 's')
		return (ft_string(va_arg(*list, char *)));
	return (-1);
}

int ft_printf(const char *str, ...)
{
	va_list list;
	int len;
	int counter;
	int checker;

	va_start(list, str);
	counter = 0;
	len = 0;
	while (str[counter])
	{
		if (str[counter] == '%')
		{
			checker = formatter(str[counter + 1], &list);
			if (checker == -1)
				return (-1);
			len += checker;
			counter++;
		}
		else
		{
			if (write(1, &str[counter], 1) == -1)
				return (-1);
			len++;
		}
		counter++;
	}
	va_end(list);
	return (len);
}
