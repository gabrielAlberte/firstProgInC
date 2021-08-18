#include <stdio.h>
int main() {

    printf("The 'int' \t\t data type is \t %d bytes \n", sizeof(int));
    printf("The 'unsigned int' \t data type is \t %d bytes \n", sizeof(unsigned int));

    printf("The 'short int' \t data type is \t %d bytes \n", sizeof(short int));
    printf("The 'long int' \t\t data type is \t %d bytes \n", sizeof(long int));
    printf("The 'long long int' \t data type is \t %d bytes \n", sizeof(long long int));

    printf("The 'float' \t\t data type is \t %d bytes \n", sizeof(float));
    printf("The 'char' \t\t data type is \t %d bytes \n", sizeof(char));
    
}