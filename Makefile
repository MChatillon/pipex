SRCS		=	$(SRCS_DIR)/pipex.c \
				$(SRCS_DIR)/close_prog.c \

SRCS_DIR	= srcs

OBJS		= $(subst $(SRCS_DIR), $(OBJS_DIR), $(SRCS:.c=.o))

OBJS_DIR	= objs

FT_PRINTF	= ft_printf/libftprintf.a
CC			= cc
CFLAGS		= -g -Wall -Werror -Wextra -fsanitize=address
RM			= rm -fr
NAME		= pipex

all: $(NAME)

$(FT_PRINTF):
	make -C ft_printf

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
	mkdir -p $(OBJS_DIR)
	$(CC) $(CFLAGS) -I headers -I ft_printf/ -c $< -o $@

$(NAME):	$(FT_PRINTF) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -Lft_printf -lftprintf -o $(NAME)

clean:
			$(RM)	$(OBJS)
			make clean -C -ft_printf

fclean:	clean
			$(RM)	$(NAME) $(OBJS_DIR)
			make fclean -C ft_printf

re:	fclean all

.PHONY: fclean all re clean