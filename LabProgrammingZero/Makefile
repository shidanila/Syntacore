SRC = main.c palindrome.c
GCC = gcc
ODUMP = objdump
OCOPY = objcopy
CFLAGS = -c
OBJ = $(SRC:.c=.o)

start: $(OBJ)
	$(GCC) $(OBJ) -o palindrome
	$(ODUMP) -x -s -w -d palindrome > palindrome.dump
	$(OCOPY) -O binary palindrome palindrome.bin

main.o: main.c
	$(GCC) $(CFLAGS) main.c

palindrome.o: palindrome.c
	$(GCC) $(CFLAGS) palindrome.c

clean:
	rm -f palindrome $(OBJ) palindrome.dump palindrome.bin

