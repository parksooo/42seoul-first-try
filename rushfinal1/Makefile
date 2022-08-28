NAME	=	libft.a
CC		=	gcc
CC_FLAG	=	-Wall -Wextra -Werror
LIB		=	ar rcs
TARGET	=	$(NAME)
SRCS	=	ft_putchar.c ft_strlen.c ft_strcmp.c ft_swap.c ft_putstr.c
OBJECTS	=	$(SRCS:.c=.o)
OBJS	=	ft_putchar.o ft_strlen.o ft_strcmp.o ft_swap.o ft_putstr.o
all		:	$(NAME)
%.o		:	$(SRCS)
	$(CC) $(CC_FLAG) -c $< -o $@
$(NAME)	:	$(OBJS)
	$(LIB) $(NAME) $(OBJS)
