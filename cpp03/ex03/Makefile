# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/22 11:12:31 by strodrig          #+#    #+#              #
#    Updated: 2025/05/22 11:12:31 by strodrig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= DiamondTrap

CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98 -I.
RM			= rm -rf

OBJDIR		= .objFiles
FILES		= main ClapTrap FragTrap DiamondTrap ScavTrap
SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= ClapTrap.hpp FragTrap.hpp DiamondTrap.hpp ScavTrap.hpp

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(OBJ) -o $(NAME)
	@printf "$(GREEN)- Executable ready.\n$(RESET)"

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(OBJDIR)
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJDIR)
	@printf "$(YELLOW)    - Object files removed.$(RESET)\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

re: fclean all
