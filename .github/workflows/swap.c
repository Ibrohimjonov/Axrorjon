// C Program to Swap Two Numbers without Using 
// a Temporary Variable
#include <stdio.h>

int main() {
    int a = 5, b = 10;

    // Arithmetic operations to swap values
    a = a + b;
    b = a - b;
    a = a - b;

    printf("a = %d, b = %d\n", a, b);
    return 0;
}