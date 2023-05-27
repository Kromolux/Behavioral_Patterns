NAME		:=	coffee

OBJ_FOLDER	:=	obj
SRC_FOLDER	:=	src

CC			:=	c++

SRCS		:=	test/main.cpp \
				ABeverage/ABeverage.cpp \
				ABeverage/HouseBlend.cpp \
				ABeverage/DarkRoast.cpp \
				ACondimentDecorator/ACondimentDecorator.cpp \
				ACondimentDecorator/Milk.cpp \
				ACondimentDecorator/Mocha.cpp


OBJS		:=	$(SRCS:%.cpp=$(OBJ_FOLDER)/%.o)

CFLAGS		=	-Wall -Wextra -Werror -std=c++98 -Wfatal-errors -Wconversion
DFLAG		:=	-g -D DEBUG=1

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS): $(OBJ_FOLDER)/%.o: $(SRC_FOLDER)/%.cpp
	@mkdir -p $(@D)
	$(CC) -c $(CFLAGS) $< -o $@

debug:	CFLAGS += $(DFLAG)
debug:	all
		./$(NAME)


clean:
	rm -fr $(OBJ_FOLDER)

fclean: clean
	rm -fr $(NAME) $(NAME).dSYM

re: fclean all


val:
	valgrind --leak-check=full -s ./$(NAME)


.PHONY: clean fclean re val $(NAME)
