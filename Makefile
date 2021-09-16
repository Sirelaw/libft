# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oipadeol <oipadeol@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/13 19:02:48 by oipadeol          #+#    #+#              #
#    Updated: 2021/09/16 22:10:50 by oipadeol         ###   ########.fr        #
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
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
		ft_lstmap.c


FLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC)
	
exec:
	gcc -l -o libft.a *.o

bonus:
	gcc $(FLAGS) -o $(NAME) $(BONUS)
	
clean:
	rm -f *.o
	
lib: all
	ar cr libft.a *.o

fclean: clean
	rm -f $(NAME)
	
re: fclean all




# I need to make a makefile.
# First I need to call gcc whenever I want to compile  a source file.
# Variables are always in allCAPS
# TEXT = "42 is for the braves"

# rule_a:
# 	echo $(TEXT)
