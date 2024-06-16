# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: axcastil <axcastil@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/26 19:47:07 by axcastil          #+#    #+#              #
#    Updated: 2024/06/16 17:04:15 by axcastil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	$(wildcard sources/*.c)
OBJS		=	$(SRCS:.c=.o)

NAME 			= ft_printf.a

CC			=	gcc
RM			=	rm -f
CFLAGS		=	-Wall -Wextra -Werror

all:			$(NAME)

$(NAME):		$(OBJS)
				@ar rcs $(NAME) $(OBJS)

clean:
				@$(RM) $(OBJS) 

fclean:			clean
				@$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re