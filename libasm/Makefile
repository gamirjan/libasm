NAME = libasm.a
FLAGS = -Wall -Wextra -Werror
SRC = ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s ft_strdup.s
OBJ = $(SRC:%.s=%.o)
BLUE := $(shell tput -Txterm setaf 6)

%.o: %.s
	@nasm -f macho64 $< -o $@

all: $(NAME)

$(NAME) : $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@$(CC) main.c to_c.c $(NAME) $(FLAGS)
	@echo ${BLUE}"Libasm is completed"

clean:
	@$(RM) $(OBJ) $(OBJ_BONUS)
	@echo ${BLUE}"Cleared"
	
fclean: clean
	@$(RM) $(NAME) a.out
	@echo ${BLUE}"Libasm is cleared"

re: fclean  test

.PHONY: all test clean fclean re 