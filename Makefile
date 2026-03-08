NAME	= push_swap

CC		= cc
CFLAGS	= -Wall -Wextra -Werror -I.

SRCS	= main.c \
		  src/push_swap_utils.c \
		  src/push_swap_init.c \
		  src/push_swap_form_ctrl.c \
		  src/push_swap_push.c \
		  src/push_swap_swap.c \
		  src/push_swap_rotate.c \
		  src/push_swap_reverse_rotate.c \
		  src/push_swap_lstclear.c

OBJS	= $(SRCS:.c=.o)

LIBFT	= libft/libft.a

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C libft

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make -C libft clean
	rm -f $(OBJS)

fclean: clean
	make -C libft fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
