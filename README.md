# Libft - Library of Functions /42 Lisboa/

This is my first project as a 42 Lisboa student, where I had to create a library containing multiple libc re-coded functions and also create new ones that are not included in the standard C library.

So, the project was divided in 3 parts. 

In the first part, I re-coded some functions of the standard C library, following the steps in their man, making them have the same behaviors and prototypes as the original ones. All of their names had to start by the prefix "ft_XXX.c", according to the pdf project's instructions. 

Meanwhile, in the second part, I coded some additional functions that are not present in the standard C library, or are included in a different form. 

And in the last part, I worked with the concept of linked list functions, as a bonus for receiving extra points in my project's evaluation.

To do these steps, I worked with 3 different types of files, them being:

1) .c -> which is the format that all of the functions written must have;

2) .h -> representing the header, which is useful because I just need to include it once, and all of the .c files will read from the header file - I don't need to put the header of a function (#include <stdio.h>, for example) in every single file. Also, if one function uses another function of the library in it, the header file saves time once I don't need to write the function again;

3) Makefile -> is the file that will compile all of the functions and header of my project as a whole - that way I don't need to create a "int main" and compile with "gcc" all of my functions. I only needed to type "make" once I had it created.
