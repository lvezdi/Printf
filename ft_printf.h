/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvez-dia <lvez-dia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 17:13:01 by lvez-dia          #+#    #+#             */
/*   Updated: 2024/06/03 13:03:03 by lvez-dia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int	my_printf(const char *format, ...);
int print_char(char c);
int print_str(char *s);
int print_int(int number);
int print_hexadecimal_tolower(size_t number);
int print_hexadecimal_toupper(size_t number);

#endif
