# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/15 09:36:50 by isilva-t          #+#    #+#              #
#    Updated: 2024/05/03 09:50:46 by isilva-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

SOURCES = ft_printf.c \
		  pf_print_str.c \
		  pf_putchar.c \
		  pf_print_format.c \
		  pf_put_nbr_base.c \
		  pf_print_ptr.c

OBJECTS = ${SOURCES:.c=.o}

NAME = libftprintf.a
ARCHIVE = ar -rcs

MSG1 = @echo "________ Compiled Mandatory files!"
MSG2 = @echo "________ Compiled Bonus files!"
MSG3 = @echo "___________ Cleared!"
MSG4 = @echo "_______________ Full Cleared!"

$(NAME):
	${CC} -c ${CFLAGS} $(SOURCES) 
	${ARCHIVE} $(NAME) ${OBJECTS}
	${MSG1}
	
#bonus: $(NAME)
#	${CC} -c ${CFLAGS} $(BONUS) 
#	${ARCHIVE} $(NAME) ${BONUS_OBJECTS}
#	${MSG2}

ma: 
	cc $(SOURCES)
	@echo "\n______Test_Compiled_!\n"
#bo:
#	cc $(BONUS) $(SOURCES)
#	@echo "\n______Bonus_Test_Compiled_!\n"
	
all: ${NAME}

clean:
	@rm -rf ${OBJECTS}
	${MSG3}

fclean: clean
	@rm -rf ${NAME}
	${MSG4}

re: fclean all

.PHONY: all bonus clean fclean re so bo
