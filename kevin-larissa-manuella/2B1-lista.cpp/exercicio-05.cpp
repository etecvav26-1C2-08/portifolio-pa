/*
 * Instituição: etecvav
 * Data: 27/05/2026
 * Autor: Kevin William
 * Descricao: Ler um número para a parada final e outro número que representa um múltiplo.
 * Exibir os múltiplos do número lido de 1 até o número final lido.
 */
 #include <iostream>
 using namespace std;
 
 int main() {
      int final, multiplo;
 //variaveis
 
     cout << "Digite o numero final: ";
 //digita "Digite o numero final:"
 
     cin >> final;
     
     cout << "Digite o multiplo: ";
 //digita "Digite o multiplo:"
     
     cin >> multiplo;
 //leitura dos valores
 
     cout << "Multiplos encontrados: " << endl;
 //digita "Multiplos encontrados:"
     
     for(int i = 1; i <= final; i++) {
         if(i % multiplo == 0) {
             cout << i << endl;
         }
     }
 
     return 0;
 }
