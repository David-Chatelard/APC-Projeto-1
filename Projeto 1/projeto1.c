/**
 *	      @file: trabalho01.c
 *	    @author: David Fanchic Chatelard
 *		@matrícula: 180138863
 *	@disciplina: Algoritmos e Programacao de Computadores
 *	O programa consiste em um processo seletivo de estágio na NASA
 *	composto por 3 etapas. A primeira etapa é um questionário com 10 
 *	questões sobre temas relacionados com computação. A segunda etapa
 *	é um jogo de pedra, papel ou tesoura, com 5 rodadas contra a máquina.
 *	Por último a terceira etapa é uma partida do jogo dos dedos contra a 
 *	máquina.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

int verifica_nome(char *nome){
	int i, cont=0, len;
	len = strlen(nome);
	for (i =0; nome[i] != '\0'; i++){
		if ((isalpha(nome[i])) || (isspace(nome[i]))){
			cont++;
			if (cont == len){
				return 1;
			}
		}
	}
	return 0;
}

int etapa1(int pontos){
	char resposta;
	int certas = 0, erradas = 0, teste = 0;
	pontos = 0;
	printf("A sua pontuação atual é de: %d ponto(s).\n", pontos);
	printf("Para responder as perguntas digite somente a letra da opção que você considera ser a correta.\n");

	printf("Pergunta 1: ");
	printf("Qual é o nome da primeira calculadora da história?\n");
	printf("Opção A: Calculadora;\n");
	printf("Opção B: Ábaco;\n");
	printf("Opção C: Cálculo;\n");
	printf("Opção D: Calculare.\n");
	do{
		printf("Qual a sua resposta? ");
		scanf(" %c", &resposta);
		teste = 0;
		while (getchar() != '\n')
			teste++;
		if ((teste != 0) || (tolower(resposta) > 'd') || (tolower(resposta) < 'a')){
			printf("Digite uma resposta válida!!(A, B, C ou D)\n");
		}
		else{
			break;
		}
	} while(1);
	if ((resposta == 'B') || (resposta == 'b')){
		pontos += 2;
		certas++;
		erradas = 0;
		printf("Você acertou a questão.\n");
	}
	else{
		erradas++;
		certas = 0;
		printf("Você errou a questão.\n");
		printf("A opção correta é a opção B.\n");
	}
	printf("A sua pontuação atual é de: %d ponto(s).\n", pontos);
	printf("Pressione ENTER para ir para a próxima questão...");
	while (getchar() != '\n');
	system("clear");

	printf("Pergunta 2: ");
	printf("Quem criou o primeiro compilador?\n");
	printf("Opção A: Alan Turing;\n");
	printf("Opção B: Ada Lovelace;\n");
	printf("Opção C: Charles Babbage;\n");
	printf("Opção D: Grace Hopper.\n");
	do{
		printf("Qual a sua resposta? ");
		scanf(" %c", &resposta);
		teste = 0;
		while (getchar() != '\n')
			teste++;
		if ((teste != 0) || (tolower(resposta) > 'd') || (tolower(resposta) < 'a')){
			printf("Digite uma resposta válida!!(A, B, C ou D)\n");
		}
		else{
			break;
		}
	} while(1);
	if ((resposta == 'D') || (resposta == 'd')){
		pontos += 2;
		certas++;
		erradas = 0;
		printf("Você acertou a questão.\n");
	}
	else{
		erradas++;
		certas = 0;
		printf("Você errou a questão.\n");
		printf("A opção correta é a opção D.\n");
	}
	printf("A sua pontuação atual é de: %d ponto(s).\n", pontos);
	printf("Pressione ENTER para ir para a próxima questão...");
	while (getchar() != '\n');
	system("clear");

	printf("Pergunta 3: ");
	printf("Qual é o objetivo do teste de Turing?\n");
	printf("Opção A: Saber se você está trocando mensagens com uma pessoa ou uma máquina;\n");
	printf("Opção B: Testar a velocidade de processamento da máquina;\n");
	printf("Opção C: Conferir se a máquina está funcionando sem bugs;\n");
	printf("Opção D: Testar a capacidade de armazenamento da máquina.\n");
	do{
		printf("Qual a sua resposta? ");
		scanf(" %c", &resposta);
		teste = 0;
		while (getchar() != '\n')
			teste++;
		if ((teste != 0) || (tolower(resposta) > 'd') || (tolower(resposta) < 'a')){
			printf("Digite uma resposta válida!!(A, B, C ou D)\n");
		}
		else{
			break;
		}
	} while(1);
	if ((resposta == 'A') || (resposta == 'a')){
		pontos += 2;
		certas++;
		erradas = 0;
		printf("Você acertou a questão.\n");
	}
	else{
		erradas++;
		certas = 0;
		printf("Você errou a questão.\n");
		printf("A opção correta é a opção A.\n");
	}
	if (certas == 3){
		pontos += 3;
		certas = 0;
		printf("Por ter acertado 3 questões seguidas você ganhou mais 3 pontos.\n");
	}
	if (erradas == 3){
		pontos -= 2;
		erradas = 0;
		printf("Por ter errado 3 questões seguidas você perdeu 2 pontos.\n");
	}
	printf("A sua pontuação atual é de: %d ponto(s).\n", pontos);
	printf("Pressione ENTER para ir para a próxima questão...");
	while (getchar() != '\n');
	system("clear");

	printf("Pergunta 4: ");
	printf("Quem ficou conhecido(a) como o(a) primeiro(a) programador(a)?\n");
	printf("Opção A: Herman Hollerith;\n");
	printf("Opção B: Alan Turing;\n");
	printf("Opção C: Ada Lovelace;\n");
	printf("Opção D: Charles Xavier Thomas.\n");
	do{
		printf("Qual a sua resposta? ");
		scanf(" %c", &resposta);
		teste = 0;
		while (getchar() != '\n')
			teste++;
		if ((teste != 0) || (tolower(resposta) > 'd') || (tolower(resposta) < 'a')){
			printf("Digite uma resposta válida!!(A, B, C ou D)\n");
		}
		else{
			break;
		}
	} while(1);
	if ((resposta == 'C') || (resposta == 'c')){
		pontos += 2;
		certas++;
		erradas = 0;
		printf("Você acertou a questão.\n");
	}
	else{
		erradas++;
		certas = 0;
		printf("Você errou a questão.\n");
		printf("A opção correta é a opção C.\n");
	}
	if (certas == 3){
		pontos += 3;
		certas = 0;
		printf("Por ter acertado 3 questões seguidas você ganhou mais 3 pontos.\n");
	}
	if (erradas == 3){
		pontos -= 2;
		erradas = 0;
		printf("Por ter errado 3 questões seguidas você perdeu 2 pontos.\n");
	}
	printf("A sua pontuação atual é de: %d ponto(s).\n", pontos);
	printf("Pressione ENTER para ir para a próxima questão...");
	while (getchar() != '\n');
	system("clear");

	printf("Pergunta 5: ");
	printf("Qual é o nome primeiro computador eletromecânico?\n");
	printf("Opção A: ENIAC;\n");
	printf("Opção B: Z1;\n");
	printf("Opção C: Máquina de Turing;\n");
	printf("Opção D: Z0.\n");
	do{
		printf("Qual a sua resposta? ");
		scanf(" %c", &resposta);
		teste = 0;
		while (getchar() != '\n')
			teste++;
		if ((teste != 0) || (tolower(resposta) > 'd') || (tolower(resposta) < 'a')){
			printf("Digite uma resposta válida!!(A, B, C ou D)\n");
		}
		else{
			break;
		}
	} while(1);
	if ((resposta == 'B') || (resposta == 'b')){
		pontos += 2;
		certas++;
		erradas = 0;
		printf("Você acertou a questão.\n");
	}
	else{
		erradas++;
		certas = 0;
		printf("Você errou a questão.\n");
		printf("A opção correta é a opção B.\n");
	}
	if (certas == 3){
		pontos += 3;
		certas = 0;
		printf("Por ter acertado 3 questões seguidas você ganhou mais 3 pontos.\n");
	}
	if (erradas == 3){
		pontos -= 2;
		erradas = 0;
		printf("Por ter errado 3 questões seguidas você perdeu 2 pontos.\n");
	}
	printf("A sua pontuação atual é de: %d ponto(s).\n", pontos);
	printf("Pressione ENTER para ir para a próxima questão...");
	while (getchar() != '\n');
	system("clear");

	printf("Pergunta 6: ");
	printf("Quais as duas arquiteturas de computadores mais conhecidas?\n");
	printf("Opção A: Harvard e Turing;\n");
	printf("Opção B: Von Neumann e Hopper;\n");
	printf("Opção C: Harvard e Von Neumann;\n");
	printf("Opção D: Turing e Hopper.\n");
	do{
		printf("Qual a sua resposta? ");
		scanf(" %c", &resposta);
		teste = 0;
		while (getchar() != '\n')
			teste++;
		if ((teste != 0) || (tolower(resposta) > 'd') || (tolower(resposta) < 'a')){
			printf("Digite uma resposta válida!!(A, B, C ou D)\n");
		}
		else{
			break;
		}
	} while(1);
	if ((resposta == 'C') || (resposta == 'c')){
		pontos += 2;
		certas++;
		erradas = 0;
		printf("Você acertou a questão.\n");
	}
	else{
		erradas++;
		certas = 0;
		printf("Você errou a questão.\n");
		printf("A opção correta é a opção C.\n");
	}
	if (certas == 3){
		pontos += 3;
		certas = 0;
		printf("Por ter acertado 3 questões seguidas você ganhou mais 3 pontos.\n");
	}
	if (erradas == 3){
		pontos -= 2;
		erradas = 0;
		printf("Por ter errado 3 questões seguidas você perdeu 2 pontos.\n");
	}
	printf("A sua pontuação atual é de: %d ponto(s).\n", pontos);
	printf("Pressione ENTER para ir para a próxima questão...");
	while (getchar() != '\n');
	system("clear");

	printf("Pergunta 7: ");
	printf("A partir de qual década começaram a ser vendidos os computadores pessoais?\n");
	printf("Opção A: 1960;\n");
	printf("Opção B: 1970;\n");
	printf("Opção C: 1980;\n");
	printf("Opção D: 1990.\n");
	do{
		printf("Qual a sua resposta? ");
		scanf(" %c", &resposta);
		teste = 0;
		while (getchar() != '\n')
			teste++;
		if ((teste != 0) || (tolower(resposta) > 'd') || (tolower(resposta) < 'a')){
			printf("Digite uma resposta válida!!(A, B, C ou D)\n");
		}
		else{
			break;
		}
	} while(1);
	if ((resposta == 'B') || (resposta == 'b')){
		pontos += 2;
		certas++;
		erradas = 0;
		printf("Você acertou a questão.\n");
	}
	else{
		erradas++;
		certas = 0;
		printf("Você errou a questão.\n");
		printf("A opção correta é a opção B.\n");
	}
	if (certas == 3){
		pontos += 3;
		certas = 0;
		printf("Por ter acertado 3 questões seguidas você ganhou mais 3 pontos.\n");
	}
	if (erradas == 3){
		pontos -= 2;
		erradas = 0;
		printf("Por ter errado 3 questões seguidas você perdeu 2 pontos.\n");
	}
	printf("A sua pontuação atual é de: %d ponto(s).\n", pontos);
	printf("Pressione ENTER para ir para a próxima questão...");
	while (getchar() != '\n');
	system("clear");

	printf("Pergunta 8: ");
	printf("Existiram quantas gerações durante a evolução dos computadores?\n");
	printf("Opção A: 2;\n");
	printf("Opção B: 3;\n");
	printf("Opção C: 4;\n");
	printf("Opção D: 5.\n");
	do{
		printf("Qual a sua resposta? ");
		scanf(" %c", &resposta);
		teste = 0;
		while (getchar() != '\n')
			teste++;
		if ((teste != 0) || (tolower(resposta) > 'd') || (tolower(resposta) < 'a')){
			printf("Digite uma resposta válida!!(A, B, C ou D)\n");
		}
		else{
			break;
		}
	} while(1);
	if ((resposta == 'D') || (resposta == 'd')){
		pontos += 2;
		certas++;
		erradas = 0;
		printf("Você acertou a questão.\n");
	}
	else{
		erradas++;
		certas = 0;
		printf("Você errou a questão.\n");
		printf("A opção correta é a opção D.\n");
	}
	if (certas == 3){
		pontos += 3;
		certas = 0;
		printf("Por ter acertado 3 questões seguidas você ganhou mais 3 pontos.\n");
	}
	if (erradas == 3){
		pontos -= 2;
		erradas = 0;
		printf("Por ter errado 3 questões seguidas você perdeu 2 pontos.\n");
	}
	printf("A sua pontuação atual é de: %d ponto(s).\n", pontos);
	printf("Pressione ENTER para ir para a próxima questão...");
	while (getchar() != '\n');
	system("clear");

	printf("Pergunta 9: ");
	printf("Quais das opções abaixo melhor descreve o que é um algoritmo?\n");
	printf("Opção A: Uma sequência de instruções bem definidas, para realizar uma tarefa;\n");
	printf("Opção B: Uma sequência de instruções em uma ordem qualquer, para realizar uma tarefa;\n");
	printf("Opção C: Uma sequência de instruções bem definidas, para realizar uma tarefa, em um tempo finito;\n");
	printf("Opção D: Uma sequência de instruções, para realizar uma tarefa, em um tempo qualquer.\n");
	do{
		printf("Qual a sua resposta? ");
		scanf(" %c", &resposta);
		teste = 0;
		while (getchar() != '\n')
			teste++;
		if ((teste != 0) || (tolower(resposta) > 'd') || (tolower(resposta) < 'a')){
			printf("Digite uma resposta válida!!(A, B, C ou D)\n");
		}
		else{
			break;
		}
	} while(1);
	if ((resposta == 'C') || (resposta == 'c')){
		pontos += 2;
		certas++;
		erradas = 0;
		printf("Você acertou a questão.\n");
	}
	else{
		erradas++;
		certas = 0;
		printf("Você errou a questão.\n");
		printf("A opção correta é a opção C.\n");
	}
	if (certas == 3){
		pontos += 3;
		certas = 0;
		printf("Por ter acertado 3 questões seguidas você ganhou mais 3 pontos.\n");
	}
	if (erradas == 3){
		pontos -= 2;
		erradas = 0;
		printf("Por ter errado 3 questões seguidas você perdeu 2 pontos.\n");
	}
	printf("A sua pontuação atual é de: %d ponto(s).\n", pontos);
	printf("Pressione ENTER para ir para a próxima questão...");
	while (getchar() != '\n');
	system("clear");

	printf("Pergunta 10: ");
	printf("Qual dos itens a seguir não corresponde a uma linguagem de programação?\n");
	printf("Opção A: Python;\n");
	printf("Opção B: C;\n");
	printf("Opção C: Apml;\n");
	printf("Opção D: C++.\n");
	do{
		printf("Qual a sua resposta? ");
		scanf(" %c", &resposta);
		teste = 0;
		while (getchar() != '\n')
			teste++;
		if ((teste != 0) || (tolower(resposta) > 'd') || (tolower(resposta) < 'a')){
			printf("Digite uma resposta válida!!(A, B, C ou D)\n");
		}
		else{
			break;
		}
	} while(1);
	if ((resposta == 'c') || (resposta == 'C')){
		pontos += 2;
		certas++;
		erradas = 0;
		printf("Você acertou a questão.\n");
	}
	else{
		erradas++;
		certas = 0;
		printf("Você errou a questão.\n");
		printf("A opção correta é a opção C.\n");
	}
	if (certas == 3){
		pontos += 3;
		certas = 0;
		printf("Por ter acertado 3 questões seguidas você ganhou mais 3 pontos.\n");
	}
	if (erradas == 3){
		pontos -= 2;
		erradas = 0;
		printf("Por ter errado 3 questões seguidas você perdeu 2 pontos.\n");
	}
	printf("A sua pontuação final da primeira etapa foi de: %d ponto(s).\n", pontos);
	printf("Pressione ENTER para continuar...");
	while (getchar() != '\n');
	system("clear");

	return pontos;
}

void lower(char *string){
	int i;
	for (i = 0; i <= strlen(string); i++)
		string[i] = tolower(string[i]);
}

int etapa2(int pontos){
	int vitorias = 0, rodada = 1, jogada_maquina, pontos2 = 0;
	char jogada_usuario[8], *jogada_maquina_escrita;
	while(rodada <= 5){
		printf("%dª rodada:\n", rodada);

		jogada_maquina = rand()%3;
		if (jogada_maquina == 0){
			jogada_maquina_escrita = "pedra";
		}
		else{
			if (jogada_maquina == 1){
				jogada_maquina_escrita = "papel";
			}
			else{
				jogada_maquina_escrita = "tesoura";
			}
		}
		printf("Você vai jogar pedra, papel ou tesoura? ");
		scanf("%7[^\n]", jogada_usuario);
		while (getchar() != '\n');
		lower(jogada_usuario);
		if (!strcmp(jogada_usuario, "pedra")){
			printf("A máquina jogou %s.\n", jogada_maquina_escrita);
			if (jogada_maquina == 1){
				printf("Você perdeu a  %dª rodada.\n", rodada);
				rodada++;
				if (rodada != 6){
					printf("Pressione ENTER para ir para a próxima rodada...");
				}
				else{
					printf("Pressione ENTER para terminar a etapa 2...");
				}
				while (getchar() != '\n');
				system("clear");
			}
			else if (jogada_maquina == 2){
				printf("Você ganhou a %dª rodada.\n", rodada);
				rodada++;
				vitorias++;
				if (rodada != 6){
					printf("Pressione ENTER para ir para a próxima rodada...");
				}
				else{
					printf("Pressione ENTER para terminar a etapa 2...");
				}
				while (getchar() != '\n');
				system("clear");
			}
			else{
				printf("A %dª rodada foi um empate, portanto ela será repetida.\n", rodada);
			}
		}else if (!strcmp(jogada_usuario, "papel")){
			printf("A máquina jogou %s.\n", jogada_maquina_escrita);
			if (jogada_maquina == 2){
				printf("Você perdeu a  %dª rodada.\n", rodada);
				rodada++;
				if (rodada != 6){
					printf("Pressione ENTER para ir para a próxima rodada...");
				}
				else{
					printf("Pressione ENTER para terminar a etapa 2...");
				}
				while (getchar() != '\n');
				system("clear");
			}
			else if (jogada_maquina == 0){
				printf("Você ganhou a %dª rodada.\n", rodada);
				rodada++;
				vitorias++;
				if (rodada != 6){
					printf("Pressione ENTER para ir para a próxima rodada...");
				}
				else{
					printf("Pressione ENTER para terminar a etapa 2...");
				}
				while (getchar() != '\n');
				system("clear");
			}
			else{
				printf("A %dª rodada foi um empate, portanto ela será repetida.\n", rodada);
			}
		}else if (!strcmp(jogada_usuario, "tesoura")){
			printf("A máquina jogou %s.\n", jogada_maquina_escrita);
			if (jogada_maquina == 0){
				printf("Você perdeu a  %dª rodada.\n", rodada);
				rodada++;
				if (rodada != 6){
					printf("Pressione ENTER para ir para a próxima rodada...");
				}
				else{
					printf("Pressione ENTER para terminar a etapa 2...");
				}
				while (getchar() != '\n');
				system("clear");
			}
			else if (jogada_maquina == 1){
				printf("Você ganhou a %dª rodada.\n", rodada);
				rodada++;
				vitorias++;
				if (rodada != 6){
					printf("Pressione ENTER para ir para a próxima rodada...");
				}
				else{
					printf("Pressione ENTER para terminar a etapa 2...");
				}
				while (getchar() != '\n');
				system("clear");
			}
			else{
				printf("A %dª rodada foi um empate, portanto ela será repetida.\n", rodada);
			}
		}
		else{
			printf("Digite uma jogada válida!!(pedra, papel ou tesoura)\n");
		}
		jogada_usuario[0] = 0;
	}
	switch (vitorias){
		case 5: pontos2 = 7; break;
		case 4: pontos2 = 4; break;
		case 3: pontos2 = 2; break;
		case 0: pontos2 = -2; break;
	}
	pontos += pontos2;
	printf("Você ganhou %d rodadas.\n", vitorias);
	printf("Portanto você recebeu %d ponto(s).\n", pontos2);
	printf("Pressione ENTER para continuar...");
	while (getchar() != '\n');
	system("clear");
	return pontos;
}

void mostrar_dedos(int mao_jogador[2], int mao_maquina[2]){
	int dedo;
	printf("    SUA MÃO\n");
	for (dedo = 0; dedo < mao_jogador[0]; dedo++){
		if (dedo != (mao_jogador[0] - 1)){
			printf("| ");
		}
		else{
			printf("|");
		}
	}

	printf("\t  ");

	for (dedo = 0; dedo < mao_jogador[1]; dedo++){
		if (dedo != (mao_jogador[1] - 1)){
			printf("| ");
		}
		else{
			printf("|");
		}
	}

	printf("\n\n\n");

	for (dedo = 0; dedo < mao_maquina[0]; dedo++){
		if (dedo != (mao_maquina[0] - 1)){
			printf("| ");
		}
		else{
			printf("|");
		}
	}

	printf("\t  ");

	for (dedo = 0; dedo < mao_maquina[1]; dedo++){
		if (dedo != (mao_maquina[1] - 1)){
			printf("| ");
		}
		else{
			printf("|");
		}
	}
	printf("\n");
	printf("    MÃO DA MÁQUINA\n");
}

/*As duas funções "verifica" são para garantir que a mão que está sendo usada e a mão que está sendo atacada não possuem 0 dedos.*/
int verifica_mao_jogador(int mao_jogador[2], int mao_jogador_jogada){
	if (mao_jogador[mao_jogador_jogada] != 0){
		return 1;
	}
	return 0;
}

