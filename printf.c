/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvez-dia <lvez-dia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 17:15:01 by lvez-dia          #+#    #+#             */
/*   Updated: 2024/05/30 11:54:08 by lvez-dia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_format(char specifier, va_list arguments_pointer)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(arguments_pointer, int));
		//char?
	else if (specifier == 's')
		count += print_str(va_arg(arguments_pointer, char *));
	else if (specifier == 'd')
		count += print_digit(va_arg(argments_pointer, int), 10);
	else if (specifier == 'x')
		count += print_hexadecimal(va_arg(arguments_pointer, unsigned int), 16);
	else
		count += write(1, &specfier, 1);
	return (count);
}

int	my_printf(const char *format, ...)
{
	va_list	arguments_pointer;
	int		count;

	va_start(arguments_pointer, format);
	count = 0;
	while (*format != NULL)
	{
		if (*format == '%')
			count += print_format(*(++format), arguments_pointer);
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(arguments_pointer);
	return (count);
}
