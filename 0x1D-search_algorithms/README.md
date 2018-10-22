# 0x1D. C - Search Algorithms

**What you should learn from this project**

    At the end of this project you are expected to be able to explain to anyone, without the help of Google:

* What is a search algorithm
* What is a linear search
* What is a binary search
* What is the best search algorithm to use depending on your needs

## Exercises

[0-linear.c](./0-linear.c)
```
Write a function that searches for a value in an array of integers using the Linear search algorithm
```
* Prototype : int linear_search(int *array, size_t size, int value);
* Where array is a pointer to the first element of the array to search in
* size is the number of elements in array
* And value is the value to search for
* Your function must return the first index where value is located
* If value is not present in array or if array is NULL, your function must return -1
* Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)

[1-binary.c](./1-binary.c)
```
Write a function that searches for a value in a sorted array of integers using the Binary search algorithm
```
* Prototype : int binary_search(int *array, size_t size, int value);
* Where array is a pointer to the first element of the array to search in
* size is the number of elements in array
* And value is the value to search for
* Your function must return the index where value is located
* You can assume that array will be sorted in ascending order
* You can assume that value won’t appear more than once in array
* If value is not present in array or if array is NULL, your function must return -1
* You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray) (See example)

[2-O](./2-O)
```
What is the time complexity (worst case) of a linear search in an array of size n?
```

[3-O](./3-O)
```
What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?
```

[4-O](./4-O)
```
What is the time complexity (worst case) of a binary search in an array of size n?
```

[5-O](./5-O)
```
What is the space complexity (worst case) of a binary search in an array of size n?
```

[6-O](./6-O)
```
What is the space complexity of this function / algorithm?

int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

[100-jump.c](./100-jump.c)
```
Write a function that searches for a value in a sorted array of integers using the Jump search algorithm
```
* Prototype : int jump_search(int *array, size_t size, int value);
* Where array is a pointer to the first element of the array to search in
* size is the number of elements in array
* And value is the value to search for
* Your function must return the first index where value is located
* You can assume that array will be sorted in ascending order
* If value is not present in array or if array is NULL, your function must return -1
* You have to use the square root of the size of the array as the jump step.
* You can use the sqrt() function included in <math.h> (don’t forget to compile with -lm)
* Every time you compare a value in the array to the value you are searching for, you have to print this value (see example)

[101-O](./101-O)
```
What is the time complexity (average case) of a jump search in an array of size n, using step = sqrt(n)?
```

[102-interpolation.c](./102-interpolation.c)
```
Write a function that searches for a value in a sorted array of integers using the Interpolation search algorithm
```
* Prototype : int interpolation_search(int *array, size_t size, int value);
* Where array is a pointer to the first element of the array to search in
* size is the number of elements in array
* And value is the value to search for
* Your function must return the first index where value is located
* You can assume that array will be sorted in ascending order
* If value is not present in array or if array is NULL, your function must return -1
* To determine the probe position, you can use : size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]))
* Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)

[103-exponential.c](./103-exponential.c)
```
Write a function that searches for a value in a sorted array of integers using the Exponential search algorithm
```
* Prototype : int exponential_search(int *array, size_t size, int value);
* Where array is a pointer to the first element of the array to search in
* size is the number of elements in array
* And value is the value to search for
* Your function must return the first index where value is located
* You can assume that array will be sorted in ascending order
* If value is not present in array or if array is NULL, your function must return -1
* You have to use powers of 2 as exponential ranges to search in your array
* Every time you compare a value in the array to the value you are searching for, you have to print this value (See example)
* Once you’ve found the good range, you need to use a binary search: 
  * Every time you split the array, you have to print the new array (or subarray) you’re searching in (See example)

[104-advanced_binary.c](./104-advanced_binary.c)
```
You may have noticed that the basic binary search does not necessarily return the index of the first value in the array (if this value appears more than once in the array). In this exercise, you’ll have to solve this problem.
Write a function that searches for a value in a sorted array of integers.
```
* Prototype : int advanced_binary(int *array, size_t size, int value);
* Where array is a pointer to the first element of the array to search in
* size is the number of elements in array
* And value is the value to search for
* Your function must return the index where value is located
* You can assume that array will be sorted in ascending order
* If value is not present in array or if array is NULL, your function must return -1
* Every time you split the array, you have to print the new array (or subarray) you’re searching in (See example)
* You have to use recursion. You may only use one loop (while, for, do while, etc.) in order to print the array

## Author
### Kevin Yook 
Email: <yook00627@gmail.com> Twitter: [@yook00627](https://twitter.com/yook00627)
