Show how to use extern to declare a global variable in multiple files.

## Content
[define_extern.c](https://github.com/wufan-home/language/blob/master/cpp/extern/define_extern.c): Define a global variable to be used in multiple files. <br>
[use_extern_1.h](https://github.com/wufan-home/language/blob/master/cpp/extern/use_extern_1.h): Declare the global variable in the file. <br>
[use_extern_2.h](https://github.com/wufan-home/language/blob/master/cpp/extern/use_extern_2.h): Declare the global variable in the file <br>
[show_extern_usage.c](https://github.com/wufan-home/language/blob/master/cpp/extern/show_extern_usage.c): Show how to use this global variable.

## Compiling
Use the command 
```
gcc define_extern.c show_extern_usage.c -o show_extern_usage.o
```
**Note**: All source files should be listed in the command.

## Usage
The output should be:
```bash
Print the value of the extern declared in the file use_extern_1.h: 2.
Print the value of the extern declared in the file use_extern_2.h: 3.
```
