
NAME	=	libftprintf.a

SRCS	=	ft_printf.c ft_hexa_len.c ft_pointer.c \
			ft_putnbr_base.c ft_putnbr_len.c ft_putnbr_printf.c ft_putnbr_u.c \
			ft_putstr_printf.c ft_putnbr_base_ul.c\

OBJS	=	$(SRCS:.c=.o)

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra

RM		=	rm -f

LIBFT	= 	libft.a
LDIR	=	libft/


$(NAME): $(OBJS) $(LDIR)$(LIBFT)
	cp $(LDIR)$(LIBFT) $(NAME)
	ar -rcs $(NAME) $(OBJS)

all: $(LDIR)$(LIBFT) $(NAME)


$(LDIR)$(LIBFT):
	$(MAKE) -C $(LDIR)

clean:
	$(RM) $(OBJS)
	$(RM) $(LDIR)*.o

fclean: clean
	$(RM) $(NAME)
	$(RM) $(LDIR)$(LIBFT)

re: fclean all
