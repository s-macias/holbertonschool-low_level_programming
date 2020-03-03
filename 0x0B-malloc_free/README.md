In this project, we'll learn ...
What is the difference between automatic and dynamic allocation
What is malloc and free and how to use them
Why and when use malloc
How to use valgrind to check for memory leak

Task 0 - File: 0-create_array.c
exe: ./a
creates an array of chars, and initializes it with a specific char.

Prototype: char *create_array(unsigned int size, char c);
Returns NULL if size = 0
Returns a pointer to the array, or NULL if it fails

Task 1 - File: 1-strdup.c
exe: ./s
returns a pointer to a newly allocated space in memory, which contains a copy 
of the string given as a parameter.

Prototype: char *_strdup(char *str);
The _strdup() function returns a pointer to a new string which is a duplicate 
of the string str. Memory for the new string is obtained with malloc, and can 
be freed with free.
Returns NULL if str = NULL
On success, the _strdup function returns a pointer to the duplicated string. 
It returns NULL if insufficient memory was available

Task 2 - File: 2-str_concat.c
exe: ./c | cat -e

concatenates two strings.

Prototype: char *str_concat(char *s1, char *s2);
The returned pointer should point to a newly allocated space in memory which 
contains the contents of s1, followed by the contents of s2, and null terminated
if NULL is passed, treat it as an empty string
The function should return NULL on failure

Task 3 - File: 3-alloc_grid.c
exe: ./g

 returns a pointer to a 2 dimensional array of integers.

Prototype: int **alloc_grid(int width, int height);
Each element of the grid should be initialized to 0
The function should return NULL on failure
If width or height is 0 or negative, return NULL

Task 4 - File: 4-free_grid.c
exe: 4-free_grid.c
frees a 2 dimensional grid previously created by your alloc_grid function.

Prototype: void free_grid(int **grid, int height);
Note that we will compile with your alloc_grid.c file. Make sure it compiles.

Task 5 - File: 5-argstostr.c
exe: ./args
concatenates all the arguments of your program.

Prototype: char *argstostr(int ac, char **av);
Returns NULL if ac == 0 or av == NULL
Returns a pointer to a new string, or NULL if it fails
Each argument should be followed by a \n in the new string

ADVANCED

Task 6 - File: 100-strtow.c
exe: ./strtow | cat -e
splits a string into words.

Prototype: char **strtow(char *str);
The function returns a pointer to an array of strings (words)
Each element of this array should contain a single word, null-terminated
The last element of the returned array should be NULL
Words are separated by spaces
Returns NULL if str == NULL or str == ""
If your function fails, it should return NULL