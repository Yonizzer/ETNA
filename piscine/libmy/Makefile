##
## Makefile for Makefile in /home/poli_y/piscine/DEVC/poli_y/libmy_02
## 
## Made by POLI Yoann
## Login   <poli_y@etna-alternance.net>
## 
## Started on  Tue Oct 27 15:48:15 2015 POLI Yoann
## Last update Tue Oct 27 15:48:17 2015 POLI Yoann
##

CC =		gcc
NAME_LIB =	libmy.a
SRC =		my_putchar.c \
		my_isneg.c \
		my_put_nbr.c \
		my_swap.c \
		my_putstr.c \
		my_strlen.c \
		my_getnbr.c \
		my_strcpy.c \
		my_strncpy.c \
		my_strcmp.c \
		my_strncmp.c \
		my_strcat.c \
		my_strncat.c \
		my_strstr.c \
		my_strdup.c \
		my_str_to_wordtab.c \
		c_char.c \
		c_word.c

OBJ =		$(SRC:%.c=%.o)
RM = 		rm -rf

$(NAME_LIB):	$(OBJ)
		ar rc $(NAME_LIB) $(OBJ)

all:	$(NAME_LIB)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME_LIB)

re:	fclean all
