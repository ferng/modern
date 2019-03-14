CC = gcc

CHECK_FLAGS = -std=gnu89 -fdiagnostics-show-location=once -fmax-errors=10 -Werror -Wall -Wextra -Wchkp -Wdouble-promotion -Wswitch-default -Walloc-zero -Wfloat-equal -Wdeclaration-after-statement -Wshadow -Wunsafe-loop-optimizations -Wpointer-arith -Wpointer-compare -Wundef -Wbad-function-cast -Wc90-c99-compat -Wcast-qual -Wcast-align -Wwrite-strings -Wconversion -Wjump-misses-init -Wlogical-op -Wstrict-prototypes -Wold-style-definition -Wmissing-prototypes -Wmissing-declarations -Wpacked -Wpadded -Wredundant-decls -Wnested-externs -Winline -Wno-pointer-to-int-cast -Winvalid-pch -Wpedantic -Wformat-security 
BUILD_FLAGS = -I.
DEBUG_FLAGS = -g
TESTING_FLAGS = --coverage -ftest-coverage 
CFLAGS = $(CHECK_FLAGS) $(BUILD_FLAGS) $(DEBUG_FLAGS) $(TESTING_FLAGS)

DEPS = dweight.h
OBJ = main.o dweightfunc.o

%.o: %.c $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)

dweight: $(OBJ)
		$(CC) $^ $(CFLAGS)


PHONY: clean
clean:
	rm -rf *.o
