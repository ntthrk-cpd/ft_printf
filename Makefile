# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntthrk-ch <ntthrk-ch@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/14 00:46:09 by ncheepan          #+#    #+#              #
#    Updated: 2023/07/10 15:22:44 by ntthrk-ch        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a
 
INCLUDE := -Iinclude
SRC_DIR := srcs
LIBFT_DIR := libft
BUILD_DIR := build

MKDIR_P = mkdir -p
CC := gcc
CFLAGS := -Wall -Wextra -Werror
AR := ar
ARFLAGS := -csr
RM := rm
RMFLAGS := -rf

SRCS := $(wildcard $(LIBFT_DIR)/*.c $(SRC_DIR)/*.c)
OBJS := $(addprefix $(BUILD_DIR)/, $(patsubst %.c,%.o,$(SRCS)))

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $<

$(BUILD_DIR)/%.o : %.c | $(BUILD_DIR)
	$(MKDIR_P) $(@D)
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDE)

$(BUILD_DIR) :
	@echo "Creating build directory.."
	$(MKDIR_P) $@

all : $(NAME)

clean :
	@echo "Cleaning up..."
	$(RM) $(RMFLAGS) $(BUILD_DIR)

fclean : clean
	@echo "Full cleaning up..."
	$(RM) $(RMFLAGS) $(NAME)

re : fclean all
	@echo "Rebuild done"

norm :
	@echo "############### Norminette ################"
	@norminette -R CheckForbiddenSourceHeader $(shell find -iname *.c)
	@norminette -R CheckDefine $(shell find -iname *.h)
	@echo "###########################################"

.PHONY : all clean fcclean re
