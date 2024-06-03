/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvez-dia <lvez-dia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 17:15:01 by lvez-dia          #+#    #+#             */
/*   Updated: 2024/06/03 13:04:28 by lvez-dia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_format(char specifier, va_list arguments_pointer)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(arguments_pointer, int));
	else if (specifier == 's')
		count += print_str(va_arg(arguments_pointer, char *));
		//falta p y u
	else if ((specifier == 'd') || (specifier == 'i'))
		count += print_int(va_arg(arguments_pointer, int));
	else if (specifier == 'x')
		count += print_hexadecimal_tolower(va_arg(arguments_pointer, unsigned int));
	else if (specifier == 'X')
		count += print_hexadecimal_toupper(va_arg(arguments_pointer, unsigned int));
	else
		count += write(1, &specifier, 1);
	return (count);
}

int	my_printf(const char *format, ...)
{
	va_list	arguments_pointer;
	int		count;

	va_start(arguments_pointer, format);
	count = 0;
	while (*format)
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
