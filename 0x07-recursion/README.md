# 0x07. C - Recursion

**What you should learn from this project**

    At the end of this project you are expected to be able to explain to anyone, without the help of Google:

* What is recursion, and how to use it

## Exercises

[0-puts_recursion.c](./0-puts_recursion.c)
```
Write a function that prints a string, followed by a new line.
FYI: The standard library provides a similar function: puts. Run man puts to learn more.
```
* Prototype: void _puts_recursion(char *s);

[1-print_rev_recursion.c](./1-print_rev_recursion.c)
```
Write a function that prints a string in reverse.
```
* Prototype: void _print_rev_recursion(char *s);

[2-strlen_recursion.c](./2-strlen_recursion.c)
```
Write a function that returns the length of a string.
FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.
```
* Prototype: int _strlen_recursion(char *s);

[3-factorial.c](./3-factorial.c)
```
Write a function that returns the factorial of a given number.
```
* Prototype: int factorial(int n);
* If n is lower than 0, the function should return -1 to indicate an error
* Factorial of 0 is 1

[4-pow_recursion.c](./4-pow_recursion.c)
```
Write a function that returns the value of x raised to the power of y.
FYI: The standard library provides a different function: pow. Run man pow to learn more.
```
* Prototype: int _pow_recursion(int x, int y);
* If y is lower than 0, the function should return -1

[5-sqrt_recursion.c](./5-sqrt_recursion.c)
```
Write a function that returns the natural square root of a number.
FYI: The standard library provides a different function: sqrt. Run man sqrt to learn more.
```
* Prototype: int _sqrt_recursion(int n);
* If n does not have a natural square root, the function should return -1

[6-is_prime_number.c](./6-is_prime_number.c)
```
Write a function that returns 1 if the input integer is a prime number, otherwise return 0.
```
* Prototype: int is_prime_number(int n);

[7-is_palindrome.c](./7-is_palindrome.c)
```
Write a function that returns 1 if a string is a palindrome and 0 if not.
```
* Prototype: int is_palindrome(char *s);
* An empty string is a palindrome

[100-wildcmp.c](./100-wildcmp.c)
```
Write a function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.
```
* Prototype: int wildcmp(char *s1, char *s2);
* s2 can contain the special character *.
* The special char * can replace any string (including an empty string)

## Author
### Kevin Yook 
Email: <yook00627@gmail.com> Twitter: [@yook00627](https://twitter.com/yook00627)
