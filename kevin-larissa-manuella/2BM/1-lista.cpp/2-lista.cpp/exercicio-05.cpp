/*
 * Instituição: etecvav
 * Data: 27/05/2026
 * Autor: Larissa Mascoti
 * Descricao:  Ler uma palavra.
 * Verificar se é palíndromo.
 */
#include <iostream>

// Função que verifica palíndromo
int ehPalindromo(char palavra[]) {
    int inicio = 0;
    int fim = strlen(palavra) - 1;

    while (inicio < fim) {
        if (palavra[inicio] != palavra[fim]) {
            return 0;
        }

        inicio++;
        fim--;
    }

    return 1;
}

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    if (ehPalindromo(palavra)) {
        printf("É palindromo.\n");
    } else {
        printf("Não é palindromo.\n");
    }

    return 0;
}
