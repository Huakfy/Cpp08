# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/27 11:13:02 by mjourno           #+#    #+#              #
#    Updated: 2023/09/27 12:20:03 by mjourno          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex01.exe
#Compiler
CC		=	c++
FLAG	=	-Wall -Wextra -Werror -std=c++98
#Source
FILES	=	main Span
FFORMAT	=	cpp
SRC_DIR	=
OBJ_DIR	=	obj/
#Header
HFILES	=	Span
HFORMAT	=	hpp
HEADER	=	$(addsuffix .$(HFORMAT), $(HFILES))

SRCS	=	$(addprefix $(SRC_DIR), $(addsuffix .$(FFORMAT), $(FILES)))
OBJS	=	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(FILES)))

OBJF	=	.cache_exits

$(OBJF) :
	@mkdir -p $(OBJ_DIR)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAG) $(OBJS) -o $(NAME)
	@echo "$(GREEN)Compiled!$(DEF_COLOR)"

$(OBJ_DIR)%.o : %.$(FFORMAT) $(HEADER) Makefile | $(OBJF)
	$(CC) $(FLAG) -c $< -o $@

clean :
	@rm -rf $(OBJ_DIR)
	@rm -rf $(OBJF)

fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re

# Color
DEF_COLOR	= \033[0;39m
GREEN		= \033[0;92m
