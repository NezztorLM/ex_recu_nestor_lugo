#include <stdio.h>
#include <string.h>

void mostrar_caracteres(const char *palabra, char operador, int i) {
    if (palabra[i] == '\0') {
        printf("\n"); 
        return;
    }

    char caracter = palabra[i];
    if (operador == '+') {
        if (caracter >= 'a' && caracter <= 'z') {
            caracter -= 32; 
        }
    } else if (operador == '-') {
        if (caracter >= 'A' && caracter <= 'Z') {
            caracter += 32; 
        }
    }
    printf("%c", caracter);
    mostrar_caracteres(palabra, operador, i + 1); 
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf( "Error de argumentos\n");
        return 1; 
    }

    char operador = argv[1][0];
    const char *palabra = argv[2];

    mostrar_caracteres(palabra, operador, 0);

    return 0; 
}
