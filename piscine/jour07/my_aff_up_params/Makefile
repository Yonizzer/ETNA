##
## Makefile for Makefile in /home/yoann/piscine_v2/FDI-DEVC-008/jour07/poli_y/my_aff_up_params
## 
## Made by POLI Yoann
## Login   <poli_y@etna-alternance.net>
## 
## Started on  Mon Oct 26 10:00:06 2015 POLI Yoann
## Last update Mon Oct 26 10:25:25 2015 POLI Yoann
##

CC =		gcc
NAME =		aff_up
SRC =		main.c \
		my_aff_up_params.c \
		my_aff_params.c \
		my_strupcase.c \
		my_putchar.c \
		my_putstr.c

OBJ =		$(SRC:%.c=%.o)
RM = 		rm -rf

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)
