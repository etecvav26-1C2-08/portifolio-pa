/*
 * Instituição: etecvav
 * Data: 23/05/2026
 * Autor: Kevin Willian
 * Descricao:Ler vários números até que a soma desses números seja maior que 100. Exibir a
 * multiplicação dos números lidos.
 */
 #include <iostream>
 using namespace std;
 
 int main()
 {
  // Variáveis do programa
     int numero;
     int soma = 0;
     int multiplicacao = 1;
 
 // Continua enquanto a soma for menor ou igual a 100
     while (soma <= 100)
     {
 // Pede um número ao usuário
         cout << "Digite um numero: ";
         cin >> numero;
 
 // Soma o número digitado à soma total
         soma = soma + numero;
 
 // Multiplica o número digitado ao resultado acumulado
         multiplicacao = multiplicacao * numero;
     }
 
 // Mostra o resultado final da multiplicação
     cout << "Resultado da multiplicacao: " << multiplicacao << endl;
 
     return 0;
 }