/*
 * Instituição: etecvav
 * Data: 27/05/2026
 * Autor: Larissa Mascoti
 * Descricao: Ler a base e o expoente.
 */
#include <iostream>

// Função para calcular potência
int potencia(int base, int expoente) {
    int resultado = 1;
    int i;

    for (i = 1; i <= expoente; i++) {
        resultado = resultado * base;
    }

    return resultado;
}

int main() {
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    printf("Resultado = %d\n", potencia(base, expoente));

    return 0;
}
