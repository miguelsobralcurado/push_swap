# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msobral- <msobral-@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/31 14:39:51 by msobral-          #+#    #+#              #
#    Updated: 2026/01/14 13:35:46 by msobral-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ==============================
# VARIABLES
# ==============================

SRC_DIR := srcs/push_swap
BSRC_DIR := srcs/checker
CSRC_DIR := srcs/common

BUILD_DIR := build
BBUILD_DIR := build
CBUILD_DIR := build

SRCS := $(wildcard $(SRC_DIR)/*.c)
BSRCS := $(wildcard $(BSRC_DIR)/*.c)
CSRCS := $(wildcard $(CSRC_DIR)/*.c)

OBJS := $(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)
BOBJS := $(BSRCS:$(BSRC_DIR)/%.c=$(BBUILD_DIR)/%.o)
COBJS := $(CSRCS:$(CSRC_DIR)/%.c=$(CBUILD_DIR)/%.o)

# Debugging
#$(info OBJS = $(OBJS))

# External library
LIB_DIR = libft_printf_gnl
LIB = $(LIB_DIR)/libft_printf_gnl.a

# Tools and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs
INCLUDE = -I ./includes

# Resulting Archive
NAME = push_swap
BONUS = checker

# ==============================
# RULES
# ==============================

# Default Target
all: $(NAME)
#	norm

bonus: $(NAME) $(BONUS)

# Objects
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c includes/push_swap.h
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(BBUILD_DIR)/%.o: $(BSRC_DIR)/%.c includes/push_swap.h
	@mkdir -p $(BBUILD_DIR)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(CBUILD_DIR)/%.o: $(CSRC_DIR)/%.c includes/push_swap.h
	@mkdir -p $(CBUILD_DIR)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJS) $(COBJS) $(LIB)
	$(CC) $(CFLAGS) $^ $(LIB) -o $@

$(BONUS): $(BOBJS) $(COBJS) $(LIB)
	$(CC) $(CFLAGS) $^ $(LIB) -o $@

# Libft_printf library
$(LIB):
	$(MAKE) -C $(LIB_DIR)

# Cleans
clean:
	rm -rf $(BUILD_DIR)
	$(MAKE) -C $(LIB_DIR) $@

fclean: clean
	rm -f $(NAME) $(BONUS)
	$(MAKE) -C $(LIB_DIR) $@
	
re: fclean all

rebonus: fclean bonus

#norm:
#	norminette

.PHONY: all bonus clean fclean re rebonus #norm