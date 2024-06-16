/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcastil <axcastil@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:41:16 by axcastil          #+#    #+#             */
/*   Updated: 2024/06/16 17:03:22 by axcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	inspect(va_list args, char *letter, size_t *number)
{
	if (*letter == 'c')
		ft_putchar_printf(va_arg(args, int), number);
	else if (*letter == 's')
		ft_putstr_printf(va_arg(args, char *), number);
	else if (*letter == 'p')
		ft_putaddress_printf(va_arg(args, void *), number);
	else if (*letter == 'u')
		ft_putunsigned_printf(va_arg(args, unsigned int), number);
	else if (*letter == 'd' || *letter == 'i')
		ft_putnbr_printf(va_arg(args, int), number);
	else if (*letter == 'x' || *letter == 'X')
	{
		if (*letter == 'x')
			ft_puthexadown_printf(va_arg(args, unsigned int), number);
		else
			ft_puthexaup_printf(va_arg(args, unsigned int), number);
	}
	else if (*letter == '%')
		ft_putchar_printf('%', number);
}

int	ft_printf(char const *sentence, ...)
{
	va_list	args;
	size_t	size;

	if (!sentence)
		return (0);
	size = 0;
	va_start(args, sentence);
	while (*sentence)
	{
		if (*sentence == '%')
		{
			sentence++;
			inspect(args, (char *)sentence, &size);
		}
		else
			ft_putchar_printf(*sentence, &size);
		sentence++;
	}
	va_end(args);
	return (size);
}
