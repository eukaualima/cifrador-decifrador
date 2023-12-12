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
		switch(senha_plana[i])
		{
			case 65: // A
				
				break;
				
			case 97: // a
				
				break;
				
			case 66: // B
				
				break;
				
			case 98: // b
				
				break;
				
			case 67: // C 
				
				break;
				
			case 99: // c 
				
				break;
				
			case 68: // D 
				
				break;
				
			case 101: // d 
				
				break;
				
			case 69: // E 
				
				break;
				
			case 102: // e 
				
				break;
				
			case 70: // F 
				
				break;
			
			case 103: // f 
				
				break;
				
			case 71: // G 
			
				break;
			
			case 104: // g 
				
				break;
				
			case 72: // H 
				
				break;
			
			case 105: // h 
				
				break;
				
			case 73: // I 
				
				break;
			
			case 106: // i 
				
				break;
				
			case 74: // J 
				
				break;
			
			case 107: // j 
				
				break;
				
			case 75: // K 
				
				break;
				
			case 108: // k 
				
				break;
				
			case 76: // L 
				
				break;
			
			case 109: // l 
				
				break;
				
			case 77: // M 
				
				break;
				
			case 110: // m 
				
				break;
				
			case 78: // N 
				
				break;
				
			case 111: // n 
				
				break;
				
			case 79: // O 
				
				break;
			
			case 112: // o 
				
				break;
				
			case 80: // P 
				
				break;
				
			case 113: // p 
				
				break;
				
			case 81: // Q 
				
				break;
				
			case 114: // q 
				
				break;
				
			case 82: // R 
				
				break;
				
			case 115: // r 
				
				break;
				
			case 83: // S 
			    
				break;
				
			case 116: // s 
				
				break;
				
			case 84: // T 
				
				break;
				
			case 117: // t 
				
				break;
				
			case 85: // U
				
				break;
				
			case 118: // u 
				
				break;
				
			case 86: // V 
				
				break;
				
			case 119: // v 
				
				break;
				
			case 87: // W
				
				break;
				
			case 120: // w 
				
				break;
				
			case 88: // X 
				
				break;
				
			case 121: // x 
				
				break;
				
			case 89: // Y 
				
				break;
			
			case 123: // y 
				
				break;
				
			case 90: // Z 
				;
				break;
			
			case 124: // z
				
				break;
		}
		
		return cifrarSenha(senha_plana, senha_cifrada, qt_c-1, i+1);
	}
}

// < Função para decifrar senhas cifradas --- FALTA FINALIZAR E AJEITAR, BAGUNÇADO!!!! >
char decifrarSenha(char senha_cifrada[], int qt_c, int i)
{
	if (qt_c > 1)
	{
		// < Usando a Cifra de César >
		switch(senha_cifrada[i])
		{
			case 65: // A
				
				break;
				
			case 97: // a
				
				break;
				
			case 66: // B
				
				break;
				
			case 98: // b
				
				break;
				
			case 67: // C 
				
				break;
				
			case 99: // c 
				
				break;
				
			case 68: // D 
				
				break;
				
			case 101: // d 
				
				break;
				
			case 69: // E 
				
				break;
				
			case 102: // e 
				
				break;
				
			case 70: // F 
				
				break;
			
			case 103: // f 
				
				break;
				
			case 71: // G 
			
				break;
			
			case 104: // g 
				
				break;
				
			case 72: // H 
				
				break;
			
			case 105: // h 
				
				break;
				
			case 73: // I 
				
				break;
			
			case 106: // i 
				
				break;
				
			case 74: // J 
				
				break;
			
			case 107: // j 
				
				break;
				
			case 75: // K 
				
				break;
				
			case 108: // k 
				
				break;
				
			case 76: // L 
				
				break;
			
			case 109: // l 
				
				break;
				
			case 77: // M 
				
				break;
				
			case 110: // m 
				
				break;
				
			case 78: // N 
				
				break;
				
			case 111: // n 
				
				break;
				
			case 79: // O 
				
				break;
			
			case 112: // o 
				
				break;
				
			case 80: // P 
				
				break;
				
			case 113: // p 
				
				break;
				
			case 81: // Q 
				
				break;
				
			case 114: // q 
				
				break;
				
			case 82: // R 
				
				break;
				
			case 115: // r 
				
				break;
				
			case 83: // S 
			    
				break;
				
			case 116: // s 
				
				break;
				
			case 84: // T 
				
				break;
				
			case 117: // t 
				
				break;
				
			case 85: // U
				
				break;
				
			case 118: // u 
				
				break;
				
			case 86: // V 
				
				break;
				
			case 119: // v 
				
				break;
				
			case 87: // W
				
				break;
				
			case 120: // w 
				
				break;
				
			case 88: // X 
				
				break;
				
			case 121: // x 
				
				break;
				
			case 89: // Y 
				
				break;
			
			case 123: // y 
				
				break;
				
			case 90: // Z 
				;
				break;
			
			case 124: // z
				
				break;
		}
		
		return decifrarSenha(senha_cifrada, qt_c-1, i+1);
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

