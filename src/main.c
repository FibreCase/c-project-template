#include <stdio.h>

#include "add.h"

int main() {
    printf("Hello, World!\n");
    int ret = add(1, 2);
    printf("Result of 1+2 is %d", ret);
    return 0;
}