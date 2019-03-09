#include <stdio.h>

extern int g_extern;

int f2()
{
    printf("Print the value of the extern declared in the file use_extern_2.h: %d.\n", ++g_extern);
    
    return 1;
}
