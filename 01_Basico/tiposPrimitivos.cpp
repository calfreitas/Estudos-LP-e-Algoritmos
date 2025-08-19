#include <stdio.h>

int a = 5;

int b = 3;

int main(void) {

    int soma = a + b;
    printf("A soma dos elementos a = %d e b = %d resultam em: %d\n\n", a, b, soma);

    int subtracao = b - a;
    printf("A subtracao dos elementos b = %d e a = %d resultam em: %d\n\n", b, a, subtracao);

    int multiplicacao = b * a;
    printf("A multiplicacao dos elementos b = %d e a = %d resultam em: %d\n\n", b, a, multiplicacao);

    float divisao = (float)b/a;
    printf("A Divisao dos elementos b = %d e a = %d resultam em: %.2f\n\n", b, a, divisao);

    int resto = a % b;
    printf("O Resto dos elementos a = %d e b = %d resultam em: %d\n\n", a, b, resto);

    a++;
    printf("Teste de incremento: %d\n\n", a);

    b--;
    printf("Teste de decaimento: %d\n\n", b);

    return 0;
};

