#include <stdio.h>

int main(){
 printf("Cartas Super Trunfo!\n");

char Estado [50] = 'A';
char Código[50] = 'A', Carta;
char Nome, Cidade;
int População;
float Área;
float PIB;
int Número, Pontos, Turisticos;

printf("Digite seu Estado:\n");
scanf("%s", &Estado);

printf("Digite O Código da sua Carta:\n");
scanf("%s", &Código);

printf("Digite o nome da cidade:\n");
scanf("%s", &Nome);

printf("Digite à População:\n");
scanf("%d", &População);

printf("Digite à Área:\n");
scanf("%f", &Área);

printf("Digite o PIB:\n");
scanf("%f", &PIB);

printf("Digite quantos pontos turisticos:\n");
scanf("%d", &Número);


printf("Carta: %s - Estado: %s \n", Carta, Estado);
printf("Código: %s - Nome: %s \n", Código, Nome);
printf("População: %d - Área: %f \n",População, Área);
printf("PIb: %f - Número %s \n", PIB, Número);

return 0;




}
