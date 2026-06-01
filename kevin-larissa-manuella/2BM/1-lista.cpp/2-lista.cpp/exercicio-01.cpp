/*
 * Instituição: etecvav
 * Data: 27/05/2026
 * Autor: Larissa Mascoti
 * Descricao: Ler um número inteiro.
 */
#include <iostream>

// Função que verifica se o número é ímpar
int ehImpar(int numero) {
    if (numero % 2 != 0) {
        return 1; // verdadeiro
    } else {
        return 0; // falso
    }
}

int main() {
    int numero, i;
    int soma = 0;

    // Leitura do número
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Soma dos números ímpares até o número informado
    for (i = 1; i <= numero; i++) {
        if (ehImpar(i)) {
            soma = soma + i;
        }
    }

    // Exibe o resultado
    printf("Soma dos numeros impares = %d\n", soma);

    return 0;
}
