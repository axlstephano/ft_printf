/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putletters.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcastil <axcastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:18:04 by axcastil          #+#    #+#             */
/*   Updated: 2023/11/22 19:08:28 by axcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_printf(char c, size_t *number)
{
	write(1, &c, 1);
	(*number)++;
}

void	ft_putstr_printf(char *s, int *number)
{
	while(*s)
		write (1, &(*s), 1);
	(*number)++;
}