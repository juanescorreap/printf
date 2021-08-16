# _printf Function:page_facing_up:

The `_printf` program is a pseudo- recreation of the C standard library function, `printf` as part of the low-level programming and algorithm track at Holberton School Colombia. 

## Dependencies :couple:

Our `_printf` function was coded on an Ubuntu 20.04.2 LTS machine with `gcc` version 9.3.0

## Flowchart

![printf](https://user-images.githubusercontent.com/85316546/127687597-67ab22cd-758a-4c73-b37e-6fd77ab1ba6e.png)


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


### Return Value

If successful return, `_printf` returns the number of characters printed excluding the terminating null byte used to end output to strings. 

But If an output error is encountered, the function returns `-1` and it does not print anything.

### Format of the Argument String

The `format` string is a constant character string composed of ordinary characters (not `%`) which are copied unchanged to the output stream. 

Specification cases are introduced by the character `%` and ends with a conversion specifier. 

### Flag Characters

#### (space)
  * A blank is left after the percent character, and then both of them get printed.

Example `main.c`:
```
int main()
{
    _printf("% d\n", 3371);
}
```
Output:
```
 3371
```

## Conversion Specifiers

The conversion specifier (introduced by the character `%`) is a character that
specifies the type of conversion to be applied. The `_printf` function
supports the following conversion specifiers:

### d, i
The `i` and `d` argument is converted to char for decimal and integer notation.

#### Example `main.c`:
```
int main()
{
    _printf("%d\n", 7);
}
```
#### Output:
```
7
```

### o, u, x, X
The `unsigned int` argument is converted to: 
unsigned octal (`o`), 
unsigned decimal (`u`), 
unsigned hexadecimal (`x`) 
and unsigned hexadecimal Uppercase(`X`). 

The letters `abcdef` are
used for `x` conversions and the letters `ABCDEF` are used for `X` conversions.

Then for each case function `_utoa`convert unsigned int variable arguments into char

#### Example `main.c`:
```
int main()
{
    _printf("%o\n", 77);
}
```
#### Output:
```
115
```

#### c
The `int` argument is converted to an `char`.

Example `main.c`:
```
int main()
{
    _printf("%c\n", 48);
}
```
Output:
```
0
```
#### s
No argument is converted. 
Arguments are allocated into `strtmp`counter.

Example `main.c`:
```
int main()
{
    _printf("%s\n", "Hello, World!");
}
```
Output:
```
Hello, World!
```
#### %
A `%` is written. 
No argument is converted. 
The complete conversion
specification is `%%`.

Example:
```
int main(void)
{
    _printf("%%\n");
}
```
Output:
```
%
```

## Authors :black_nib:

* Juan Esteban Correa Pérez <[juanescorreap](https://github.com/juanescorreap)>
* Andrés Medina <[TheRealMedi](https://github.com/TheRealMedi)> 
* Pablo Osorio <[3387-hub](https://github.com/3387-hub)>


## Acknowledgements :pray:

This program was written as part of the curriculum for Holberton School.
Holberton School is a campus-based full-stack software engineering program
that prepares students for careers in the tech industry using project-based
peer learning. For more information, visit [this link](https://www.holbertonschool.com/).

<p align="center">
  <img src="http://www.holbertonschool.com/holberton-logo.png" alt="Holberton School logo">
</p>