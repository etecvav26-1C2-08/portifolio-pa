/*
 * Instituição: etecvav
 * Data: 27/05/2026
 * Autor: Larissa Mascoti
 * Descricao:Ler o sexo e a altura.
 */
 #include <iostream>
 // Função masculino
 float pesoMasculino(float altura) {
     return (72.7 * altura) - 58;
 }
 
 // Função feminino
 float pesoFeminino(float altura) {
     return (62.1 * altura) - 44.7;
 }
 
 int main() {
     char sexo;
     float altura;
 
     printf("Digite o sexo : ");
     scanf("%c", &sexo);
 
     printf("Digite a altura: ");
     scanf("%f", &altura);
 
     if (sexo == 'M' || sexo == 'm') {
         printf("Peso ideal = %.2f\n", pesoMasculino(altura));
     } else if (sexo == 'F' || sexo == 'f') {
         printf("Peso ideal = %.2f\n", pesoFeminino(altura));
     } else {
         printf("Sexo invalido.\n");
     }
 
     return 0;
 }
 