/*
 * Instituição: etecvav
 * Data: 27/05/2026
 * Autor: Larissa Mascoti
 * Descricao:) Ler 5 números.
 * Verificar se estão:
 * Em ordem crescente
 * Em ordem decrescente
 * Não ordenados
 */
#include <iostream>
// Função de análise
void verificarOrdem(int v[]) {
    int crescente = 1;
    int decrescente = 1;
    int i;

    for (i = 0; i < 4; i++) {

        if (v[i] > v[i + 1]) {
            crescente = 0;
        }

        if (v[i] < v[i + 1]) {
            decrescente = 0;
        }
    }

    if (crescente) {
        printf("Ordem crescente.\n");
    } else if (decrescente) {
        printf("Ordem decrescente.\n");
    } else {
        printf("NÃo ordenados.\n");
    }
}

int main() {
    int numeros[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    verificarOrdem(numeros);

    return 0;
}
