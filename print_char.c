/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvez-dia <lvez-dia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:53:16 by lvez-dia          #+#    #+#             */
/*   Updated: 2024/06/04 11:58:38 by lvez-dia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

/*#include <stdio.h>
int main()
{
    printf("Number of characters: %i\n", ft_printf("Content: %c\n", 'M'));
    printf("Number of characters: %i\n", printf("Content: %c\n", 'M'));
    return (0);
}*/
