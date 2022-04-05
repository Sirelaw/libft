# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oipadeol <oipadeol@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/13 19:02:48 by oipadeol          #+#    #+#              #
#    Updated: 2022/04/05 16:42:02 by oipadeol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# # _*_ MakeFile _*_

NAME = libft.a

SRC = 	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalpha.c ft_isalnum.c ft_isascii.c\
		ft_isdigit.c ft_isascii.c ft_strlen.c ft_memset.c ft_memcpy.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c\
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
		ft_strdup.c ft_substr.c ft_strjoin.c ft_isprint.c ft_memmove.c \
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
		ft_strcmp.c ft_isspace.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
		ft_lstmap.c ft_lstelem.c

FLAGS = -Wall -Wextra -Werror

%.o: %.c
	$(CC) $< $(FLAGS) -c

OBJS = $(SRC:.c=.o)

B_OBJS = $(BONUS:.c=.o)

$(NAME): $(OBJS) libft.h
	ar -r $(NAME) $(OBJS)

all: $(NAME)

bonus: $(B_OBJS) $(NAME)
	ar -r $(NAME) $(B_OBJS)
	
clean:
	rm -f $(OBJS)
	rm -f $(B_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

