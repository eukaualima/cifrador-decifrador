/*
=---------------=
=-> Cabeçalho <-=
=---------------=
*/
/**
 * @author Kauã dos Santos Lima
 * @since 05/12/2023
 * @version 05/12/2023
 * @todo Criação de um programa recursivo para criptografia de textos e senhas
 **/

/*
=--------------=
=-> Includes <-=
=--------------=
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*
=----------------=
=-> Estruturas <-=
=----------------=
*/

/*
=------------------=
=-> Subprogramas <-=
=------------------=
*/
// < Função do algoritmo de cifragem >
char cifrarSenha(char senha_plana[], char senha_cifrada[], int qt_c, int i)
{
	if (qt_c > 1)
	{
		// < Usando a Cifra de César >
		switch(senha_plana[i])
		{
			case 65: // A
				senha_cifrada[i] = 100;
				break;
				
			case 97: // a
				senha_cifrada[i] = 68;
				break;
				
			case 66: // B
				senha_cifrada[i] = 101;
				break;
				
			case 98: // b
				senha_cifrada[i] = 69;
				break;
				
			case 67: // C 
				senha_cifrada[i] = 102;
				break;
				
			case 99: // c
				senha_cifrada[i] = 70;
				break;
				
			case 68: // D
				senha_cifrada[i] = 103;
				break;
				
			case 101: // d
				senha_cifrada[i] = 71;
				break;
				
			case 69: // E
				senha_cifrada[i] = 104;
				break;
				
			case 102: // e
				senha_cifrada[i] = 72;
				break;
				
			case 70: // F
				senha_cifrada[i] = 105;
				break;
			
			case 103: // f
				senha_cifrada[i] = 73;
				break;
				
			case 71: // G
			senha_cifrada[i] = 106;
				break;
			
			case 104: // g
				senha_cifrada[i] = 74;
				break;
				
			case 72: // H
				senha_cifrada[i] = 107;
				break;
			
			case 105: // h
				senha_cifrada[i] = 75;
				break;
				
			case 73: // I
				senha_cifrada[i] = 108;
				break;
			
			case 106: // i
				senha_cifrada[i] = 76;
				break;
				
			case 74: // J
				senha_cifrada[i] = 109;
				break;
			
			case 107: // j
				senha_cifrada[i] = 77;
				break;
				
			case 75: // K
				senha_cifrada[i] = 110;
				break;
				
			case 108: // k
				senha_cifrada[i] = 78;
				break;
				
			case 76: // L
				senha_cifrada[i] = 112;
				break;
			
			case 109: // l
				senha_cifrada[i] = 79;
				break;
				
			case 77: // M
				senha_cifrada[i] = 113;
				break;
				
			case 110: // m
				senha_cifrada[i] = 80;
				break;
				
			case 78: // N
				senha_cifrada[i] = 114;
				break;
				
			case 111: // n
				senha_cifrada[i] = 81;
				break;
				
			case 79: // O
				senha_cifrada[i] = 115;
				break;
			
			case 112: // o
				senha_cifrada[i] = 82;
				break;
				
			case 80: // P
				senha_cifrada[i] = 116;
				break;
				
			case 113: // p
				senha_cifrada[i] = 83;
				break;
				
			case 81: // Q
				senha_cifrada[i] = 117;
				break;
				
			case 114: // q
				senha_cifrada[i] = 84;
				break;
				
			case 82: // R
				senha_cifrada[i] = 118;
				break;
				
			case 115: // r
				senha_cifrada[i] = 85;
				break;
				
			case 83: // S
			    senha_cifrada[i] = 119;
				break;
				
			case 116: // s
				senha_cifrada[i] = 86;
				break;
				
			case 84: // T
				senha_cifrada[i] = 120;
				break;
				
			case 117: // t
				senha_cifrada[i] = 87;
				break;
				
			case 85: // U
				senha_cifrada[i] = 121;
				break;
				
			case 118: // u
				senha_cifrada[i] = 89;
				break;
				
			case 86: // V
				senha_cifrada[i] = 122;
				break;
				
			case 119: // v
				senha_cifrada[i] = 90;
				break;
				
			case 87: // W
				senha_cifrada[i] = 97;
				break;
				
			case 120: // w
				senha_cifrada[i] = 65;
				break;
				
			case 88: // X
				senha_cifrada[i] = 98;
				break;
				
			case 121: // x
				senha_cifrada[i] = 66;
				break;
				
			case 89: // Y
				senha_cifrada[i] = 99;
				break;
			
			case 123: // y
				senha_cifrada[i] = 67;
				break;
				
			case 90: // Z
				senha_cifrada[i] = 100;
				break;
			
			case 124: // z
				senha_cifrada[i] = 68;
				break;
		}
		
		return cifrarSenha(senha_plana, senha_cifrada, qt_c-1, i+1);
	}
}

// < Procedimento de chamada das demais funções >
void menu()
{
	// < Declaração de variáveis locais >
	char texto[1000], senha_plana[21] = "ABC", senha_cifrada[61] = "";
	int opcao;
	
	// < Loop do menu >
	do
	{
		printf(">-----------------<[ C R I P T O G R A F I A ]>-----------------<\nEscolha abaixo uma das opcoes que deseja acessar:\n[1]: Criptografar um texto\n\t=> Cifre um texto de ate 999 caracteres.\n[2]: Descriptografar um texto\n\t=> Descriptografe um texto de ate 2.997 caracteres.\n[3]: Criptografar uma senha.\n\t=> Criptografe uma senha de até 20 caracteres.\n[4]: Descriptografar uma senha\n\t=> Descriptografe uma senha de ate 60 caracteres.\n[0]: Sair do programa\n\t=> Fecha imediatamente o programa.\n\n--> Sua opcao: ");
		scanf("%i", &opcao);
		
		switch (opcao)
		{
			case 1:
				
				break;
				
			case 2:
				
				break;
				
			case 3:
				// < Entrada de dados >
				printf("Senha: ");
				scanf("%s", senha_plana);
				
				// < Aplica a cifra de César >
				cifrarSenha(senha_plana, senha_cifrada, strlen(senha_plana)+1, 0);
				
				// < Imprime a saída (temporário) >
				printf("\n\n%s\n%s\n\n", senha_plana, senha_cifrada);
				break;
				
			case 4:
				
				break;
				
			case 5:
				system("CLS");
				
				printf("\n\n[!] Programa finalizado com sucesso.\n\n");
				
				exit(1);
				break;	
		}
	} while (opcao != 0);
}

/*
=------------------------=
=-> Programa Principal <-=
=------------------------=
*/
int main(void)
{
	// < Chama o menu >
	menu();
	
	return 0;
}

