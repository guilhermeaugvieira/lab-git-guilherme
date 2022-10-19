#include<stdio.h>
#include<math.h>

void somatoria(int x, int y){
  int i;
  long int soma = 0;

  for(i = x; i < y; i += 1){
    soma = soma + 1;
  }
}


int main(void){
  int x = 0, y = 0;
  
  printf("\n\n :::::::: INICIO DO PROGRAMA ::::::::");

  printf("Digite o numero x: ");
  scanf("%d", &x);

  printf("Digite o numero x: ");
  scanf("%d", &y);

  somatoria(x, y);
  
  return 0;
};