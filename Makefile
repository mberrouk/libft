# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 21:53:38 by mberrouk          #+#    #+#              #
#    Updated: 2022/11/04 20:43:17 by mberrouk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a

SRC_B	= 	ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
 			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c \
			ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c 

SRC_M	=	ft_memset.c ft_memchr.c ft_memmove.c ft_memcmp.c ft_memcpy.c ft_bzero.c ft_atoi.c ft_strlen.c ft_strlcpy.c ft_strchr.c	\
			ft_strrchr.c ft_strnstr.c ft_strnstr.c ft_strncmp.c	ft_atoi.c ft_isalnum.c ft_strlcat.c	ft_isdigit.c ft_isalpha.c ft_isascii.c ft_isprint.c \
			ft_tolower.c ft_toupper.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c 	\
			ft_strtrim.c ft_split.c	ft_itoa.c ft_strmapi.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putchar_fd.c ft_striteri.c 


OBJS_M = $(SRC_M:.c=.o)

OBJS_B = $(SRC_B:.c=.o)

FLAGS = -Wall -Wextra -Werror

AR = ar rsc

all : $(NAME) 

$(NAME) : $(OBJS_M)
	$(AR) $(NAME) $(OBJS_M)

%.o : %.c
	cc $(FLAGS) -c $^ -o $@
	$(AR) $(NAME) $@ 
	
bonus : $(OBJS_B) $(NAME) 

clean :
	rm -rf *.o

fclean : clean
	rm -rf *.a

re : fclean all 