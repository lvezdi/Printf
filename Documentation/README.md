<div align="center">
	<img src="https://img.shields.io/badge/norminette-passing-success"/>
	<img src="https://img.shields.io/badge/leaks-none-success" />
  	<img src="https://img.shields.io/badge/-100%2F100-success?logo=42&logoColor=fff" />
	<a href="https://github.com/lvezdi/Printf/blob/main/README.md" >
   	<img src="https://img.shields.io/badge/Change_Language-English-blue" align="right"></a>
</div>

# Ft_printf
Es un proyecto donde se recrea el comportamiento de la función `printf` de la biblioteca estándar de C y se aprende sobre `funciones variádicas`.

### Variables variádicas
`Las funciones variádicas` aceptan un número variable de argumentos, es decir, puedes pasar tantos parámetros como necesites, sin especificar un número fijo de ellos en la declaración de la función.

En la declaración de la función, utiliza puntos suspensivos `(...)` como último parámetro.
La librería es `stdarg.h`.

##### Macros importantes:
- `va_list (arg_pointer`): Tipo de dato utilizado para almacenar la lista de argumentos.
- `va_start(arg_pointer, format)`: Inicializa la lista de argumentos.
- `va_end(arg_pointer)`: Finaliza el procesamiento de la lista de argumentos.

### Conversión de especificadores:
| Especifiers  | Salida  |
| ------------ | ------------ |
| [`%c`](https://github.com/lvezdi/Printf/blob/main/print_char.c) (Carácter) | Imprime un solo carácter.  |
| [`%s`](https://github.com/lvezdi/Printf/blob/main/print_str.c) (Cadena de caracteres)  |  Imprime una cadena de caracteres . |
| [`%p`](https://github.com/lvezdi/Printf/blob/main/print_hexadecimal.c) (Puntero)  | Imprime la dirección de memoria de un puntero .  |
| [`%d`](https://github.com/lvezdi/Printf/blob/main/print_int.c) o [`%i`](https://github.com/lvezdi/Printf/blob/main/print_int.c) (Entero con signo)  | Imprime un número entero con signo (positivo o negativo).  |
| [`%u`](https://github.com/lvezdi/Printf/blob/main/print_int.c) (Entero sin signo)  | Imprime un número entero sin signo (positivo).  |
| [`%x`](https://github.com/lvezdi/Printf/blob/main/print_hexadecimal.c) (Entero sin signo en hexadecimal)  |  Imprime un número entero sin signo en formato hexadecimal (letras minúsculas) |
| [`%X`](https://github.com/lvezdi/Printf/blob/main/print_hexadecimal.c)  (Entero sin signo en hexadecimal) |  Similar a %x, pero las letras en el resultado son mayúsculas. |
| [`%%`](https://github.com/lvezdi/Printf/blob/main/print_int.c) (Símbolo de porcentaje literal)  | Imprime un símbolo de porcentaje literal.  |

### Archivos:
Se pueden crear tantos archivos como se deseen `.c` , un archivo `.h` que contenga solo las declaraciones de las funciones que deseas incluir en la biblioteca y un archivo `Makefile`.
