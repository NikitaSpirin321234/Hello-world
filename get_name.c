#include <stdio.h>
#include <stdlib.h>
#include "get_name.h"
char* get_name()
{
char* name = (char*)malloc(80*sizeof(char));
int i = 0;
char c;
while ((ch = getchar()) != '\n')
{
name[i] = c;
i++;
}
name[i] = '\0';
return name;
}