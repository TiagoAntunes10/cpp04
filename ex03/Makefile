LIB = ./Include
PRE = ./

SOURCE = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp \
		 MateriaSource.cpp

SOURCES = ${addprefix $(PRE), $(SOURCE)}

NAME = interface

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -I $(LIB) -c $< -o $@

clean: 
	rm -f $(OBJ)
        
fclean: clean
	rm -f $(NAME)

re: fclean all

valgrind:
	valgrind ./$(NAME)

.PHONY: all clean fclean re
