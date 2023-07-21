# Custom _printf Function.

Description:

This project implements a simplified version of the printf function in C, called _printf. It allows you to 
format and print various types of data to the standard output, such as characters, strings, integers, and unsigned integers.

Supported Conversions
- %c: Print a single character.
- %s: Print a string of characters.
- %d or %i: Print a decimal integer.
- %u: Print an unsigned decimal integer.
- %r: Prints a reverse string of characters.
- %%: Print a percent sign.

Compilation:

To compile the program, you can use the following command:
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c

Example Output:

- Let's try to printf a simple sentence.
- Length:[39]
- Negative:[-762534]
- Unsigned:[2147484671]
- Character:[H]
- String:[I am a string !]
- Percent:[%]
- Reversed string:[!dlrow ,olleH]

## Documentation

[Secrets of "printf"](https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/misc/2022/11/d38f88e96a617135804dca9f9c49632751e06aa7.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20230721%2Feu-west-3%2Fs3%2Faws4_request&X-Amz-Date=20230721T043106Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=9c98d54ae318cc9d24a78f4f8087d5e1794e0c50af9cb0e9ce0d44d4ebe0c5cc)


## Running Tests

To run tests, run the following command

```bash
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
```
## Roadmap

- Add more functions

- Improve program



Gabriel Rossy
- https://github.com/gaboxdeveloper

Martín Abreu
- https://github.com/mabreu88
