# -*-Makefile-*-
SRC = ../array-printer.c ../base_n-converter.c ../format-printer.c ../_putchar.c ../_printf.c
CC = gcc
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format -g
RM = rm -f

$(OBJ): ../main.h

0: $(OBJ) 0-char.c
	$(CC) $(CFLAGS) $(OBJ) 0-char.c -o 0-char

1: $(OBJ) 1-integer.c
	$(CC) $(CFLAGS) $(OBJ) 1-integer.c -o 1-integer

2: $(OBJ) 2-binary.c
	$(CC) $(CFLAGS) $(OBJ) 2-binary.c -o 2-binary


clean-obj:
	$(RM) ../*.o *.o
clean-0:
	$(RM) 0-char 0-char.o
clean-1:
	$(RM) 1-integer 1-integer.o
clean-2:
	$(RM) 2-binary 2-binary.o
