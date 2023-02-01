# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emilienguelin <emilienguelin@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/19 12:06:08 by eguelin           #+#    #+#              #
#    Updated: 2023/02/01 21:20:33 by emilienguel      ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

#Standard
OUT_DIR		= build/
SRC_DIR		= src/
INC_DIR		= include/
LST_DIR		= list/
INST_DIR	= instruction/
SORT_DIR	= sort/
TOOL_DIR	= tool/

NAME		= push_swap
CC			= cc
CFLAGS		= -Wall -Werror -Wextra -I $(INC_DIR)
RM			= rm -rf
ARC			= ar rcs

#Colors
BLACK	= \033[0;30m
RED		= \033[0;31m
GREEN	= \033[0;32m
YELLOW	= \033[0;33m
BLUE	= \033[0;34m
PURPLE	= \033[0;35m
CYAN	= \033[0;36m
WHITE	= \033[0;37m

#Sentence
COMP_MSG		= "$(GREEN)Compilation $(NAME) $(WHITE)done on $(YELLOW)$(shell date +'%Y-%m-%d %H:%M:%S')$(WHITE)"
CLEAN_MSG		= "$(RED)Cleaning $(NAME) $(WHITE)done on $(YELLOW)$(shell date +'%Y-%m-%d %H:%M:%S')$(WHITE)"
FULL_CLEAN_MSG	= "$(PURPLE)Full cleaning $(NAME) $(WHITE)done on $(YELLOW)$(shell date +'%Y-%m-%d %H:%M:%S')$(WHITE)"

#Sources
FILES		= ft_push_swap
FILES_INST	= ft_swap ft_push ft_rotate ft_reverse_rotate
FILES_SORT	= ft_sort_three ft_sort_five ft_radix
FILES_TOOL	= ft_index ft_convert_argv ft_check_multiple ft_end_stack ft_is_in_order ft_atoi ft_putstr_fd ft_strlen ft_isdigit ft_split
FILES_LST	= ft_lstidelone ft_lsticlear ft_lstinew ft_lstiadd_back ft_lstilast ft_lstisize
FILES_ALL	= $(FILES) \
			$(addprefix $(INST_DIR), $(FILES_INST)) \
			$(addprefix $(TOOL_DIR), $(FILES_TOOL)) \
			$(addprefix $(SORT_DIR), $(FILES_SORT)) \
			$(addprefix $(LST_DIR), $(FILES_LST))
INC_FILES	= ft_push_swap

OBJS	= $(addprefix $(OUT_DIR), $(addsuffix .o, $(FILES_ALL)))
HEADERS	= $(addprefix $(INC_DIR), $(addsuffix .h, $(INC_FILES)))

#Rules

.PHONY: all
all: $(NAME)

$(NAME): $(OUT_DIR) $(OBJS)
	@norminette | awk '$$NF!="OK!" {print "\033[0;31m" $$0 "\033[0m"}'
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo $(COMP_MSG)

$(OUT_DIR)%.o : $(SRC_DIR)%.c $(HEADERS) Makefile
	@$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	@$(RM) $(OUT_DIR)
	@echo $(CLEAN_MSG)

.PHONY: fclean
fclean: clean
	@$(RM) $(NAME)
	@echo $(FULL_CLEAN_MSG)

.PHONY: re
re: fclean all

$(OUT_DIR):
	@mkdir -p $(OUT_DIR)
	@mkdir -p $(OUT_DIR)$(INST_DIR)
	@mkdir -p $(OUT_DIR)$(SORT_DIR)
	@mkdir -p $(OUT_DIR)$(TOOL_DIR)
	@mkdir -p $(OUT_DIR)$(LST_DIR)
