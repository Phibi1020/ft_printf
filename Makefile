NAME = libftprintf.a

SRCFILE = ft_printf.c \
ft_convert.c \
ft_decimal.c \
ft_hex_string.c \
ft_nbr_hex.c \
ft_percent.c \
ft_single_char \
ft_string.c \
ft_unsigned_dec.c

OBJFILE = $(SRCFILE:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJFILE)
	ar rcs $@@ $^
	
$(OBJFILE): $(SRCFILE)
	$(CC) -c $(CFLAGS) $^

clean:
	rm -f $(OBJFILE)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all ckean fclean re