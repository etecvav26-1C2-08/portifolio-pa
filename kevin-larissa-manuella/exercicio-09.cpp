/*
 * Instituição: etecvav
 * Data: 27/05/2026
 * Autor: Manuella Salvador
 * Descricao: Leia um número entre 50 e 100. Exibir a sequência de
 * Fibonacci até esse número.
 */

 #include <iostream>
 using namespace std;
 
 //declarando a variavél de limite
 int main() {
     int limite;
 
 //perguntando e lendo o numero
     cout << "Digite um numero entre 50 e 100: ";
     cin >> limite;
 
 //colocando a condição de limite de valor e oque fazer se ultrapassar esse limite
     if (limite < 50 || limite > 100) {
         cout << "Numero invalido" << endl;
         return 0;
     }
 
 //declarando o valor das variáveis
     int a = 0, b = 1;
 
     cout << a << " " << b << " ";
 
 //raciocinio da conta feita, exibindo a sequência e indicando quando acabar ela
     while (true) {
         int c = a + b;
 
         if (c > limite) {
             break;
         }
 
         cout << c << " ";
 
         a = b;
         b = c;
     }
 
 
     return 0;
 }