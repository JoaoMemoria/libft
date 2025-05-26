# Libft - Custom C Library

This project is an implementation of various C library functions.

## Implemented Functions

### String Manipulation
- `ft_atoi`: Converts a string to an integer.
- `ft_isalnum`: Checks if a character is alphanumeric.
- `ft_isalpha`: Checks if a character is alphabetic.
- `ft_isascii`: Checks if a character is a valid ASCII character.
- `ft_isdigit`: Checks if a character is a digit.
- `ft_isprint`: Checks if a character is printable.
- `ft_itoa`: Converts an integer to a string.
- `ft_split`: Splits a string into an array of substrings based on a delimiter.
- `ft_strchr`: Locates the first occurrence of a character in a string.
- `ft_strdup`: Duplicates a string.
- `ft_strjoin`: Concatenates two strings.
- `ft_strlcat`: Concatenates strings with size checking.
- `ft_strlcpy`: Copies a string with size checking.
- `ft_strlen`: Calculates the length of a string.
- `ft_strmapi`: Applies a function to each character of a string to create a new string.
- `ft_strncmp`: Compares two strings up to a specified number of characters.
- `ft_strnstr`: Locates a substring within a string, searching up to a specified number of characters.
- `ft_strrchr`: Locates the last occurrence of a character in a string.
- `ft_strtrim`: Trims leading and trailing characters from a string.
- `ft_substr`: Extracts a substring from a string.
- `ft_tolower`: Converts an uppercase letter to lowercase.
- `ft_toupper`: Converts a lowercase letter to uppercase.
- `ft_striteri`: Applies a function to each character of a string.

### Memory Manipulation
- `ft_bzero`: Zeros out a block of memory.
- `ft_calloc`: Allocates memory for an array and initializes it to zero.
- `ft_memccpy`: Copies memory from one location to another until a specific character is encountered or a specified number of bytes have been copied.
- `ft_memchr`: Locates the first occurrence of a byte in a block of memory.
- `ft_memcmp`: Compares two blocks of memory.
- `ft_memcpy`: Copies a block of memory from one location to another.
- `ft_memmove`: Copies a block of memory from one location to another, handling overlapping memory regions.
- `ft_memset`: Fills a block of memory with a specific byte.

### File Descriptor Output
- `ft_putchar_fd`: Writes a character to a file descriptor.
- `ft_putendl_fd`: Writes a string followed by a newline to a file descriptor.
- `ft_putnbr_fd`: Writes an integer to a file descriptor.
- `ft_putstr_fd`: Writes a string to a file descriptor.

## Compilation

To compile the library, navigate to the root directory of the project and run the following command:

```bash
make
```

This will create a static library file named `libft.a` in the root directory.

## Usage

To use the library functions in your C program, you need to include the header file `libft.h` and link against the compiled library `libft.a`.

**Example:**

Let's say you have a C program named `my_program.c`:

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = "Hello, World!";
    int length = ft_strlen(str);
    printf("The length of the string is: %d\n", length);
    return (0);
}
```

To compile and link this program with the `libft` library, use the following command:

```bash
cc my_program.c -L. -lft -o my_program
```

**Explanation:**

- `cc`: Your C compiler (e.g., gcc, clang).
- `my_program.c`: Your source file.
- `-L.`: Tells the linker to look for libraries in the current directory (where `libft.a` is located).
- `-lft`: Links against the `libft` library. The linker will look for a file named `libft.a`.
- `-o my_program`: Specifies the name of the output executable.

Then, you can run your program:

```bash
./my_program
```

## Contributing

We welcome contributions to improve and expand this library!

### Reporting Bugs

If you encounter a bug, please open an issue on the GitHub repository. When reporting a bug, please include:

- A clear and concise description of the bug.
- Steps to reproduce the bug.
- The expected behavior.
- The actual behavior.
- Your operating system and compiler version.

### Submitting Pull Requests

If you would like to contribute code to the project, please follow these steps:

1. **Fork the repository.**
2. **Create a new branch** for your feature or bug fix:
   ```bash
   git checkout -b your-branch-name
   ```
3. **Make your changes** and ensure that the code adheres to the project's coding style.
4. **Test your changes** thoroughly.
5. **Commit your changes** with a clear and descriptive commit message:
   ```bash
   git commit -m "Brief description of your changes"
   ```
6. **Push your changes** to your forked repository:
   ```bash
   git push origin your-branch-name
   ```