int verifica_mao_maquina(int mao_maquina[2], int mao_maquina_jogada){
	if (mao_maquina[mao_maquina_jogada] != 0){
		return 1;
	}
	return 0;
}

int etapa3(int pontos){
	int mao_jogador[2], mao_maquina[2], rodadas = 1, mao_jogador_jogada, mao_maquina_jogada;
	char escolha[5];
	mao_jogador[0] = 1;
	mao_jogador[1] = 1;
	mao_maquina[0] = 1;
	mao_maquina[1] = 1;

	printf("Para fazer as suas jogadas considere a sua mão\n");
	printf("esquerda como sendo o número 0 e a sua mão\n");
	printf("direita como sendo o número 1 e use essa mesma\n");
	printf("lógica para escolher qual mão da máquina você\n");
	printf("irá atacar.\n");

	/*Verifica se o jogo ja acabou*/
	while (((mao_jogador[0] != 0) || (mao_jogador[1] != 0)) && ((mao_maquina[0] != 0) || (mao_maquina[1] != 0))) {
		mostrar_dedos(mao_jogador, mao_maquina);
		/*As duas linhas abaixo são para fazer com que a verificação de entrada funcione caso sejam digitadas letras em vez de números para essas variáveis.*/
		mao_jogador_jogada = 2;
		mao_maquina_jogada = 2;

		/*A jogada da pessoa começa aqui*/
		/*Verifica se uma das mãos é 0 e se a outra possui um número par de dedos.*/
		if (((mao_jogador[0] == 0) || (mao_jogador[1] == 0)) && (((mao_jogador[0] != 0) && ((mao_jogador[0] % 2) == 0)) || ((mao_jogador[1] != 0) && ((mao_jogador[1] % 2) == 0)))){
			do{
				printf("Você gostaria de dividir os seus dedos de uma mão para a outra?(Sim ou Não) ");
				scanf(" %4[^\n]", escolha);
				lower(escolha);
				while (getchar() != '\n');
				if (!strcmp(escolha, "sim")){
					if (mao_jogador[0] == 0){
						mao_jogador[0] = ((mao_jogador[1])/2);
						mao_jogador[1] = mao_jogador[0];
					}
					else{
						mao_jogador[1] = ((mao_jogador[0])/2);
						mao_jogador[0] = mao_jogador[1];
					}
					mostrar_dedos(mao_jogador, mao_maquina);
					printf("Pressione ENTER para continuar para vez da máquina...");
					while (getchar() != '\n');
					system("clear");
					break;
				}
				else if ((!strcmp(escolha, "nao")) || (!strcmp(escolha, "não"))){
					do{
						printf("Qual mão você quer usar?(esquerda = 0, direita = 1)\n");
						scanf(" %d", &mao_jogador_jogada);
						while (getchar() != '\n');
						if ((mao_jogador_jogada == 0) || (mao_jogador_jogada == 1)){
							if (verifica_mao_jogador(mao_jogador, mao_jogador_jogada)){
								break;
							}
							else{
								printf("Digite uma opção válida!!(a mão que você vai jogar não pode ter 0 dedos)\n");
							}
						}
						else{
							printf("Digite uma opção válida!!(0 ou 1)\n");
						}
					}while(1);
					do{
						printf("Qual mão da máquina você quer atacar?(esquerda = 0, direita = 1)\n");
						scanf(" %d", &mao_maquina_jogada);
						while (getchar() != '\n');
						if ((mao_maquina_jogada == 0) || (mao_maquina_jogada == 1)){
							if (verifica_mao_maquina(mao_maquina, mao_maquina_jogada)){
								break;
							}
							else{
								printf("Digite uma opção válida!!(a mão que você escolheu atacar da máquina não pode ter 0 dedos)\n");
							}
						}
						else{
							printf("Digite uma opção válida!!(0 ou 1)\n");
						}
					}while(1);

					mao_maquina[mao_maquina_jogada] = ((mao_maquina[mao_maquina_jogada] + mao_jogador[mao_jogador_jogada]) % 5);
					mostrar_dedos(mao_jogador, mao_maquina);
					printf("Pressione ENTER para continuar para vez da máquina...");
					while (getchar() != '\n');
					system("clear");
					break;
				}
				else{
					printf("Digite uma opção válida!!(sim ou não)\n");
				}
			} while(1);
		}
		else {
			do{
				printf("Qual mão você quer usar?(esquerda = 0, direita = 1)\n");
				scanf("%d", &mao_jogador_jogada);
				while (getchar() != '\n');
				if ((mao_jogador_jogada == 0) || (mao_jogador_jogada == 1)){
					if (verifica_mao_jogador(mao_jogador, mao_jogador_jogada)){
						break;
					}
					else{
						printf("Digite uma opção válida!!(a mão que você vai jogar não pode ter 0 dedos)\n");
					}
				}
				else{
					printf("Digite uma opção válida!!(0 ou 1)\n");
				}
			}while(1);
			do{
				printf("Qual mão da máquina você quer atacar?(esquerda = 0, direita = 1)\n");
				scanf("%d", &mao_maquina_jogada);
				while (getchar() != '\n');
				if ((mao_maquina_jogada == 0) || (mao_maquina_jogada == 1)){
					if (verifica_mao_maquina(mao_maquina, mao_maquina_jogada)){
						break;
					}
					else{
						printf("Digite uma opção válida!!(a mão que você escolheu atacar da máquina não pode ter 0 dedos)\n");
					}
				}
				else{
					printf("Digite uma opção válida!!(0 ou 1)\n");
				}
			}while(1);

			mao_maquina[mao_maquina_jogada] = ((mao_maquina[mao_maquina_jogada] + mao_jogador[mao_jogador_jogada]) % 5);
			mostrar_dedos(mao_jogador, mao_maquina);
			printf("Pressione ENTER para continuar para vez da máquina...");
			while (getchar() != '\n');
			system("clear");
		} /*A jogada da pessoa vai até aqui*/

		/*O if abaixo verifica se o jogo acabou ou não(no caso se tiver acabado aqui significa que a pessoa ganhou).*/
		if (((mao_jogador[0] != 0) || (mao_jogador[1] != 0)) && ((mao_maquina[0] != 0) || (mao_maquina[1] != 0))){ 
			/*A jogada da máquina começa aqui*/
			printf("A máquina vai jogar agora...\n");
			
			if ((verifica_mao_maquina(mao_maquina, 0)) && (((mao_maquina[0] + mao_jogador[0]) % 5) == 0)){
				mao_jogador[0] = 0;
				printf("A máquina usou a mão esquerda dela para atacar a sua mão esquerda.\n");
			}
			else if ((verifica_mao_maquina(mao_maquina, 0)) && (((mao_maquina[0] + mao_jogador[1]) % 5) == 0)){
				mao_jogador[1] = 0;
				printf("A máquina usou a mão esquerda dela para atacar a sua mão direita.\n");
			}
			else if ((verifica_mao_maquina(mao_maquina, 1)) && (((mao_maquina[1] + mao_jogador[0]) % 5) == 0)){
				mao_jogador[0] = 0;
				printf("A máquina usou a mão direita dela para atacar a sua mão esquerda.\n");
			}
			else if ((verifica_mao_maquina(mao_maquina, 1)) && (((mao_maquina[1] + mao_jogador[1]) % 5) == 0)){
				mao_jogador[1] = 0;
				printf("A máquina usou a mão direita dela para atacar a sua mão direita.\n");
			}

			else if (verifica_mao_maquina(mao_maquina, 0)){
				if ((mao_maquina[1] == 0) && ((mao_maquina[0] % 2) == 0)){
					mao_maquina[1] = (mao_maquina[0] / 2);
					mao_maquina[0] = (mao_maquina[0] / 2);
					printf("A máquina dividiu os dedos.\n");
				}
				else if (verifica_mao_jogador(mao_jogador, 0)){
					mao_jogador[0] = ((mao_jogador[0] + mao_maquina[0]) % 5);
					printf("A máquina usou a mão esquerda dela para atacar a sua mão esquerda.\n");

				}
				else{
					mao_jogador[1] = ((mao_jogador[1] + mao_maquina[0]) % 5);
					printf("A máquina usou a mão esquerda dela para atacar a sua mão direita.\n");

				}
			}
			else if (verifica_mao_maquina(mao_maquina, 1)){
				if ((mao_maquina[0] == 0) && ((mao_maquina[1] % 2) == 0)){
					mao_maquina[0] = (mao_maquina[1] / 2);
					mao_maquina[1] = (mao_maquina[1] / 2);
					printf("A máquina dividiu os dedos.\n");
				}
				else if (verifica_mao_jogador(mao_jogador, 0)){
					mao_jogador[0] = ((mao_jogador[0] + mao_maquina[1]) % 5);
					printf("A máquina usou a mão direita dela para atacar a sua mão esquerda.\n");

				}
				else{
					mao_jogador[1] = ((mao_jogador[1] + mao_maquina[1]) % 5);
					printf("A máquina usou a mão direita dela para atacar a sua mão direita.\n");

				}
			}
			mostrar_dedos(mao_jogador, mao_maquina);
			printf("Pressione ENTER para continuar...");
			while (getchar() != '\n');
			system("clear");
		}/*A jogada da máquina vai até aqui*/
		else{
			rodadas++;
			printf("Parabéns você ganhou!!\n");
			printf("Você conseguiu vencer a máquina em %d rodadas.\n", rodadas);
			if (rodadas < 10){
				printf("Por ter ganhado em menos de 10 rodadas você recebeu 15 pontos.\n");
				pontos += 15;
			}
			else{
				printf("Por ter ganhado em 10 ou mais rodadas você recebeu 10 pontos.\n");
				pontos += 10;
			}
			printf("A sua pontuação atual é de %d pontos.\n", pontos);
			printf("Pressione ENTER para continuar...");
			while (getchar() != '\n');
			system("clear");
			return pontos;
		}

		/*O if abaixo verifica se o jogo acabou ou não(no caso se tiver acabado aqui significa que a máquina ganhou).*/
		if (((mao_jogador[0] != 0) || (mao_jogador[1] != 0)) && ((mao_maquina[0] != 0) || (mao_maquina[1] != 0))){
			mostrar_dedos(mao_jogador, mao_maquina);
			printf("Essa foi a %dª rodada.\n", rodadas);
			rodadas++;
			printf("Pressione ENTER para continuar...");
			while (getchar() != '\n');
			system("clear");
		}
		else {
			rodadas++;
			printf("Infelizmente você perdeu.\n");
			printf("A máquina ganhou em %d rodadas.\n", rodadas);
			printf("Como você perdeu o jogo, você foi eliminado do processo seletivo.\n");
			printf("A sua pontuação final foi de %d pontos.\n", pontos);
			printf("Pressione ENTER para continuar...");
			while (getchar() != '\n');
			system("clear");
			return -1;
		}
	}

	return pontos;
}

