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
Part 1 – Libc Functions

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
