# ft_printf

# What is ft_printf?

*ft_printf is a project that made me learn variadic functions by re-coding the printf function.*

## Description

**ft_printf** consists in writing a library (`libftprintf.a`) that contains `ft_printf`, a function that mimics the real `printf`. This custom function does not do the buffer management like the real one, but it manages the `cspdiuxX%` conversions:

- `%c`: prints a `char`.
- `%s`: prints a string of `char`.
- `%p`: prints the `void *` argument in hexadecimal.
- `%d`: prints a decimal (base 10) number.
- `%i`: prints an `int` in base 10.
- `%u`: prints an unsigned decimal (base 10) number.
- `%x`: prints a number in hexadecimal (base 16), with lowercase.
- `%X`: prints a number in hexadecimal (base 16), with uppercase.
- `%%`: prints a percent `'%'` sign.

Since the number of parameters will vary from one use to the next one, `ft_printf` makes use of the `stdarg(3)` functions to iterate the list of parameters.

## Return Values

Just like the real `printf` function, `ft_printf` returns the number of characters printed.

# Content

This project consists of 3 folders: [src/](https://github.com/Javiff8/ft_printf/tree/master/src), [inc/](https://github.com/Javiff8/ft_printf/tree/master/inc) and [utils/](https://github.com/Javiff8/ft_printf/tree/master/utils); and a [Makefile](https://github.com/Javiff8/ft_printf/blob/master/Makefile).

## [src/](https://github.com/Javiff8/ft_printf/tree/master/src)

This folder contain the following files:

|File              |Description                                                                                                                                                                               |
|------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|[ft_printf.c](https://github.com/Javiff8/ft_printf/blob/master/src/ft_printf.c)       |The ft_printf function itself and ft_check, a function that checks the character after the '%' and calls the respective "check" function to print the variable in the desired format.                                                                                                 |
|[ft_check_char.c](https://github.com/Javiff8/ft_printf/blob/master/src/ft_check_char.c)   |When called due to a '%c', ft_check_char, prints the specified variable as a char.                                                                                                                                                                                                    |
|[ft_check_str.c](https://github.com/Javiff8/ft_printf/blob/master/src/ft_check_str.c)    |When called due to a '%s', ft_check_str, prints the specified variable as a string.                                                                                                                                                                                                   |
|[ft_check_int.c](https://github.com/Javiff8/ft_printf/blob/master/src/ft_check_int.c)    |When called due to a '%i' or a '%d', ft_check_int, prints the specified variable as a signed number in base 10.                                                                                                                                                                       |
|[ft_check_uns.c](https://github.com/Javiff8/ft_printf/blob/master/src/ft_check_uns.c)    |When called due to a '%u', ft_check_uns, prints the specified variable as an unsigned number in base 10.                                                                                                                                                                              |
|[ft_check_pointer.c](https://github.com/Javiff8/ft_printf/blob/master/src/ft_check_pointer.c)| When called due to a '%p', ft_check_pointer, prints the specified variable as an unsigned hexadecimal number (base 16), preceded by a '0x'.                                                                                                                                          |
|[ft_check_hex.c](https://github.com/Javiff8/ft_printf/blob/master/src/ft_check_hex.c)    |When called due to a '%x', ft_check_hexlower, prints the specified variable as an unsigned hexadecimal number (base 16) in lowercase. Meanwhile, when called due to a '%X', ft_check_hexupper, prints the specified variable as an unsigned hexadecimal number (base 16) in uppercase.|

## [utils/](https://github.com/Javiff8/ft_printf/tree/master/utils)

This folder contains [ft_putchar.c](https://github.com/Javiff8/ft_printf/blob/master/utils/ft_putchar.c), [ft_putnbr_base.c](https://github.com/Javiff8/ft_printf/blob/master/utils/ft_putnbr_base.c) and [ft_strlen.c](https://github.com/Javiff8/ft_printf/blob/master/utils/ft_strlen.c), 3 functions that are used by the previous ones to work.

- [ft_putchar.c](https://github.com/Javiff8/ft_printf/blob/master/utils/ft_putchar.c): contains the `ft_putchar` function, which uses `write(2)` to print the character received as a parameter and returns the the number of characters printed (always 1).
- [ft_putnbr_base.c](https://github.com/Javiff8/ft_printf/blob/master/utils/ft_putnbr_base.c): contains the recursive function `ft_putnbr_base` to print a number the specified base, both received as a parameter.
- [ft_strlen.c](https://github.com/Javiff8/ft_printf/blob/master/utils/ft_strlen.c): Contains the `ft_strlen` function from my [Libft](https://github.com/Javiff8/libft). Returns the length of the string passed as a parameter.

## [inc/](https://github.com/Javiff8/ft_printf/tree/master/inc)

This folder contains the header file [ft_printf.h](https://github.com/Javiff8/ft_printf/blob/master/inc/ft_printf.h).

# How to use

The [Makefile](https://github.com/Javiff8/ft_printf/blob/master/Makefile) does not relink, and has the following rules:

- `make all` or simply `make`:  used to compile the whole library by doing `ar rcs` to generate the "**.a**" file.
- `make clean`: used to remove all objects.
- `make fclean`: to remove all objects and the *libftprintf.a* file.
- `make re` same as doing `make fclean` followed by `make`.

To use the `ft_printf` function of this library it is as simple as compiling it via `make`, then including the [ft_printf.h](https://github.com/Javiff8/ft_printf/blob/master/inc/ft_printf.h) header at the beginning of the "**.c**" files that will use the function and compiling those along with the *libftprintf.a* file.

# Status, grade and observations

- Status: The project is being evaluated.
- Grade: Still not graded.
- Observations: No bonuses were done for this project.
