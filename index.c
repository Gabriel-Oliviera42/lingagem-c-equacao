#include <stdio.h>
#include <math.h>

int main() {
  system ("clear");
  
  float A, B, C, Delta, x1, x2;
  
  printf("Digite o valor de A: ");
  scanf("%f", &A);

  printf("Digite o valor de B: ");
  scanf("%f", &B);

  printf("Digite o valor de C: ");
  scanf("%f", &C);

  system ("clear");

  Delta = (B * B) - (4 * A * C); //preparando o basico

  if (Delta < 0) { // se delta for menor que 0, a equação não tem raiz real
      printf("A equacao nao possui raizes reais.\n");} 
  else 
    if (Delta == 0) { // para for = a 0 a equação tem apenas uma raiz
      x1 = -B / (2 * A);
      printf("A equacao possui apenas uma raiz: %lf\n", x1);} 
    else { // se não a equação tem duas raizes
      x1 = (-B + sqrt(Delta)) / (2 * A); // sqrt é o comando da biblioteca math.h para pedir a raiz em ()
      x2 = (-B - sqrt(Delta)) / (2 * A);
      printf("As raizes da equacao sao: %lf e %lf\n", x1, x2);
    }

  return 0;
}