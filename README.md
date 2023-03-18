# Coverts hex to long in C programming language.

---
### The purpose of this was to take read an input from the commandline in hexadecimal format and produce a 64-big long corresponding value.
### The input must enetered in the form of
  1. must start with 0x
  1. Have at least 3 characters
  1. the characters that follow 0x or 0X must be one of [0-9],[A-F], or [a-f]
  
---
## To simply run it, simply enter

``` Bash
$ ./main <hex-Value>
```
## If You wish to recompile, you must link once compiling. To do so using c90 and gcc compiler
```
$ gcc -o main main.c -lm
$ ./main <hex-Value>

```
