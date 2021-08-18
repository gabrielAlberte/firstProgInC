#include <stdio.h>
#include <stdlib.h>

void usage(char *program_name){
    printf("Usage: %s <message> <# of times to repeat>\n", program_name);
    exit(1);
}

int main(int argc, char *argv[]) {
    int i, count;

    // Lorque moins de 3 arguments son passés,
    // afficher un message d'utilisation, puis quitter.
    if(argc < 3)
        usage(argv[0]);

    count = atoi(argv[2]); // Convertir le deuxieme argument en entier
    printf("Repeating %d times...\n", count);

    for(i=0; i < count; i++)
        printf("%3d - %s\n", i, argv[1]); // Afficher le premier argument
    

}