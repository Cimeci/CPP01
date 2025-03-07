CPP = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Zombie

FILE = main.cpp\
		randomChump.cpp\
		newZombie.cpp\
		Zombie.cpp\

all: $(NAME)

$(NAME) :
	$(CPP) $(CFLAGS) -o $(NAME) $(FILE)

fclean:
	rm -rf $(NAME)

re: fclean all