/*
 * Instituição: etecvav
 * Data: 27/05/2026
 * Autor: Manuella Salvador
 * Descricao:Leia um número. Exiba a soma de todos os números pares
 * e ímpares de zero até o número lido.
 */
 #include <iostream>

 using namespace std;
 
 //declarando as variavéis 
 int main() {
     int numero;
     int somapares = 0, somaimpares = 0;
 
 //perguntando e lendo o número inteiro
     cout << "Digite um numero inteiro: ";
     cin >> numero;
 
 //criando o ciclo de repetição
     for(int i = 0; i <= numero; i++) {
         if(i % 2 == 0) {
             somapares += i;
         } else {
             somaimpares += i;
         }
     }
 
 //exibindo a soma dos numeros pares e impares
     cout << "Soma dos numeros pares: " << somapares << endl;
     cout << "Soma dos numeros impares: " << somaimpares << endl;
 
     return 0;
 }