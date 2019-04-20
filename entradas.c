#include <stdio.h>
#include <stdlib.h>
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
	fclose(fp);
	for(int i = 0; i < 32; i++){
		fp = fopen("entradas_e_saidas.txt", "a");
		if(fp == NULL){
			printf("Erro ao abrir arquivo.\n");
			system("pause");
			return 1;
		}
		printf ("\n\nNovo veiculo.\n\n");
		printf("Entrada-Saída de veículos\n");
		printf("Tipo - Entrada-Saída: ");
		scanf("%s", tipo);
		printf("Veiculo: ");
		scanf("%s", veiculo);
		printf("Placa: ");
		scanf("%s", placa);
		printf("Nome: ");
		scanf("%s", nome);
		printf("Tipo de Autoridade: ");
		scanf("%s", patente_graduacao_tipo);
		printf("Horario: ");
		scanf("%s", hora);
		fprintf(fp,
		"\n------------------------\nTipo: %s.\nVeiculo: %s.\nPlaca: %s.\nNome: %s.\nPatente/Graduacao: %s.\nHorario: %s.\n-------------------------\n\n",
		tipo, veiculo, placa, nome, 
		patente_graduacao_tipo, hora);
		fclose(fp);
	}
	system("pause");
	return 0;
}
