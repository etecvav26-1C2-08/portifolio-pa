/*
 * Instituição: etecvav
 * Data: 27/05/2026
 * Autor: Larissa Mascoti
 * Descricao: Ler um número.
 * Exibir o dia da semana correspondente.
 */
#include <iostream>

// Função para retornar o dia
void diaSemana(int numero) {
    switch(numero) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terca-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sabado\n");
            break;
        default:
            printf("Numero invalido.\n");
    }
}

int main() {
    int numero;

    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &numero);

    diaSemana(numero);

    return 0;
}
