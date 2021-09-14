# Compilers use flags to control what options are used to compile the C source code. Commonly called CFLAGS
#  - The compiler is pretty smart and can warn you of various things. Use "-Wall -Wextra" to enable them
#  - We'll be using the 2011 version of C with GCC specific extensions (needed later in the course). Use "-std=gnu11"
#  - The unit test framework will be using is called "unity." We need to find where the header file is, so tell the
#  compiler that it's in ../unity
CFLAGS:= -Wall -Wextra -std=gnu11 -I../unity

# Linkers also use flags to control the options used. Commonly called LDFLAGS
LDFLAGS:= -Wall -Wextra -std=gnu11

# The list of programs this Makefile will build
PROGS:= test_find_greater test_array_averages

# This line tells what to do when we type "make":
# go to lines test_two_averages, test_array_averages, test_array_averages and do what THEY need to do
all: $(PROGS)

# This line tells what to do when we type "make clean": removes all .o files and the list of programs in PROGS
clean:
	$(RM) *.o $(PROGS)

# This is the line that will compile and build test cases for Level 1 Part A
# "test_find_greater" is the name of the file that's generated
# "test_find_greater.o, stats.o, and ../unity/unity.o" is the list of files to compile
# The $(CC) line tells Make what to do
test_find_greater: test_find_greater.o stats.o ../unity/unity.o
	$(CC) ${LDFLAGS} $^ -o $@

# This is the line that will compile and build test cases for Level 1 Part B
test_array_averages: test_array_averages.o stats.o ../unity/unity.o
	$(CC) ${CFLAGS} ${LDFLAGS} $^ -o $@

