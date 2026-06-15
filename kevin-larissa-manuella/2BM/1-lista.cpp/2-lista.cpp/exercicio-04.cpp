/*
 * Instituição: etecvav
 * Data: 27/05/2026
 * Autor: Larissa Mascoti
 * Descricao:Ler dois números inteiros e calcular:
 * Adição
 * Subtração
 * Multiplicação
 * Divisão
 */
 #include <iostream>

 int main() {
     
     int num[20], i;  
     
     for(i=0; i < 20; i++){ //Enquanto não for digitado 20 num.:
         
         std::cout << "\n digite um número: ";   //Pede outro num.
         std::cin >> num[i];
     }
     
     for(i=0; i < 20; i++){  //Verifica se é menor que 0 (negativo)
         if (num[i] < 0){
             std::cout << "\n O indice do primeiro numero negativo é: " << i + 1 << std::endl;
             break;
         }
     }
 
     return 0;
 }
