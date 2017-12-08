start: main.o palindrome.o
	gcc main.o palindrome.o -o palindrome
	objdump -x -s -w -d palindrome > palindrome.dump
	objcopy -O binary palindrome palindrome.bin

main.o: main.c
	gcc -c main.c

palindrome.o: palindrome.c
	gcc -c palindrome.c

clean:
	rm -f palindrome main.o palindrome.o palindrome.dump palindrome.bin

