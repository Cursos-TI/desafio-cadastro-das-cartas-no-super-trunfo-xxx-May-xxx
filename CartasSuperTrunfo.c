# include <stdio.h>
int main () {
  
  char Estado;
  char Codigo[3];
  char Cidade[15];
  int Populacao;
  float Area;
  float PIB;
  int Pontos;
  
  char estado[1];
  char codigo[3];
  char cidade[15];
  int populacao;
  float area;
  float pib;
  int pontos;

//Declarei o estado como string de vetor 1 porque quando usava o especificador %c o codigo apresentava bugs\\
//C1\\

printf("Dados para Carta 1:\n");

printf("Insira uma letra de A a H:\n");
scanf("%c", &Estado);

printf("Insira um numero de 01 a 04:\n");
scanf("%s", &Codigo);

printf("Insira uma cidade:\n");
scanf("%s", &Cidade);

printf("Insira o numero populacional da cidade:\n");
scanf("%d", &Populacao);

printf("Insira a area em km da cidade:\n");
scanf("%f", &Area);

printf("Insira o PIB da cidade:\n");
scanf("%f", &PIB);

printf("Insira a quantidade de pontos turisticos da cidade:\n");
scanf("%i", &Pontos);

printf("\nCarta 1\n\n");

printf("Estado:%c\n", Estado);
printf("Código:%c%s\n", Estado,Codigo);
printf("Nome da Cidade:%s\n", Cidade);
printf("População:%d\n", Populacao);
printf("Área:%fkm²\n", Area);
printf("PIB:%f.\n", PIB);
printf("Numero de pontos turisticos:%i\n\n", Pontos);

//C2\\

printf("Dados para Carta 2:\n");

printf("Insira um numero de 01 a 04:\n");
scanf("%s", &codigo);

printf("Insira uma cidade:\n");
scanf("%s", &cidade);

printf("Insira o numero populacional da cidade:\n");
scanf("%d", &populacao);

printf("Insira a area em km da cidade:\n");
scanf("%f", &area);

printf("Insira o PIB da cidade:\n");
scanf("%f", &pib);

printf("Insira a quantidade de pontos turisticos da cidade:\n");
scanf("%i", &pontos);

printf("Insira uma letra de A a H:\n");
scanf("%s", &estado);

// Eu acabei colocando os comandos de exibicao c1 e c2 sepados, porque juntos o codigo travava, ai so Deus na causa\\

printf("\nCarta 2\n");

printf("Estado:%s\n", &estado);
printf("Código:%s%s\n", estado, codigo);
printf("Nome da Cidade:%s\n", cidade);
printf("População:%d\n", populacao);
printf("Área:%fkm²\n", area);
printf("PIB:%f.\n", pib);
printf("Numero de pontos turisticos:%i\n", pontos);

// Aqui eu repeti novamente os comandos de exibicao dos dados das cartas para que eles aparecessem juntos :) \\

printf("\n\nCARTAS\n\n");

printf("\nCarta 1\n");

printf("Estado:%c\n", Estado);
printf("Código:%c%s\n", Estado,Codigo);
printf("Nome da Cidade:%s\n", Cidade);
printf("População:%d\n", Populacao);
printf("Área:%fkm²\n", Area);
printf("PIB:%f.\n", PIB);
printf("Numero de pontos turisticos:%i\n\n", Pontos);

printf("\nCarta 2\n");

printf("Estado:%s\n", estado);
printf("Código:%s%s\n", estado, codigo);
printf("Nome da Cidade:%s\n", cidade);
printf("População:%d\n", populacao);
printf("Área:%fkm²\n", area);
printf("PIB:%f.\n", pib);
printf("Numero de pontos turisticos:%i\n", pontos);

return 0;
}
