# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncheepan <ncheepan@student.42bangkok.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/14 00:46:09 by ncheepan          #+#    #+#              #
#    Updated: 2023/05/14 01:31:55 by ncheepan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC_DIR = srcs
OBJ_DIR = obj
CC : gcc
CFLAGS : -Wall -Wextra -Werror
AR : ar
ARFLAGS : -csr
RM : rm
RMFLAGS : -rf

SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

all = $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $?

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)
	mkdir -p $@

clean :
	$(RM) $(RMFLAGS) $(OBJ_DIR)

fclean : clean
	$(RM) $(RMFLAGS) $(NAME)

re : fclean all

.PHONY : all clean fcclean re
