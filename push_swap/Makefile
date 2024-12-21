CC = cc 

CFLAGS = -Wall -Wextra -Werror

PWSRCS =push_swap_dir/main.c push_swap_dir/push.c push_swap_dir/find_pos.c \
         push_swap_dir/error_handle.c push_swap_dir/utils.c push_swap_dir/rotate_operation.c \
         push_swap_dir/swap_operation.c push_swap_dir/create_stack.c push_swap_dir/reverse.c \
         push_swap_dir/sort.c push_swap_dir/radix.c push_swap_dir/give_index.c

PWOBJ = $(PWSRCS:.c=.o)

LIBFT_DIR = libft


LIBFT_A = libft/libft.a

NAME = push_swap



all:$(LIBFT_A) $(NAME)

$(NAME) : $(PWOBJ)
	$(CC) $(CFLAGS) -o $@ $^ -L $(LIBFT_DIR) -lft 

$(LIBFT_A) : 
	make -C $(LIBFT_DIR)
clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	rm -rf $(PWOBJ)

fclean : clean
	$(MAKE) fclean -C  $(LIBFT_DIR)
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean clean re
