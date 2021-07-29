% _Printf Printf 1.0
% Andres Medina, Juan Correa & Pablo Osorio
%July 2021

#NAME

_Printf - The functions in the printf() family produce output
 according to a format as described below.

#SYPNOSIS

int _printf(const char *format, ...)

#DESCRIPTION

This function write the output under the control of a format stringthat specifies how subsequent arguments (or arguments accessed via the variable\-length argument facilities of stdarg(3)) are converted for output.

 FORMAT OF THE FORMAT STRING

The format string is a character string, beginning and ending in itsinit\
ial shift state, if any.  The format string is compose of zero or more directives: ordinary characters (not %), which are copied unchanged to the output stream; and conversion specifications, each of which results in fetchingzero or more subsequent arguments.  Each conversion specification is introduced by the character %, and ends with a converion specifier.

Warning: Without a % identifir, the program return a error.

#OPTIONS

The option %s is used to replace some part of the string with the
argument of the same type string.

When we have double %% the function just print one %.

The option %c is used to replace some part of the string with the
argumets of type char.

The option %i is used to replace some part of the string with the
argument of type integer number.

The option %u is used to replace some part of the string with an
argument of type unsigned (numbers that be positive (don\[cq]t
negative)).

The option %o is used to replace some part of the string with an
argument of type octal.

The option %x is used to replace some part of the string with an arguent
of type Hexadecimal in lowercase.

The option %X is used to replace some part of the string with an
argument of type

#EXAMPLES

 _printf(\[lq]Let\[cq]s try to printf a simple sentence.\[rq]); In this
 case we don\[cq]t use none % identifier.

 _printf(\[lq]Negative:[%d]\[rq], \-762534); In this example we use the
 %d decimal identifier.

 _printf(\[lq]Unsigned:[%u]\[rq], ui); In this case we use the %u
 unsigned identifier

 _printf(\[lq]Unsigned octal:[%o]\[rq], ui); In this example we use the
 %o octal identifier.

 _printf(\[lq]Unsigned hexadecimal:[%x, %X]\[rq], ui, ui); In this
 example we use %x and %X hexadecimal lower and upper case.

 _printf(\[lq]Character:[%c]\[rq], `H'); In this example we use %c
 character identifier.

 _printf(\[lq]String:[%s]\[rq], \[lq]I am a string !\[rq]); In this
 example we use %s strings identifier.

 _printf(\[lq]Percent:[%%]\[rq]); In this case we use double %% to prints
 one %.