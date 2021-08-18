#include <stdio.h>
#include <string.h>

int main() {
    char str_a[20];                                 //Tableau de 20 caracteres
    char *pointer;                                  //Pointeur pour un tablau de caractere
    char *pointer2;                                 //Un seconde pointeur

    strcpy(str_a, "Hello world !\n");
    pointer = str_a;                                //fixer le premier pointeur au debut du tableau
    printf(pointer);

    pointer2 = pointer + 2;                         //fixer le second pointeur deux octets plus loint
    printf(pointer2);                               //affichage de pointeur2
    strcpy(pointer2, "\t pointer2 est ici !\n");    //copier la chaine désigné par le pointeur

    printf(pointer);                                //affiche pointeur a nouveau

}