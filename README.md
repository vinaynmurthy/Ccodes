# Ccodes
My C sample codes for learning

**To compile and run a C program**

1. To compile a C prorgam, use the following make command.

```
NAME=<C program to be compiled without .c extension> make -f Makefile

For example:

NAME=Convert_int_to_binary make
```

2. This will generate a ".a" executable file. Run the program using the following command.

```
./<Compiled C program>.a

For example:
./Convert_int_to_binary.a
```