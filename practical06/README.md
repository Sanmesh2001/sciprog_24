# Practical06

Created two files main.c and mm.c in this 6th practical to execute matrix multiplication of matrices with different sizes. 
The mm.c file contains the matrix multiplication fucntion.
The makefile helps to automate the compilation process in C. 

## Compile:

## 1. main function:

```bash
gcc main.c mm.c -o matmult

```
# Execute:

```bash
./matmult

The Matrix A is:
  0  1  2
  1  2  3
  2  3  4
  3  4  5
  4  5  6
The Matrix B is:
  0 -1 -2 -3
  1  0 -1 -2
  2  1  0 -1
The Matrix C is:
  5       2      -1      -4
  8       2      -4     -10
 11       2      -7     -16
 14       2     -10     -22
 17       2     -13     -28

```
## 2. MakeFile:

```bash
CC = gcc # C Compiler
CCFLAGS = -O3
LDFLAGS = -lm

all: mmc

mmc: main.o mm.o
	$(CC) -o $@ $^ $(LDFLAGS)

mm.o: mm.c
	$(CC) -c $(CCFLAGS) $<

main.o: main.c
	$(CC) -c $(CCFLAGS) $<

clean:
	rm *.o 

```
* This makefile helps with the compilation process of the c program. Whenever any changes are done, we just need to type make and all the requied files will be executed which are specified in makefile.
* "make clean" helps to clean all the .o files if needed.   
