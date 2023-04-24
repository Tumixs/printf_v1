# -*-Makefile-*-
SRC = array-printer.c base_n-converter.c format-printer.c _putchar.c _printf.c
CC = gcc
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format -g
RM = rm -f

$(OBJ): main.h

char: $(OBJ) 0-char_test.c
	$(CC) $(CFLAGS) $(OBJ) 0-char_test.c -o char

int: $(OBJ) test/1-integer_test.c
	$(CC) $(CFLAGS) $(OBJ) test/1-integer_test.c -o int

bin: $(OBJ) test/2-binary_test.c
	$(CC) $(CFLAGS) $(OBJ) test/2-binary_test.c -o bin

uint: $(OBJ) test/3-uint_test.c
	$(CC) $(CFLAGS) $(OBJ) test/3-uint_test.c -o uint

oct: $(OBJ) test/4-oct_test.c
	$(CC) $(CFLAGS) $(OBJ) test/4-oct_test.c -o oct

hex_upper: $(OBJ) test/5-hex_upper_test.c
	$(CC) $(CFLAGS) $(OBJ) test/5-hex_upper_test.c -o hex_upper

hex_lower: $(OBJ) test/6-hex_lower_test.c
	$(CC) $(CFLAGS) $(OBJ) test/6-hex_lower_test.c -o hex_lower

oclean:
	$(RM) ../*.o *.o
cleanall:
	$(RM) ../*.o *.o char int bin oct hex_lower hex_upper
