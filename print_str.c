#include <stdio.h>
#include <string.h>
#include "print_str.h"
void print_str(char* hello, char* name, int num)
{
puts(strncat(hello, name, num));
}