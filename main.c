/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvez-dia <lvez-dia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:52:37 by lvez-dia          #+#    #+#             */
/*   Updated: 2024/06/03 12:57:56 by lvez-dia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
    printf("número de caracteres imprimidos: %i\n", my_printf("contenido: %X\n", 46474));
    printf("número de caracteres imprimidos: %i\n", printf("contenido: %X\n", 46474));
    //poner printf de todas las funciones
    return (0);
}