# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntthrk-ch <ntthrk-ch@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/14 00:46:09 by ncheepan          #+#    #+#              #
#    Updated: 2023/06/24 17:08:24 by ntthrk-ch        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a , libft.a
INCLUDE = include -I. 
SRC_DIR = srcs
LIBFT_DIR = libft
BUILD_DIR = build

MKDIR_P = mkdir -p
CC : gcc
CFLAGS : -Wall -Wextra -Werror
AR : ar
ARFLAGS : -csr
RM : rm
RMFLAGS : -rf

$(NAME) : $(BUILD_DIR) $(OBJS)
	$(AR) $(ARFLAGS) $(BUILD_DIR) $(OBJS)

BUILDS = $(wildcard ./[$(SRC_DIR),$(LIBFT_DIR)]/*.c)
OBJS = $(addprefix $(BUILD_DIR)/,$(patsubst %.c,%.o,$(BUILDS)))
	
%(BUILD_DIR)/%.o : src/%.c
		$(MKDIR_P) $(@D)
        $(CC) $(CFLAGS) -c $< -o $@

all :$(NAME)

clean :
	$(RM) $(RMFLAGS) $(BUILD_DIR)

fclean : clean
	$(RM) $(RMFLAGS) $(NAME)

re : fclean all

.PHONY : all clean fcclean re