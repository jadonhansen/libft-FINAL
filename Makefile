NAME = libft.a
OBJECTS = *.o
SRC = *.c
FLAGS = -Wall -Werror -Wextra
OPTIONS = -c -I.

all: $(NAME)

$(NAME): 
	gcc $(FLAGS) $(SRC) $(OPTIONS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)
so:
	gcc -c ft_*.c -Wall -Wextra -Werror
	gcc -shared -o libft.so -fPIC ft*.o
	rm *.o

clean: 
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
