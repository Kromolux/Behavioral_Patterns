NAME		:=	weather

OBJ_FOLDER	:=	obj
SRC_FOLDER	:=	src

CC			:=	g++

SRCS		:=	test/main.cpp \
				ISubject/WeatherData.cpp \
				IObserver/CurrentConditionsDisplay.cpp \
				IObserver/ForecastDisplay.cpp \
				IObserver/StatisticsDisplay.cpp \
				IObserver/HeatIndexDisplay.cpp

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
