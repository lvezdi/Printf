/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printchar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvez-dia <lvez-dia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:53:16 by lvez-dia          #+#    #+#             */
/*   Updated: 2024/06/03 13:01:21 by lvez-dia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_char(char c)
{
    write(1, &c, 1);
    return (1);
}

int print_str(char *s)
{
    int i;

    i = 0;
    while (s[i])
        {
            write(1, &s[i], 1);
            i++;
        }
    return (i);
}

void	ft_putnbr(int n)
{
	if (n >= -2147483647 && n <= 2147483647)
	{
		if (n < 0)
		{
			print_char('-');
			n = n * (-1);
		}
		if (n < 10)
			print_char(n % 10 + 48);
		if (n >= 10)
		{
			ft_putnbr(n / 10);
			print_char(n % 10 + 48);
		}
	}
	if (n == -2147483648)
		write(1, "-2147483648", 11);
}
int print_int(int number)
{
    int i;

    i = 0;
    ft_putnbr(number);
    while (number >= 10)
    {
        number = number / 10;
        i++;
    }
    i++;
    return (i);
}

int number_hexadecimal_digit(size_t number)
{
    int i;

    i = 0;
    while (number >= 16)
    {
        number = number / 16;
        i++;
    }
    i++;
    return (i);
}

int print_hexadecimal_tolower(size_t number)
{
    char    *abecedary;
    int position;
    int i;
    
    abecedary = "0123456789abcdef";
    i = number_hexadecimal_digit(number);
    if (number < 0)
    {    
        write(1, "-", 1);
        number = number * (-1);
    }
    if (number <= 15)
    {
        position = number % 16;
        write (1, &abecedary[position], 1);
    }
    if (number >= 16)
    {
            // para pasar al siguiente numero
        print_hexadecimal_tolower(number / 16);
             // con i consigo la posicion del array para imprimir
        position = number % 16;
        write (1, &abecedary[position], 1);
    }
    return (i);
}

int print_hexadecimal_toupper(size_t number)
{
    char    *abecedary;
    int position;
    int i;
    
    abecedary = "0123456789ABCDEF";
        i = number_hexadecimal_digit(number);
    if (number < 0)
    {    
        write(1, "-", 1);
        number = number * (-1);
    }
    if (number <= 15)
    {
        position = number % 16;
        write (1, &abecedary[position], 1);
    }
    if (number >= 16)
    {
        print_hexadecimal_toupper(number / 16);
        position = number % 16;
        write (1, &abecedary[position], 1);
    }
    return (i);
}