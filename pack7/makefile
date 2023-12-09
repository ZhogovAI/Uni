all: bit_operations.o bit1.o
		gcc bit_operations.o bit1.o && rm *.o && ./a.out

bit_operations.o: bit_operations.c
		gcc -c bit_operations.c

bit1.o: bit1.c
		gcc -c bit1.c
