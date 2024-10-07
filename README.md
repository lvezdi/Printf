<img src="https://img.shields.io/badge/score-100%20%2F%20100-2ea44f?style=for-the-badge" class="right-align" alt="Score Badge">

# Ft_printf 🇬🇧
This is a project where you recreate the behaviour of the printf function from the standard C library and learn about variadic functions.

### Variadic variables
Variadic functions accept a variable number of arguments, that is, you can pass as many parameters as you need, without specifying a fixed number of them in the function declaration.

In the function declaration, use ellipses (...) as the last parameter.
The library is stdarg.h.

##### Important macros:
va_list(arg_pointer): Data type used to store the argument list.
va_start(arg_pointer, format): Initializes the argument list.
va_end(arg_pointer): Ends processing of the argument list.

### Supported Conversion Specifiers:
| Specifiers | Output |
| ------------ | ------------ |
| %c (Character) | Print a single character. | 
| %s (Character string) | Print a string of characters . |
| %p (Pointer) | Print the memory address of a pointer . | 
| %d or %i (Signed Integer) | Prints a signed integer (positive or negative).  |
| %u (Unsigned Integer) | Prints an unsigned (positive) integer.  |
| %x (Unsigned integer in hexadecimal) | Prints an unsigned integer in hexadecimal format (lowercase letters) |
| %X (Unsigned integer in hexadecimal) | Similar to %x, but the letters in the result are uppercase. |
| %% (Literal percent symbol) | Prints a literal percent symbol.  |

### Files:
You can create as many .c files as you want, an .h file containing only the declarations of the functions you wish to include in the library, and a Makefile.

# Ft_printf 🇪🇸
Es un proyecto donde se recrea el comportamiento de la función printf de la biblioteca estándar de C y se aprende sobre funciones variádicas.

### Variables variádicas
Las funciones variádicas aceptan un número variable de argumentos, es decir, puedes pasar tantos parámetros como necesites, sin especificar un número fijo de ellos en la declaración de la función.

En la declaración de la función, utiliza puntos suspensivos (...) como último parámetro.
La librería es stdarg.h.

##### Macros importantes:
va_list (arg_pointer): Tipo de dato utilizado para almacenar la lista de argumentos.
va_start(arg_pointer, format): Inicializa la lista de argumentos.
va_end(arg_pointer): Finaliza el procesamiento de la lista de argumentos.

### Conversión de especificadores:
| Especifiers  | Salida  |
| ------------ | ------------ |
| %c (Carácter)  | Imprimir un solo carácter.  |
| %s (Cadena de caracteres)  |  Imprime una cadena de caracteres . |
| %p (Puntero)  | Imprime la dirección de memoria de un puntero .  |
| %d o %i (Entero con signo)  | Imprime un número entero con signo (positivo o negativo).  |
| %u (Entero sin signo)  | Imprime un número entero sin signo (positivo).  |
| %x (Entero sin signo en hexadecimal)  |  Imprime un número entero sin signo en formato hexadecimal (letras minúsculas) |
|  %X (Entero sin signo en hexadecimal) |  Similar a %x, pero las letras en el resultado son mayúsculas. |
| %% (Símbolo de porcentaje literal)  | Imprime un símbolo de porcentaje literal.  |

### Archivos:
Se pueden crear tantos archivos como se deseen .c , un archivo .h que contenga solo las declaraciones de las funciones que deseas incluir en la biblioteca y un archivo Makefile.
