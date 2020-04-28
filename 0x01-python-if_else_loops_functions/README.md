In this project, we'll learn...
Why Python programming is awesome
Why indentation is so important in Python
How to use the if, if ... else statements
How to use comments
How to affect values to variables
How to use the while and for loops
How is Python’s for different from C‘s?
How to use the break and continues statements
How to use else clauses on loops
What does the pass statement do, and when to use it
How to use range
What is a function and how do you use functions
What does return a function that does not use any return statement
Scope of variables
What’s a traceback
What are the arithmetic operators and how to use them

Task 0 - 0. Positive anything is better than negative nothing mandatory

This program will assign a random signed number to the variable number each time
it is executed. Complete the source code in order to print whether the number
stored in the variable number is positive or negative.
The variable number will store a different value every time you will run it
You don’t have to understand what import, random. randint do.
The output of the program should be:
The number, followed by
if the number is greater than 0: is positive
if the number is 0: is zero
if the number is less than 0: is negative
followed by a new line
File: 0-positive_or_negative.py

Task 1 - 1. The last digit mandatory

This program will assign a random signed number to the variable number each time
it is executed. Complete the source code in order to print the last digit of the
number stored in the variable number.

You can find the source code here
The variable number will store a different value every time you will run it
You don’t have to understand what import, random.randint do.
This line should not change: number = random.randint(-10000, 10000)
The output of the program should be:
The string Last digit of, followed by the number, followed by
the string is, followed by the last digit of number, followed by
if the last digit is greater than 5: the string and is greater than 5
if the last digit is 0: the string and is 0
if the last digit is less than 6 and not 0: the string and is less than 6 and
not 0 followed by a new line
File: 1-last_digit.py

Task 2 - 2. I sometimes suffer from insomnia. And when I can't fall asleep,
I play what I call the alphabet game - mandatory

Write a program that prints the ASCII alphabet, in lowercase, not followed by a
new line.

You can only use one print function with string format
You can only use one loop in your code
You are not allowed to store characters in a variable
You are not allowed to import any module
File: 2-print_alphabet.py

Task 3 - When I was having that alphabet soup, I never thought that it would pay
off - mandatory

Write a program that prints the ASCII alphabet, in lowercase, not followed by a
new line.

Print all the letters except q and e
You can only use one print function with string format
You can only use one loop in your code
You are not allowed to store characters in a variable
You are not allowed to import any module
File: 3-print_alphabt.py

Task 4 - 4. Hexadecimal printing mandatory

Write a program that prints all numbers from 0 to 98 in decimal and in
hexadecimal

You can only use one print function with string format
You can only use one loop in your code
You are not allowed to store numbers or strings in a variable
You are not allowed to import any module
File: 4-print_hexa.py

Task 5 - 5. 00...99 mandatory

Write a program that prints numbers from 0 to 99.

Numbers must be separated by ,, followed by a space
Numbers should be printed in ascending order, with two digits
The last number should be followed by a new line
You can only use no more than 2 print functions with string format
You can only use one loop in your code
You are not allowed to store numbers or strings in a variable
You are not allowed to import any module
File: 5-print_comb2.py

Task 6 - 6. Inventing is a combination of brains and materials.
The more brains you use, the less material you need - mandatory

Write a program that prints all possible different combinations of two digits.

Numbers must be separated by ,, followed by a space
The two digits must be different
01 and 10 are considered the same combination of the two digits 0 and 1
Print only the smallest combination of two digits
Numbers should be printed in ascending order, with two digits
The last number should be followed by a new line
You can only use no more than 3 print functions with string format
You can only use no more than 2 loops in your code
You are not allowed to store numbers or strings in a variable
You are not allowed to import any module
File: 6-print_comb3.py

7. islower mandatory

Write a function that checks for lowercase character.

Prototype: def islower(c):
Returns True if c is lowercase
Returns False otherwise
You are not allowed to import any module
You are not allowed to use str.upper() and str.isupper()
Tips: ord()
You don’t need to understand __import__
File: 7-islower.py

Task 8 - 8. To uppercase mandatory

Write a function that prints a string in uppercase followed by a new line.

Prototype: def uppercase(str):
You can only use no more than 2 print functions with string format
You can only use one loop in your code
You are not allowed to import any module
You are not allowed to use str.upper() and str.isupper()
Tips: ord()
You don’t need to understand __import__
File: 8-uppercase.py

Task 9 - 9. There are only 3 colors, 10 digits, and 7 notes; it's what we do
with them that's important - mandatory

Write a function that prints the last digit of a number.

Prototype: def print_last_digit(number):
Returns the value of the last digit
You are not allowed to import any module
You don’t need to understand __import__
File: 9-print_last_digit.py

Task 10 - 10. a + b mandatory

Write a function that adds two integers and returns the result.

Prototype: def add(a, b):
Returns the value of a + b
You are not allowed to import any module
You don’t need to understand __import__
File: 10-add.py

Task 11 - 11. a ^ b mandatory

Write a function that computes a to the power of b and return the value.

Prototype: def pow(a, b):
Returns the value of a ^ b
You are not allowed to import any module
You don’t need to understand __import__
File: 11-pow.py

Task 12 - 12. Fizz Buzz mandatory

Write a function that prints the numbers from 1 to 100 separated by a space.

For multiples of three print Fizz instead of the number and for multiples of
five print Buzz.
For numbers which are multiples of both three and five print FizzBuzz.
Prototype: def fizzbuzz():
Each element should be followed by a space
You are not allowed to import any module
You don’t need to understand __import__
File: 12-fizzbuzz.py

Task 13 - 13. Insert in sorted linked list mandatory

Technical interview preparation:

You are not allowed to google anything
Whiteboard first
Write a function in C that inserts a number into a sorted singly linked list.

Prototype: listint_t *insert_node(listint_t **head, int number);
Return: the address of the new node, or NULL if it failed
File: 13-insert_number.c, lists.h

ADVANCED

TASK 14 - 14. Smile in the mirror #advanced

Write a program that prints the ASCII alphabet, in reverse order, alternating
lowercase and uppercase (z in lowercase and Y in uppercase) , not followed by a
new line.

You can only use one print function with string format
You can only use one loop in your code
You are not allowed to store characters in a variable
You are not allowed to import any module
File: 100-print_tebahpla.py

TASK 15 - 15. Remove at position #advanced

Write a function that creates a copy of the string, removing the character at
the position n (not the Python way, the “C array index”).

Prototype: def remove_char_at(str, n):
You are not allowed to import any module
You don’t need to understand __import__
File: 101-remove_char_at.py

TASK 16 - 16. ByteCode -> Python #2 #advanced

Write the Python function def magic_calculation(a, b, c): that does exactly the
same as the following Python bytecode.
File: 102-magic_calculation.py