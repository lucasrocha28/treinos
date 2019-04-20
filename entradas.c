#include <stdio.h>
#include <stdlib.h>
typedef enum { false, true } bool;
int main(){
	FILE *fp;
	char palavra[20];
	char tipo[20];
	char veiculo[20];
	char placa[20];
	char nome[20];
	char patente_graduacao_tipo[20];
	char hora[20];
	
	fp = fopen("entradas_e_saidas.txt", "a");
	if(fp == NULL){
		printf("Erro ao abrir arquivo.\n");
		system("pause");
		return 1;
	}
	printf("Digite a data de Hoje: ");
	scanf("%s", palavra);
	fprintf(fp, "\nData: %s\n", palavra);
	for(int i = 0; i < 32; i++){
		printf("Entrada-Saída de veículos\n");
		printf("Tipo - Entrada-Saída: ");
		scanf("%s", tipo);
		printf("Veiculo - Modelo-Cor-Tipo: ");
		scanf("%s", veiculo);
		printf("Placa - OHW-3505: ");
		scanf("%s", placa);
		printf("Nome - Joao-Silva-Oliveira: ");
		scanf("%s", nome);
		printf("Tipo de Autoridade - Oficial-Bm-Sgt-Pm-Civil-Gov: ");
		scanf("%s", patente_graduacao_tipo);
		printf("Horario - 22-33-Manha-Tarde: ");
		scanf("%s", hora);
		fprintf(fp,
		"\n------------------------\n
		Tipo: %s.\n
		Veiculo: %s.\n
		Placa: %s.\n
		Nome: %s.\n
		Patente/Graduacao: %s.\n
		Horario: %s.\n
		-------------------------\n\n"
		tipo, veiculo, placa, nome, 
		patente_graduacao_tipo, hora);
	}
	fclose(fp);
	return 0;
{
