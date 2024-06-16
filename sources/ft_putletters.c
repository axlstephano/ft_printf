/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putletters.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcastil <axcastil@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:18:04 by axcastil          #+#    #+#             */
/*   Updated: 2024/06/16 17:03:46 by axcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putchar_printf(char c, size_t *number)
{
	write(1, &c, 1);
	(*number)++;
}

void	ft_putstr_printf(char *s, size_t *number)
{
	if (!s)
	{
		ft_putstr_printf("(null)", number);
		return ;
	}
	while (*s != '\0')
	{
		ft_putchar_printf(*s, number);
		s++;
	}
}
