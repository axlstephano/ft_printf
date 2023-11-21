/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcastil <axcastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:41:16 by axcastil          #+#    #+#             */
/*   Updated: 2023/11/21 13:11:31 by axcastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <unistd.h>

void	*inspect(char *letter)
{
	letter = 'b';
/*		if (*letter == 'c')
			
		else if (*letter == 's')
		else if (*letter == 'p')
		else if (*letter == 'd')
		else if (*letter == 'i')
		else if (*letter == 'u')
		else if (*letter == 'x')
		else if (*letter == 'X')
		else (*letter == '%')	*/
}

int	ft_printf(char const *sentence)
{
/*	va_list args; 
	va_start(args, sentence);*/
	while (*sentence)
	{
		if (*sentence == '%')
		{
			inspect();
			sentence++;
		}
		else
			write(1, sentence, 1);
		sentence++;
	}
/*	va_end(args);
*/	return (1);
}

int main()
{
	char *example = "holamundo";
	
	ft_printf("hola%mundo");
}