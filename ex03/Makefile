
NAME = materia 

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -g3
RM	= rm -rf

HEADER = AMateria.hpp \
	Character.hpp \
	Cure.hpp \
	Ice.hpp \
	MateriaSource.hpp \
	ICharacter.hpp \
	IMateriaSource.hpp \

SRC = main.cpp \
	AMateria.cpp \
	Character.cpp \
	Cure.cpp \
	Ice.cpp \
	MateriaSource.cpp \


OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	${CC} ${CFLAGS} -I HEADER -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean re