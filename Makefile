
NAME = libftprintf.a

CC = cc
INC = -I.
FLAGS = -Wall -Wextra -Werror

LIBFT = libft/libft.a
LIBFT_DIR = libft

SRCS = \
	srcs/put_hexa_p.c \
	srcs/direct_print_functions.c \
	srcs/ft_printf.c

OBJS = ${SRCS:.c=.o}

all: ${NAME}

${LIBFT}:
	@make bonus -C ${LIBFT_DIR}

${NAME}: ${LIBFT} ${OBJS}
	@cp ${LIBFT} ${NAME}
	@ar -rcs ${NAME} ${OBJS}

%.o: %.c
	${CC} ${FLAGS} ${INC} -c $< -o $@

clean:
	@make clean -C ${LIBFT_DIR}
	rm -f ${OBJS}

fclean: clean
	@make fclean -C ${LIBFT_DIR}
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
