# 0x0A. C - malloc, free

**What you should learn from this project**

    At the end of this project you are expected to be able to explain to anyone, without the help of Google:

* What is the difference between automatic and dynamic allocation
* What is malloc and free and how to use them
* Why and when use malloc
* How to use valgrind to check for memory leak

## Exercises

[0-create_array.c](./0-create_array.c)
```
Write a function that creates an array of chars, and initializes it with a specific char.
```
* Prototype: char *create_array(unsigned int size, char c);
* Returns NULL if size = 0
* Returns a pointer to the array, or NULL if it fails

[1-strdup.c](./1-strdup.c)
```
Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
FYI: The standard library provides a similar function: strdup. Run man strdup to learn more.
```
* Prototype: char *_strdup(char *str);
* The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
* Returns NULL if str = NULL
* On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available

[2-str_concat.c](./2-str_concat.c)
```
Write a function that concatenates two strings.
```
* Prototype: char *str_concat(char *s1, char *s2);
* The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
* if NULL is passed, treat it as an empty string
* The function should return NULL on failure

[3-alloc_grid.c](./3-alloc_grid.c)
```
Write a function that returns a pointer to a 2 dimensional array of integers.
```
* Prototype: int **alloc_grid(int width, int height);
* Each element of the grid should be initialized to 0
* The function should return NULL on failure
* If width or height is 0 or negative, return NULL

[4-print_most_numbers.c](./4-print_most_numbers.c)
```
I believe in numbers and signs
Write a function that prints the numbers, from 0 to 9, followed by a new line.
```
* Prototype: void print_most_numbers(void);
* Do not print 2 and 4
* You can only use _putchar twice in your code

[5-more_numbers.c](./5-more_numbers.c)
```
Numbers constitute the only universal language
Write a function that prints 10 times the numbers, from 0 to 14,
followed by a new line.
```
*  Prototype: void more_numbers(void);
* You can only use _putchar three times in your code

[6-print_line.c](./6-print_line.c)
```
The shortest distance between two points is a straight line
Write a function that draws a straight line in the terminal.
```
* Prototype: void print_line(int n);
* You can only use _putchar function to print
* Where n is the number of times the character _ should be printed
* The line should end with a \n
* If n is 0 or less, the function should only print \n

[7-print_diagonal.c](./7-print_diagonal.c)
```
I feel like I am diagonally parked in a parallel universe
Write a function that draws a diagonal line on the terminal.
```
* Prototype: void print_diagonal(int n);
* You can only use _putchar function to print
* Where n is the number of times the character \ should be printed
* The diagonal should end with a \n
* If n is 0 or less, the function should only print a \n

[8-print_square.c](./8-print_square.c)
```
You are so much sunshine in every square inch
Write a function that prints a square, followed by a new line.
```
* Prototype: void print_square(int size);
* You can only use _putchar function to print
* Where size is the size of the square
* If size is 0 or less, the function should print only a new line
* Use the character # to print the square

[9-fizz_buzz.c](./9-fizz_buzz.c)
```
The “Fizz-Buzz test” is an interview question designed to help filter out the
99.5% of programming job candidates who can’t seem to program their way out of
a wet paper bag.
Write a program that prints the numbers from 1 to 100, followed by a new line.
```
* But for multiples of three print Fizz instead of the number and for the
  multiples of five print Buzz. For numbers which are multiples of both three and
  five print FizzBuzz.

* Each number or word should be separated by a space
* You are allowed to use the standard library

[10-print_triangle.c](./10-print_triangle.c)
```
Write a function that prints a triangle, followed by a new line.
```
* Prototype: void print_triangle(int size);
* You can only use _putchar function to print
* Where size is the size of the triangle
* If size is 0 or less, the function should print only a new line
* Use the character # to print the triangle

[100-prime_factor.c](./100-prime_factor.c)
```
The problem of distinguishing prime numbers from composite numbers and of
resolving the latter into their prime factors is known to be one of the most
important and useful in arithmetic
The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081.
Write a program that finds and prints the largest prime factor of the number
612852475143, followed by a new line.
```
* You are allowed to use the standard library
* Your program will be compiled with this command: gcc -Wall -pedantic -Werror -
* Wextra 100-prime_factor.c -o 100-prime_factor -lm

[101-print_number.c](./101-print_number.c)
```
Numbers have life; they're not just symbols on paper
Write a function that prints an integer.
```
* Prototype: void print_number(int n);
* You can only use _putchar function to print
* You are not allowed to use long
* You are not allowed to use arrays or pointers
* You are not allowed to hard-code special values

## Author
### Kevin Yook 
Email: <yook00627@gmail.com> Twitter: [@yook00627](https://twitter.com/yook00627)
