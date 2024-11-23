# Practical08

This is the 8th practical where we code and execute the iterative and recursive version of Euclid's alorithm to calculate teh Greateest Common Divsior(GCD) of two positive integers. In Euclid's algorithm we find gcd by repeatly dividing and taking the remainder.

* In Iterative method the function calculates the GCD by repeatedly swapping the value using the temporary variable and taking the reaminder until it is zero.

* In Recursive method the function calculates the GCD by recursively calling itself, and passing the remainder as the new divisor, until the divisor is 0.

## Compile:

## 1. GCD with user input:

```bash
gcc -o gcd gcd.c

```
# Output:

```bash
./gcd

please enter two positive integers:
12
15
Iterative_gcd(12, 15)=3
Recursive_gcd(12, 15)=3
```
## 2. GCD with 2 random integers:

* In this code instead of taking the two positive integer from the user, instead we use 2 random integers.

```bash
gcc -o gcd_random gcd_random.c

```
# Execute:

```bash
./gcd_random

Iterative_gcd(4. 18)=2
Recursive_gcd(4. 18)=2
```
