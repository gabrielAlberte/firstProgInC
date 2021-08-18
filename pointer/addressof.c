#include <stdio.h>

int main() {
    int int_var = 5;
    int *int_ptr;

    int_ptr = &int_var; // Placer l'adresse de int_var dans int_ptr

    printf("int_ptr = 0x%08x\n", int_ptr);
    printf("&int_ptr = 0x%08x\n", &int_ptr);
    printf("*int_ptr = 0x%08x\n", *int_ptr);

    printf("int_var is located at 0x%08x and contains %d\n", &int_var, int_var);
}