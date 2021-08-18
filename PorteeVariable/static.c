#include <stdio.h>

void function(){ //exemple de fonction, avec son propre context
    int var = 5;
    static int static_var = 5; // initialisation d'une variable statique.

    printf("\t [in function] var = %d\n", var);
    printf("\t [in function] static_var = %d\n", static_var);
    var++; // ajoute 1 à 'var'
    static_var++; // ajoute 1 à 'static_var'
}

int main() {
    int i;
    static int static_var = 1337; // une autre varable static dans un context different

    for(i=0; i < 5; i++) {
        printf("[in main] static_var = %d\n", static_var);
        function(); // Appeler la function
    }

}