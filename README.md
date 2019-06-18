**Libft**
======================== 
Implementation of some C Standart Library functions including additionals.

**Contents**
-----------------------
* [What is libft](#what-is-libft)
* [What inside the libft](#what-inside-the-libft)
* [How does the libft work](#how-does-the-libft-work)
* [How to use libft](#how-to-use libft)
* [How to test the libft](#how-to-test-the-libft)


**What is libft**
-----------------------
Libft is an individual project at 42 Silicon Valley that requires us to re-code some C Standart Library functions including some additional. When developing this library I gained a very deep and thorough understanding in the C  Programming Language along with the great understanding of data structures, algorithms, unit testing, continuous integration, troubleshooting, and proper documentation.

**What inside the libft**
-----------------------------
1. *Libc Functions:* Standard C functions
2. *Additional functions:* Useful functions
3. *Bonus Functions: *

Libc functions | Additional functions | Bonus functions   |
:----------- | :----------------------| :-----------------|
memset	     |    ft_memalloc         |   ft_lstnew
bzero		     |    ft_memdel	          |   ft_lstdelone
memcpy		   |    ft_strnew	          |   ft_lstdel
memccpy	     |    ft_strdel           |   ft_lstadd
memmove	     |    ft_strclr	          |   ft_lstiter
memchr		   |    ft_striter          |   ft_lstmap
memcmp	     |    ft_striteri         |   ft_isspace
strlen		   |    ft_strmap           |   ft_list_size
strdup		   |    ft_strmapi	        |
strcpy		   |    ft_strequ           |
strncpy			 |    ft_strnequ	        |
strcat		   |    ft_strsub	          |
strlcat	     |    ft_strjoin          |
strchr		   |    ft_strtrim          |
strrchr      |    ft_strsplit         |
strstr		   |    ft_itoa             |
strnstr	     |    ft_putchar	        |
strcmp		   |    ft_putstr           |
strncmp		   |    ft_putendl          |
atoi	       |    ft_putnbr	          |
isalpha		   |    ft_putchar_fd       |
isdigit	     |    ft_putstr_fd        |
isalnum		   |    ft_putendl_fd       |
isascii		   |    ft_putnbr_fd        |
isprint		   |                        |
toupper		   |                        |
tolower		   |                        |

> Most of the the files and functions begin with  **ft**. It stands for Fourty Two (42 Silicon Valley school).

**How does the libft work**
------------------------------
The goal is to create a library called libft.a from the source files so you can later use that library from other projects at 42.

To create the library, after downloading/cloning this project, **cd** into the project, copy all the files from the subdirectiry to the root directory and finally, call make:

	cd libft
	make

You should see a *libft.a* file and some object files (.o).

In order to remove the library:
1. call `make clean` (removing the .o files from the root).
2. call `make fclean` (removing the .o and .a files from the root).

**How to use libft**
---------------------------
You have to tell the file where your library resides and which library it is using:

`gcc yourtest.c -L. -lft -o yourtest.out`

-L takes the path to your library. `.` in this case<br>
-l takes the name of your library. This is the set of characters that come after `lib` in your library name.
That's it. Now run it using `./yourtest.out`
