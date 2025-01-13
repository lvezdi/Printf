<div align="center">
	<img src="https://img.shields.io/badge/norminette-passing-success"/>
	<img src="https://img.shields.io/badge/leaks-none-success" />
  	<img src="https://img.shields.io/badge/-100%2F100-success?logo=42&logoColor=fff" />
	  <a href="https://github.com/lvezdi/Printf/blob/main/Documentation/README.md" >
   	<img src="https://img.shields.io/badge/Cambiar_Idioma-Español-blue" align="right"></a>
</div>

# Ft_printf
This is a project where you recreate the behaviour of the `printf` function from the standard C library and learn about `variadic functions`.

### Variadic variables
`Variadic functions` accept a variable number of arguments, that is, you can pass as many parameters as you need, without specifying a fixed number of them in the function declaration.

In the function declaration, use ellipses `(...)` as the last parameter.
The library is `stdarg.h`.

##### Important macros:
- `va_list(arg_pointer)`: Data type used to store the argument list.
- `va_start(arg_pointer, format)`: Initializes the argument list.
- `va_end(arg_pointer)`: Ends processing of the argument list.

### Supported Conversion Specifiers:
| Specifiers | Output |
| ------------ | ------------ |
| [`%c`](https://github.com/lvezdi/Printf/blob/main/print_char.c) (Character) | Print a single character. | 
| [`%s`](https://github.com/lvezdi/Printf/blob/main/print_str.c) (Character string) | Print a string of characters . |
| [`%p`](https://github.com/lvezdi/Printf/blob/main/print_hexadecimal.c) (Pointer) | Print the memory address of a pointer . | 
| [`%d`](https://github.com/lvezdi/Printf/blob/main/print_int.c) or [`%i`](https://github.com/lvezdi/Printf/blob/main/print_int.c) (Signed Integer) | Prints a signed integer (positive or negative).  |
| [`%u`](https://github.com/lvezdi/Printf/blob/main/print_int.c) (Unsigned Integer) | Prints an unsigned (positive) integer.  |
| [`%x`](https://github.com/lvezdi/Printf/blob/main/print_hexadecimal.c) (Unsigned integer in hexadecimal) | Prints an unsigned integer in hexadecimal format (lowercase letters) |
| [`%X`](https://github.com/lvezdi/Printf/blob/main/print_hexadecimal.c) (Unsigned integer in hexadecimal) | Similar to %x, but the letters in the result are uppercase. |
| [`%%`](https://github.com/lvezdi/Printf/blob/main/print_int.c) (Literal percent symbol) | Prints a literal percent symbol.  |

### Files:
You can create as many `.c` files as you want, an `.h` file containing only the declarations of the functions you wish to include in the library, and a `Makefile`.
