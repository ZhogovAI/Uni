all: array.o print_arr.o read_from_file.o change_local_mins_to_min.o
		gcc array.o print_arr.o read_from_file.o change_local_mins_to_min.o && rm *.o && ./a.out

array.o: array.c
		gcc -c array.c

print_arr.o: print_arr.c
		gcc -c print_arr.c

read_from_file.o: read_from_file.c
		gcc -c read_from_file.c

change_local_mins_to_min.o: change_local_mins_to_min.c
		gcc -c change_local_mins_to_min.c