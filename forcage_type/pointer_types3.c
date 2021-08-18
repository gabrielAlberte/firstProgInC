#include <stdio.h>

int main() {
    int i;
    char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
    int int_array[5] = {1, 2, 3, 4, 5};

    char *char_pointer;
    int *int_pointer;

    char_pointer = char_array;
    int_pointer = int_array;

    //forcer le type de données dans celui du pointer
    char_pointer = (char *) int_array; 
    int_pointer = (int *) char_array; 

    //Parcourir le tableau d'entier avec int_pointer 
    for(i=0; i < 5; i++){
        printf("[integer pointer] points to %p, which contains the char '%c'\n", int_pointer, *int_pointer);
        int_pointer = int_pointer + 1;
        int_pointer = (int *) ((char *) int_pointer + 1);
    }

    //Parcourir le tableau de caractères avec char_pointer 
    for(i=0; i < 5; i++){
        printf("[char pointer] points to %p, which contains the integer '%d'\n", char_pointer, *char_pointer);
        char_pointer = char_pointer + 1;
        char_pointer = (char *) ((int *) char_pointer + 1);
    }

}