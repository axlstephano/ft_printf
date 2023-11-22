/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcastil <axcastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:41:16 by axcastil          #+#    #+#             */
/*   Updated: 2023/11/22 16:30:57 by axcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

void	*inspect(va_list args, char *letter, int *number)
{
	if (*letter != '\0')			
	{
		if (*letter == 's')
			
		else if (*letter == 'p')
		else if (*letter == 'd')
		else if (*letter == 'i')
		else if (*letter == 'u')
		else if (*letter == 'x')
		else if (*letter == 'X')
		else if	(*letter == '%')
		else
			ft_putchar_print(*letter, *number);
	}
	else
		ft_putchar_print()
}

int	ft_printf(char const *sentence, ...)
{
	va_list	args;
	size_t	j;
	
	if (!sentence)
		return (0);
	j = 0;
	va_start(args, sentence);
	while (*sentence)
	{
		if (*sentence == '%')
		{
			sentence++;
			inspect(args, &(*(sentence + 1)), &j);
		}
		else
			ft_putchar_print(*sentence, &j);
		sentence++;
	}
	va_end(args);
	return (j);
}

int main()
{
	char *example = "holamundo";
	
	ft_printf("hola%mundo");
}