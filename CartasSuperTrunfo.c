#include <stdio.h>

int main(){
char estadoA[5], estadoB[5];
char codA[3], codB[3];
char nomeA[30], nomeB[30];
int populacaoA, populacaoB;
float areaA, areaB;
float pibA, pibB;
int turismoA, turismoB;


printf("Digite o Estado da Carta A: \n");
scanf("%s",estadoA);

printf("Digite o Código da Carta A: \n");
scanf("%s",codA);

printf("Digite o nome da cidade da Carta A: \n");
scanf("%s",nomeA);

printf("Digite a população da Carta A: \n");
scanf("%d",&populacaoA);

printf("Digite a área da Carta A: \n");
scanf("%f",&areaA);

printf("Digite o PIB da Carta A: \n");
scanf("%f",&pibA);

printf("Dgite a quantidade de pontos turisticos que existem na Carta A: \n");
scanf("%d",&turismoA);


printf("Digite o Estado da Carta B: \n");
scanf("%s",estadoB);

printf("Digite o Código da Carta B: \n");
scanf("%s",codB);

printf("Digite o nome da cidade da Carta B: \n");
scanf("%s",nomeB);

printf("Digite a população da Carta B: \n");
scanf("%d",&populacaoB);

printf("Digite a área da Carta B: \n");
scanf("%f",&areaB);

printf("Digite o PIB da Carta B: \n");
scanf("%f",&pibB);

printf("Dgite a quantidade de pontos turisticos que existem na Carta B: \n");
scanf("%d",&turismoB);







printf("CARTA A \n");
printf("Código: %s.\n",codA);
printf("Nome: %s.\n",nomeA);
printf("População: %d habitantes.\n",populacaoA);
printf("Área: %.2f km².\n",areaA);
printf("PIB: %.2f. \n",pibA);
printf("Quantidade de pontos turisticos: %d.\n",turismoA);

printf("-------------------------------------\n");
printf("CARTA B \n");
printf("Código: %s.\n",codB);
printf("Nome: %s.\n",nomeB);
printf("População: %d habitantes.\n",populacaoB);
printf("Área: %.2f km².\n",areaB);
printf("PIB: %f. \n",pibB);
printf("Quantidade de pontos turisticos: %d.\n",turismoB);














return 0;

}