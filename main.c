#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "get_name.h"
#include "print_str.h"
int main(){
    char hello[90] = "Hello, ";
    char* result;
    result = get_name();
    print_str(hello, result, 80);
    free(result);
    return 0;
}
