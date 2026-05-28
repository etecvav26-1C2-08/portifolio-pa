/*
 * Instituição: etecvav
 * Data: 23/05/2026
 * Autor: Kevin Willian
 * Descricao:Ler a quantidade de pessoas e ler a altura dessas pessoas. Calcular e exibir a
 * altura média de todas as pessoas.
 */
 #include <iostream>
 using namespace std;
 
 int main()
 {
     // Quantidade de pessoas
     int pessoas;
 
     // Altura de cada pessoa
     float altura;
 
     // Soma das alturas
     float soma = 0;
 
     // Média das alturas
     float media;
 
     // Lê a quantidade de pessoas
     cout << "Digite a quantidade de pessoas: ";
     cin >> pessoas;
 
     // Repete a leitura da altura para cada pessoa
     for(int i = 1; i <= pessoas; i++)
     {
         cout << "Digite a altura da pessoa " << i << ": ";
         cin >> altura;
 
         // Adiciona a altura à soma
         soma = soma + altura;
     }
 
     // Calcula a média das alturas
     media = soma / pessoas;
 
     // Mostra o resultado
     cout << "A altura media e: " << media << endl;
 
     return 0;
 }