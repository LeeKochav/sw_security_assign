CC=gcc
FLAGS = 
FLAGS1= -Wall -g -fsanitize=address
FLAGS2= -Wall -g -fsanitize=float-divide-by-zero
FLAGS3= -fsanitize=undefined

 all: program 

program: program.c 
	$(CC) $(FLAGS) -o program program.c 

program_option_address: program.c 
	$(CC) $(FLAGS1) -o program program.c 

program_option_float_divide_by_zero: program.c
	$(CC) $(FLAGS2) -o program program.c 

program_option_undefined: program.c 
	$(CC) $(FLAGS3) -o program program.c 

.PHONY: clean all

clean:
	rm -f *.o  program 


	