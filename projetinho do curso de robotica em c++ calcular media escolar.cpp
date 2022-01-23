
#include <iostream>
int main()
{
  float n1;
  float n2;
  float n3;
  float media;

  
  printf("digite a primeira nota:");
  scanf("%f", &n1);
  printf("digite a segunda nota:");
  scanf("%f", &n2);
  printf("digite a terceira nota");
  scanf("%f", &n3);
  media = ( n1 + n2 + n3) / 3;
 
  
  if(media > 6){
      printf("o valor da média foi: %.1f", media);
      printf("\nsituação do aluno:aprovado!");
 }else{
     printf("o valor da média foi: %.1f", media);
      printf("\nsituação do aluno:reprovado!");
  }
  
    return 0;
}
