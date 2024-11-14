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
  0  1  2  3  4
  1  2  3  4  5
  2  3  4  5  6
  3  4  5  6  7
The Matrix B is:
  1  0 -1 -2
  2  1  0 -1
  3  2  1  0
  4  3  2  1
  5  4  3  2
The Matrix C is:
 40      30      20      10
 55      40      25      10
 70      50      30      10
 85      60      35      10

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
