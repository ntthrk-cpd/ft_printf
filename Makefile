# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntthrk-ch <ntthrk-ch@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/14 00:46:09 by ncheepan          #+#    #+#              #
#    Updated: 2023/06/29 23:42:15 by ntthrk-ch        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a 
INCLUDE := -I ./include/*.h 
SRC_DIR := ./srcs
BUILD_DIR := ./build

MKDIR_P = mkdir -p
CC := gcc
CFLAGS := -Wall -Wextra -Werror
AR := ar
ARFLAGS := -csr
RM := rm
RMFLAGS := -rf

SRCS := $(wildcard $(SRC_DIR)/*.c)
OBJS := $(addprefix $(BUILD_DIR)/, $(patsubst %.c,%.o,$(SRCS)))

$(NAME) : $(BUILD_DIR) $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

$(BUILD_DIR)/%.o : $(SRC_DIR)/%.c | $(BUILD_DIR)
	@$(MKDIR_P) $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDE) -o $@

$(BUILD_DIR) :
	@$(MKDIR_P) $(BUILD_DIR)

all : $(NAME)

clean :
	$(RM) $(RMFLAGS) $(BUILD_DIR)

fclean : clean
	$(RM) $(RMFLAGS) $(NAME)

re : fclean all

norm :
	@echo "Norminette:"
	@norminette -R CheckForbiddenSourceHeader *.c
	@norminette -R CheckDefine *.h

.PHONY : all clean fcclean re