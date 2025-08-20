#include <stdio.h>

float idade;
char nome[8] = "Calliel"; // Basicamente String são um array de characteres
char sexo = 'M';
bool casado = 1;

int main( void ) { // declarando uma função em C
    idade = 25.5;
    printf("Nome: %s\n", nome);
    printf("Idade: %.2f\n", idade);
    printf("Sexo: %c\n", sexo);
    printf("Casado: %d\n", casado);
    return 0;
}

