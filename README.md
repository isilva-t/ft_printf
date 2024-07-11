# ft_printf

A custom implementation of the C standard library printf function.

## Description

This project recodes the printf() function from libc to create a library called libftprintf.a. The implementation handles the following format specifiers:

- `%c` - Prints a single character
- `%s` - Prints a string
- `%p` - Prints a void pointer in hexadecimal format
- `%d` - Prints a decimal number
- `%i` - Prints an integer in base 10
- `%u` - Prints an unsigned decimal number
- `%x` - Prints a number in lowercase hexadecimal format
- `%X` - Prints a number in uppercase hexadecimal format
- `%%` - Prints a percent sign

## Usage

### Using the Library

Include the header in your C file:

```c
#include "ft_printf.h"
```

### Function Prototype

```c
int ft_printf(const char *format, ...);
```

### Return Value

The function returns the number of characters printed.

## Examples

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    ft_printf("Character: %c\n", 'A');
    ft_printf("Decimal: %d\n", 42);
    ft_printf("Hexadecimal: %x\n", 255);
    
    return (0);
}
```

## Notes

- This implementation does not handle buffer management like the original printf()
- The project follows the 42 School Norm coding standard
