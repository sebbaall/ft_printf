*This activity has been created as part of the 42 curriculum by sabahmad.*

# ft_printf

## Description

`ft_printf` is a 42 project focused on recreating the behavior of the standard C `printf()` function.

The main goal of this project is to understand and practice:

* Variadic functions
* `va_list`, `va_start`, `va_arg`, and `va_end`
* Format strings
* Default argument promotions
* Character and string handling
* Number conversion
* Hexadecimal representation
* Pointers and addresses
* File descriptors and `write()`

### Supported Conversions

The mandatory part supports the following conversions:

| Conversion | Description             |
| :--------: | ----------------------- |
|    `%c`    | Character               |
|    `%s`    | String                  |
|    `%p`    | Pointer address         |
|    `%d`    | Decimal number          |
|    `%i`    | Integer                 |
|    `%u`    | Unsigned decimal number |
|    `%x`    | Lowercase hexadecimal   |
|    `%X`    | Uppercase hexadecimal   |
|    `%%`    | Percent sign            |

## Instructions

The project compiles into a static library called `libftprintf.a`.

```bash
make
```

Available Makefile rules:

```bash
make
make clean
make fclean
make re
```

### Usage

Include the `ft_printf.h` header in your source file:

```c
#include "ft_printf.h"
```

Compile your program with the library:

```bash
cc main.c -L. -lftprintf
```

### Example

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s!\n", "42");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hex: %x\n", 42);
    return (0);
}
```

### Project Structure

```text
ft_printf/
├── ft_printf.c
├── ft_printf.h
├── ft_char.c
├── ft_string.c
├── ft_pointer.c
├── ft_decimal.c
├── ft_unsigned.c
├── ft_hex.c
├── ft_percent.c
├── Makefile
└── README.md
```

## Resources

* C manual pages (`man`)
* https://en.cppreference.com
* https://sourceware.org

### Ai usage

AI was used as a learning and reference tool during this project.
I provided the relevant manual pages and used them to ask for explanations of C concepts and functions.
The code was written, tested, debugged, and understood by me.

## Algorithm

`ft_printf` parses the format string from left to right. Normal characters are printed directly, while `%` is used to identify a conversion specifier and retrieve the corresponding argument from the `va_list`. Each conversion is handled by a dedicated function, and the total number of printed characters is returned.


## Author

**Seba Al-Sayed**

**42 Irbid — Common Core**

**Project: ft_printf**
