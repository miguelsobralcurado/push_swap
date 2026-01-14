# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msobral- <msobral-@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/31 14:39:51 by msobral-          #+#    #+#              #
#    Updated: 2026/01/14 11:10:04 by msobral-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ==============================
# VARIABLES
# ==============================

BUILD_DIR := ./build

SRCS = 	\
	./srcs/ft_countnbr_base.c\
	./srcs/ft_countui_base.c\
	./srcs/ft_countul_base.c\
	./srcs/ft_flag_width_count.c\
	./srcs/ft_initialize_values.c\
	./srcs/ft_left_align.c\
	./srcs/ft_print_c.c\
	./srcs/ft_print_i.c\
	./srcs/ft_print_lowerx.c\
	./srcs/ft_print_p.c\
	./srcs/ft_print_s.c\
	./srcs/ft_print_u.c\
	./srcs/ft_print_upperx.c\
	./srcs/ft_printf.c\
	./srcs/ft_put_precision.c\
	./srcs/ft_putchar_i.c\
	./srcs/ft_putnbr_i.c\
	./srcs/ft_putnchar_i.c\
	./srcs/ft_putnstr_i.c\
	./srcs/ft_putstr_i.c\
	./srcs/ft_putui_base_i.c\
	./srcs/ft_putui_i.c\
	./srcs/ft_putul_base_i.c\
	./srcs/ft_roll_back.c\
	./srcs/ft_right_align.c\
	./srcs/ft_update_values.c\
	./srcs/ft_isalpha.c\
	./srcs/ft_isdigit.c\
	./srcs/ft_isalnum.c\
	./srcs/ft_isascii.c\
	./srcs/ft_isprint.c\
	./srcs/ft_isspace.c\
	./srcs/ft_strlen.c\
	./srcs/ft_memset.c\
	./srcs/ft_bzero.c\
	./srcs/ft_memcpy.c\
	./srcs/ft_memmove.c\
	./srcs/ft_strlcpy.c\
	./srcs/ft_strlcat.c\
	./srcs/ft_toupper.c\
	./srcs/ft_tolower.c\
	./srcs/ft_strchr.c\
	./srcs/ft_strrchr.c\
	./srcs/ft_strnchr.c\
	./srcs/ft_strncmp.c\
	./srcs/ft_memchr.c\
	./srcs/ft_memcmp.c\
	./srcs/ft_strnstr.c\
	./srcs/ft_atoi.c\
	./srcs/ft_atoi_base.c\
	./srcs/ft_calloc.c\
	./srcs/ft_strdup.c\
	./srcs/ft_substr.c\
	./srcs/ft_strjoin.c\
	./srcs/ft_strtrim.c\
	./srcs/ft_split.c\
	./srcs/ft_itoa.c\
	./srcs/ft_strmapi.c\
	./srcs/ft_striteri.c\
	./srcs/ft_putchar_fd.c\
	./srcs/ft_putstr_fd.c\
	./srcs/ft_putendl_fd.c\
	./srcs/ft_putnbr_fd.c\
	./srcs/ft_lstnew_bonus.c\
	./srcs/ft_lstadd_front_bonus.c\
	./srcs/ft_lstsize_bonus.c\
	./srcs/ft_lstlast_bonus.c\
	./srcs/ft_lstadd_back_bonus.c\
	./srcs/ft_lstdelone_bonus.c\
	./srcs/ft_lstclear_bonus.c\
	./srcs/ft_lstiter_bonus.c\
	./srcs/ft_lstmap_bonus.c\
	./srcs/ft_floor.c\
	./srcs/ft_sqrt.c\
	./srcs/ft_freeall.c\
	./srcs/get_next_line_utils.c\
	./srcs/get_next_line.c

# Object files (generated from sources)
OBJS := $(patsubst %.c,$(BUILD_DIR)/%.o,$(notdir $(SRCS)))

# Debugging
#$(info OBJS = $(OBJS))

# Tools and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs
INCLUDE = -I ./includes

# Archive
NAME = libft_printf_gnl.a

# ==============================
# RULES
# ==============================

# Default Target
all: $(NAME)
#	norm

# Objects
$(BUILD_DIR)/%.o: ./srcs/%.c ./includes/libft_printf.h
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

# Cleans
clean:
	rm -rf $(BUILD_DIR)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

#norm:
#	norminette

.PHONY: all bonus clean fclean re #norm