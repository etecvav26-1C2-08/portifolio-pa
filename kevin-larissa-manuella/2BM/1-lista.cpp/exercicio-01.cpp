/*
 * Instituição: etecvav
 * Data: 27/05/2026
 * Autor: Larissa Mascoti
 * Descricao: Ler um número inteiro. Verificar e exibir se o número é primo.
 */
 #include <iostream>

 int main() {
     int numero, divisores = 0;
 
     printf("Digite um numero inteiro: ");
     scanf("%d", &numero);
 
     if (numero < 2) {
         printf("O numero %d não é primo.\n", numero);
         return 0;
     }
 
     // Testa divisores de 1 até numero
     for (int i = 1; i <= numero; i++) {
         if (numero % i == 0) {
             divisores++;
         }
     }
 
     if (divisores == 2) {
         printf("O numero %d é primo.\n", numero);
     } else {
         printf("O numero %d não eh primo.\n", numero);
     }
 
     return 0;
 }
 
