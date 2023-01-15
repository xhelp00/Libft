# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phelebra <xhelp00@gmail.com>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/13 09:54:20 by phelebra          #+#    #+#              #
#    Updated: 2023/01/15 15:58:12 by phelebra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 		:= 	clang
FLAGS 	:= 	-Wall -Wextra -Werror
RM		:=	rm -f

NAME	:=	libft.a

SRCS	:= 	ft_isascii.c ft_isprint.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
				ft_tolower.c ft_toupper.c ft_strlen.c ft_memset.c ft_memchr.c \
				ft_atoi.c ft_memcmp.c ft_strncmp.c ft_memcpy.c ft_memmove.c \
				ft_bzero.c ft_strnstr.c ft_strchr.c \
			# ft_strlcpy.c ft_strlcat.c ft_strrchr.c \
			ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c  \
			ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c 	 \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 	 \
			ft_memccpy.c

#BONUS_S	:=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c 		\
			ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c 	\
			ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS	:=	$(SRCS:.c=.o)
#BONUS_O :=	$(BONUS_S:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS) $(BONUS_O)
			ar -rcs $(NAME) $(OBJS)

#bonus:		$(NAME) $(BONUS_O)
#			ar -rcs $(NAME) $(BONUS_O)

.c.o:
			$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

clean:
			$(RM) $(OBJS) $(BONUS_O)

fclean: 	clean
			$(RM) $(NAME)

re:			fclean all

#rebonus:	fclean bonus

.PHONY: 	all clean fclean re #bonus rebonus
