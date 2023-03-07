NAME	:=	ducks

CC		:=	c++

SRCS	:=	main.cpp \
			ADuck.cpp \
			MallardDuck.cpp \
			FlyWithWings.cpp \
			FlyNoWay.cpp \
			MuteQuack.cpp \
			Quack.cpp \
			Squeak.cpp

OBJS	:=	$(SRCS:%.cpp=%.o)

CFLAGS	=	-Wall -Wextra -Werror -std=c++98
DFLAG	:=	-g -D DEBUG=1

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS): %.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@

debug: CFLAGS += $(DFLAG)
debug: re
	./$(NAME)

clean:
	rm -fr $(OBJS)

fclean: clean
	rm -fr $(NAME) $(NAME).dSYM

re: fclean all

val:
	valgrind --leak-check=full -s ./$(NAME)

.PHONY: clean fclean re val ducks
