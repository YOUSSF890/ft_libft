*This project has been created as part of the 42 curriculum by ylagzoul.*

# Libft  
Your very first own C library

## Description

Libft is a foundational project from the 42 curriculum.  
The purpose of this project is to recreate common functions from the C standard library and to build a personal static library.

By completing this project, I learned:
- How standard C functions work internally
- How to manage memory safely
- How to create and use a static library
- How to manipulate strings, memory, and linked lists in C

This library will be reused in many future 42 projects.

---

## Instructions

### Compilation

-> To compile the library, run:

```bash
make

-> This command creates the static library:
  libft.a

### Cleaning

-> Remove object files:
  make clean

-> Remove object files and the library:
  make fclean

-> Recompile everything:
  make re

## Library Content
*** Part 1 – Libc Functions

Reimplemented standard C library functions, all prefixed with ft_:

Character tests:
ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint

String and memory handling:
ft_strlen, ft_memset, ft_bzero, ft_memcpy, ft_memmove
ft_strlcpy, ft_strlcat, ft_strchr, ft_strrchr
ft_strncmp, ft_strnstr, ft_strdup

Conversion and comparison:
ft_toupper, ft_tolower, ft_atoi, ft_memchr, ft_memcmp

Memory allocation:
ft_calloc

*** Part 2 – Additional Functions

Utility functions not always present in libc:

String creation and editing:
ft_substr, ft_strjoin, ft_strtrim, ft_split

Number conversion:
ft_itoa

String iteration:
ft_strmapi, ft_striteri

File descriptor output:
ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd

*** Part 3 – Linked List Functions

The library also includes linked list utilities using this structure:

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;


Implemented functions:

ft_lstnew

ft_lstadd_front

ft_lstsize

ft_lstlast

ft_lstadd_back

ft_lstdelone

ft_lstclear

ft_lstiter

ft_lstmap

## Rules and Constraints

Written in C

No global variables

No unexpected program crashes

All allocated memory is freed

No memory leaks

Compiled with flags: -Wall -Wextra -Werror

Library created using ar

Code follows the 42 Norm

----------------

Author

Login: ylagzoul

School: 1337
