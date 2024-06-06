/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvez-dia <lvez-dia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:50:57 by lvez-dia          #+#    #+#             */
/*   Updated: 2024/06/06 11:17:57 by lvez-dia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_str(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (write (1, "(null)", 6));
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

/*#include <stdio.h>
int main()
{
	char	*hola = NULL;
	printf("Number of characters: %i\n", ft_printf("Content: %s\n", hola));
	printf("Number of characters: %i\n", printf("Content: %s\n", hola));
	return (0);
}*/
