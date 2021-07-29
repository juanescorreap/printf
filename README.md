# _printf Function:page_facing_up:

The `_printf` program is a pseudo- recreation of the C standard library function, `printf` as part of the low-level programming and algorithm track at Holberton School Colombia.

## Dependencies :couple:

Our `_printf` function was coded on an Ubuntu 20.04.2 LTS machine with `gcc` version 9.3.0

## Usage :running:

Bassically to use the `_printf` function, *assuming the above `.c` dependencies have been installed,*
compile all `.c` files in the repository and include the header `holberton.h`in the entry point function.

### Example `main.c`:
```
#include "holberton.h"

int main()
{
    _printf("Hello, World from CH15!");

    return (0);
}
```

### Compilation:
```
$ gcc *.c -o [File_name]
```

### Output:
```
$ ./[File_Name]
Hello, World from CH15!
$
```

## Description :speech_balloon:

### Syntaxis

#### Prototype:
`int _printf(const char *format, ...);`

The function `_printf` writes output to standard output.

The function writes under the control of a `format` string that specifies how consecutive arguments (accessed via the variable-length facilities of `stdarg`) are
converted for output.