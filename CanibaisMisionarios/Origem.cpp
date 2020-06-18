#include <stdio.h>

int ecanibais, emissionarios;
int dcanibais = 3, dmissionarios = 3;
int barco;
int num1, num2;

void rio();
void regras();

void rio() {
	printf_s("%d Canibais %d Missionarios | --------cx----cx-------RIO------cx---cx----| %d Canibais e %d Missionarios\n\n", dcanibais, dmissionarios, ecanibais, emissionarios);
}

void regras() {
	printf_s("Ajude os 3 canibais e 3 missionarios atravessarem o rio.\n");
	printf_s(":::::::::::REGRAS:::::::::::\n");
	printf_s("1 - Nao deixe os canibais em maior numero junto dos missionarios em nenhum dos lados senao eles comem os missionarios\n");
	printf_s("2 - O barco deve ter pelo menos 1 passageiro para se locomover!!!\n");
	printf_s("Let the games begin!!!\n");
	printf_s("Pressione qualquer tecla para continuar!!!\n");
	getchar();
}

int main(){
	
	int boltdireita = 1;
	int boltesquerda = 0;
	regras();
	rio();
	do {
		printf_s("\n\nEscolha de passageiros:\n");
		printf_s("\n\nBarco no lado Direito\n");
		printf_s("Digite para colocar no barco:\n");
		printf_s("|Missionario ------------- 1|\n");
		printf_s("|Canibal------------- 2|\n");
		printf_s("|Ninguem------------- 3|\n");
		do {
			do {
				do {
					num1 = 0;
					num2 = 0;
					while (num1 < 1 || num1>3) {
						printf_s("\n\nPrimeira opcao:\n");
						scanf_s("%d", &num1);
						if (num1 < 1 || num1>3) {
							printf_s("Opcao invalida, digite novamente:\n");
						}
					}
					while (num2 < 1 || num2>3) {
						printf_s("\n\nSegunda opção:\n");
						scanf_s("%d", &num2);
						if (num2 < 1 || num2>3) {
							printf_s("Opcao invalida, digite novamente:\n");
						}
					}


					if (num1 == 3 && num2 == 3) {
						printf_s("Pelo menos um passageiro deve estar no barco para remar\n");
					}

				} while (num1 == 3 && num2 == 3);

				if (num1 == 2) {
					dcanibais--;
					ecanibais++;
					barco++;
				}
				else if (num1 == 1) {
					dmissionarios--;
					emissionarios++;
				}
				if (num2 == 2) {
					dcanibais--;
					ecanibais++;
				}
				else if (num2 == 1) {
					dmissionarios--;
					emissionarios++;
				}
			} while (dmissionarios < 0 || dmissionarios>3);
		} while (dcanibais < 0 || dcanibais>3);
		if (emissionarios > 0) {
			if (ecanibais > emissionarios) {
				rio();
				printf_s("OHHHHH NOOOO GAME OVERRRR FATALITYYYYY!!!!\n");

				break;
			}
			if (dmissionarios > 0) {
				if (dcanibais > dmissionarios) {
					rio();
					printf_s("OHHHHH NOOOO GAME OVERRRR FATALITYYYYY!!!!\n");

					break;
				}
			}
		}
		rio();
		num1 = 0;
		num2 = 0;

		printf_s("\n\nEscolha de passageiros:\n");
		printf_s("\n\nBarco no lado Esquerdo\n");
		printf_s("Digite para colocar no barco:\n");
		printf_s("Missionario ------------- 1\n");
		printf_s("Canibal------------- 2\n");
		printf_s("Ninguem------------- 3\n");
		do {
			do {
				do {
					num1 = 0;
					num2 = 0;
					while (num1 < 1 || num1>3) {
						printf_s("\n\nPrimeira opcao:\n");
						scanf_s("%d", &num1);
						if (num1 < 1 || num1>3) {
							printf_s("Opcao invalida, digite novamente:\n");
						}
					}
					while (num2 < 1 || num2>3) {
						printf_s("\n\Segunda opcao:\n");
						scanf_s("%d", &num2);
						if (num2 < 1 || num2>3) {
							printf_s("Opcao invalida, digite novamente:\n");
						}
					}
					if (num1 == 3 && num2 == 3) {
						printf_s("Pelo menos um passageiro deve estar no barco para remar\n");
					}
				} while (num1 == 3 && num2 == 3);
				if (num1 == 2) {
					ecanibais--;
					dcanibais++;
				}
				else if (num1 == 1) {
					emissionarios--;
					dmissionarios++;
				}
				if (num2 == 2) {
					ecanibais--;
					dcanibais++;
				}
				else if (num2 == 1) {
					emissionarios--;
					dmissionarios++;
				}
			} while (emissionarios < 0 || emissionarios>3);
		} while (ecanibais < 0 || ecanibais>3);
		if (emissionarios > 0) {
			if (ecanibais > emissionarios) {
				rio();
				printf_s("OHHHHH NOOOO GAME OVERRRR FATALITYYYYY!!!!\n");

				break;
			}
			if (dmissionarios > 0) {
				if (dcanibais > dmissionarios) {
					rio();
					printf_s("OHHHHH NOOOO GAME OVERRRR FATALITYYYYY!!!!\n");

					break;
				}
			}
		}
		rio();
		num1 = 0;
		num2 = 0;

	} while ((ecanibais + emissionarios) != 6);
	if (ecanibais == 3 && emissionarios == 3) {
		printf_s("YOU WINNNN CONGRATS YOUR SON OF BE*@#!!!");
	}
	getchar();
	getchar();

	return 1;
}
