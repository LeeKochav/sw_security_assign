CC=gcc
FLAGS_PROG1 = -Wall -g 
FLAGS_PROG1_OPT1= -Wall -g -fsanitize=address
FLAGS_PROG1_OPT2= -Wall -g -fsanitize=float-divide-by-zero
FLAGS_PROG1_OPT3= -fsanitize=undefined
FLAGS_PROG2 = -fno-stack-protector
FLAGS_PROG2_OPT1 = -fstack-protector
FLAGS_PROG2_OPT2 = -fstack-protector-strong
FLAGS_PROG2_OPT3 = -fstack-protector-all   

program: program.c 
	$(CC) $(FLAGS_PROG1) -o program program.c 

program_option_address: program.c 
	$(CC) $(FLAGS_PROG1_OPT1) -o program program.c 

program_option_float_divide_by_zero: program.c
	$(CC) $(FLAGS_PROG1_OPT2) -o program program.c 

program_option_undefined: program.c 
	$(CC) $(FLAGS_PROG1_OPT3) -o program program.c 

program2: program2.c
	$(CC) $(FLAGS_PROG2) -w -o program2 program2.c 

program2_stack_protector: program2.c
	$(CC) $(FLAGS_PROG2_OPT1) -w -o program2 program2.c 

program2_stack_protector_strong: program2.c
	$(CC) $(FLAGS_PROG2_OPT2) -w -o program2 program2.c 

program2_stack_protector_all: program2.c
	$(CC) $(FLAGS_PROG2_OPT3) -w -o program2 program2.c 

.PHONY: clean all

clean:
	rm -f *.o  program program2


	