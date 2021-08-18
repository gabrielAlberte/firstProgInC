#include <stdio.h>

int main() {
    int a, b;
    float c, d;

    a = 13;
    b = 5;

    c = a / b;                  //Division d'entier 
    d = (float) a / (float) b;  //Division d'entiers convertis en floattants

    printf("[integers]\t a = %d\t\t b = %d\n", a, b);
    printf("[floats]\t c = %f\t d = %f\n", c, d);

}