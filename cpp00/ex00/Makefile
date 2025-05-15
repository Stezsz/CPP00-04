# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/12 17:49:21 by strodrig          #+#    #+#              #
#    Updated: 2025/05/12 17:49:21 by strodrig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

#colors
GREEN = \033[0;32m
YELLOW = \033[0;33m
GRAY = \033[0;37m
RESET = \033[0m
CURSIVE = \033[3m

.PHONY: all clean RESET

all: $(NAME)

$(NAME):
	@printf "$(CURSIVE)$(GRAY) 	- Compiling $(NAME)... $(RESET)\n"
	@ $(CC) $(FLAGS) megaphone.cpp -o $(NAME)
	@printf "$(GREEN)    - Executable ready.\n$(RESET)"

clean:
	@$(RM) $(NAME)
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

fclean:
	@$(RM) $(NAME)
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

re: clean all
