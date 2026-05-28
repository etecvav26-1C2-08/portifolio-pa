/*
 * Instituição: etecvav
 * Data: 27/05/2026
 * Autor: Larrisa Santos
 * Descricao: Ler 10 números. Verificar e exibir o menor e maior número dessa sequência.
 */
 #include <iostream>
 int main() {
     int numero;
     int menor, maior;
     int i;
 
     // Lê o primeiro número
     printf("Digite o 1 numero: ");
     scanf("%d", &numero);
 
     // Inicializa menor e maior com o primeiro valor
     menor = numero;
     maior = numero;
 
     // Lê os outros 9 números
     for (i = 2; i <= 10; i++) {
         printf("Digite o %d numero: ", i);
         scanf("%d", &numero);
 
         // Verifica menor
         if (numero < menor) {
             menor = numero;
         }
 
         // Verifica maior
         if (numero > maior) {
             maior = numero;
         }
     }
 
     // Exibe os resultados
     printf("\nMenor numero = %d\n", menor);
     printf("Maior numero = %d\n", maior);
 
     return 0;
 }
 
 