int main(){
	srand(time(NULL));
	int pontos = 0, pontos2 = 0;
	char tentar_novamente[5], nome[50], tentar_novamente2[5];

	do{
		pontos = 0;	

		system("clear");
		printf("Olá, seja bem vindo ao processo seletivo de estágio da NASA.\n");
		printf("Qual o seu nome? ");
		scanf(" %49[^\n]", nome);
		while (getchar() != '\n');
		do{
			if (verifica_nome(nome)){
				break;
			}
			else{
				printf("Nome inválido!\n");
				printf("Digite um nome válido: ");
				scanf(" %49[^\n]", nome);
				getchar();
			}
		} while(1);
		do{
			system("clear");
			printf("O processo será composto por três etapas.\n");
			printf("A primeira etapa irá começar agora.\n");
			printf("Ela será um questionário de 10 questões objetivas.\n");
			printf("Para passar nesta etapa é preciso de, no mínimo, 10 pontos.\n");
			printf("Pressione ENTER para continuar...");
			while (getchar() != '\n');
			system("clear");

			pontos = etapa1(pontos);

			if (pontos >= 10){
				printf("Parabéns você passou pela primeira etapa!\n");
				printf("Pressione ENTER para continuar...");
				while (getchar() != '\n');
				system("clear");
				break;
			}
			else{
				printf("Você não obteve a pontuação mínima necessária para passar para a próxima etapa.\n");
				printf("Infelizmente devido a isso, você foi desqualificado do processo seletivo.\n");
				do{
					printf("Você gostaria de tentar de novo?(Sim ou Não) ");
					scanf(" %4[^\n]", tentar_novamente);
					lower(tentar_novamente);
					while (getchar() != '\n');
					if (!strcmp(tentar_novamente, "sim")){
						break;
					}
					else if ((!strcmp(tentar_novamente, "nao")) || (!strcmp(tentar_novamente, "não"))) {
						return 0;
					}
					else{
						printf("Digite uma opção válida!!(sim ou não)\n");
					}
				} while(1);		
			}
			if (!strcmp(tentar_novamente, "sim")){
				continue;
			}
		} while(1);

		printf("Agora a etapa 2 irá começar.\n");
		printf("Ela consiste em um jogo de pedra, papel e tesoura contra a máquina.\n");
		printf("Serão jogadas 5 rodadas e não é necessário ter uma pontuação mínima para passar da etapa.\n");
		printf("Pressione ENTER para começar a etapa 2...");
		while (getchar() != '\n');
		system("clear");

		pontos = etapa2(pontos);

		printf("Você finalizou a etapa 2.\n");
		printf("A sua pontuação atual é de %d ponto(s).\n", pontos);
		printf("Pressione ENTER para continuar...");
		while (getchar() != '\n');
		system("clear");

		do{
			printf("A etapa 3, que é a última etapa, irá começar agora.\n");
			printf("Ela será um duelo contra a máquina no jogo dos dedos.\n");
			printf("O jogo funciona da seguinte maneira:\n");
			printf("Cada jogador possui duas mãos(cada uma com 5 dedos) e o objetivo é\n");
			printf("fazer com que o jogador inimigo perca as duas mãos, sem que você perca as suas.\n");
			printf("As regras são as seguintes:\n");
			printf("A cada rodada o jogador escolhe a mão que vai usar para atacar e\n");
			printf("escolhe a mão do inimigo que irá atacar.\n");
			printf("O ataque consiste em somar o número de dedos da sua mão com o número de dedos\n");
			printf("da mão inimiga, se a soma for 5 o jogador inimigo perde a mão e se a soma for\n");
			printf("maior do que 5 a mão do inimigo irá ficar com o valor da soma subtraído por 5.\n");
			printf("Caso o jogador tenha somente uma mão e o número de dedos nessa mão for par\n");
			printf("ele pode dividir essa quantidade de dedos entre as suas mãos, mas ele não\n");
			printf("poderá atacar nessa rodada.\n");
			printf("Você não pode usar uma mão com 0 dedos para atacar.\n");
			printf("E você também não pode atacar uma mão da máquina que tenha 0 dedos.\n");
			printf("PRESTE ATENÇÃO!!\n");
			printf("Para passar desta etapa é preciso ganhar a partida contra a máquina.\n");
			printf("A sua pontuação atual é de %d ponto(s).\n", pontos);
			printf("Pressione ENTER para começar a etapa 3...");
			while (getchar() != '\n');
			system("clear");

			pontos2 = etapa3(pontos);

			if ((pontos2 != -1) && (pontos2 >= 25)){
				printf("Parabéns você foi aprovado no processo seletivo de\n");
				printf("estágio na NASA!!!\n");
				pontos = pontos2;
				printf("A sua pontuação final foi de %d pontos.\n", pontos);
				printf("Pressione ENTER para terminar o programa...");
				while (getchar() != '\n');
				system("clear");
				do{
					printf("Você foi aprovado, mas você gostaria de tentar\n");
					printf("novamente para tentar conseguir uma pontuação\n");
					printf("mais alta?");
					scanf("%4[^\n]", tentar_novamente2);
					lower(tentar_novamente2);
					while (getchar() != '\n');
					if (!strcmp(tentar_novamente2, "sim")){
						break;
					}
					else if ((!strcmp(tentar_novamente2, "nao")) || (!strcmp(tentar_novamente2, "não"))) {
						return 0;
					}
					else{
						printf("Digite uma opção válida!!(Sim ou Não)\n");
					}
				}while(1);
			}
			else if (pontos2 == -1){
				printf("Como você perdeu para a máquina, você foi eliminado do processo seletivo.\n");
				do{
					printf("Você gostaria de tentar de novo?(Sim ou Não) ");
					scanf(" %4[^\n]", tentar_novamente2);
					lower(tentar_novamente2);
					while (getchar() != '\n');
					if (!strcmp(tentar_novamente2, "sim")){
						system("clear");
						break;
					}
					else if ((!strcmp(tentar_novamente2, "nao")) || (!strcmp(tentar_novamente2, "não"))) {
						return 0;
					}
					else{
						printf("Digite uma opção válida!!(sim ou não)\n");
					}
				} while(1);
			}
			else{
				printf("Como você não conseguiu uma a pontuação maior do que 25 pontos\n");
				printf("você foi eliminado do processo seletivo.\n");
				do{
					printf("Você gostaria de tentar de novo?(Sim ou Não) ");
					scanf(" %4[^\n]", tentar_novamente2);
					lower(tentar_novamente2);
					while (getchar() != '\n');
					if (!strcmp(tentar_novamente2, "sim")){
						system("clear");
						break;
					}
					else if ((!strcmp(tentar_novamente2, "nao")) || (!strcmp(tentar_novamente2, "não"))) {
						return 0;
					}
					else{
						printf("Digite uma opção válida!!(sim ou não)\n");
					}
				} while(1);
			}
			if (!strcmp(tentar_novamente2, "sim")){
				break;
			}

		} while(1);
		if (!strcmp(tentar_novamente2, "sim")){
				continue;
		}
	}while(1);

	return 0;
}
