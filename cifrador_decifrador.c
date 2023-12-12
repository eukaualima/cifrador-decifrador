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
/**
 * De "a" a "z" usa-se a sequência de 33 a 58 da tabela ascii
 * De "A" a "F" usa-se a sequência de 59 a 64 da tabela ascii
 * De "G" a "J" usa-se a sequência de 123 a 126 da tabela ascii
 * De "K" a "U" usa-se a sequência de 173 a 183 da tabela ascii
 * De "V" a "Z" usa-se a sequência de 129 a 133 da tabela ascii
 * De 33 a 47 na tabela ascii traca pela sequência 108 a 122
 * De 48 a 57 na tabela ascii troca pela sequência 70 a 79
 */
char cifrarSenha(char senha_plana[], char senha_cifrada[], int qt_c, int i)
{
	if (qt_c > 0)
	{
		switch (senha_plana[i])
		{
			// < Letras >
			case 65: // A
				senha_cifrada[i] = 59;
				break;
				
			case 97: // a
				senha_cifrada[i] = 33;
				break;
				
			case 66: // B
				senha_cifrada[i] = 60;
				break;
				
			case 98: // b
				senha_cifrada[i] = 34;
				break;
				
			case 67: // C 
				senha_cifrada[i] = 61;
				break;
				
			case 99: // c 
				senha_cifrada[i] = 35;
				break;
				
			case 68: // D 
				senha_cifrada[i] = 62;
				break;
				
			case 101: // d 
				senha_cifrada[i] = 36;
				break;
				
			case 69: // E 
				senha_cifrada[i] = 63;
				break;
				
			case 102: // e 
				senha_cifrada[i] = 37;
				break;
				
			case 70: // F 
				senha_cifrada[i] = 64;
				break;
			
			case 103: // f 
				senha_cifrada[i] = 38;
				break;
				
			case 71: // G 
				senha_cifrada[i] = 123;
				break;
			
			case 104: // g 
				senha_cifrada[i] = 39;
				break;
				
			case 72: // H 
				senha_cifrada[i] = 124;
				break;
			
			case 105: // h 
				senha_cifrada[i] = 40;
				break;
				
			case 73: // I 
				senha_cifrada[i] = 125;
				break;
			
			case 106: // i 
				senha_cifrada[i] = 41;
				break;
				
			case 74: // J 
				senha_cifrada[i] = 126;
				break;
			
			case 107: // j 
				senha_cifrada[i] = 42;
				break;
				
			case 75: // K 
				senha_cifrada[i] = 173;
				break;
				
			case 108: // k 
				senha_cifrada[i] = 43;
				break;
				
			case 76: // L 
				senha_cifrada[i] = 174;
				break;
			
			case 109: // l 
				senha_cifrada[i] = 44;
				break;
				
			case 77: // M 
				senha_cifrada[i] = 175;
				break;
				
			case 110: // m 
				senha_cifrada[i] = 45;
				break;
				
			case 78: // N 
				senha_cifrada[i] = 176;
				break;
				
			case 111: // n 
				senha_cifrada[i] = 46;
				break;
				
			case 79: // O 
				senha_cifrada[i] = 177;
				break;
			
			case 112: // o 
				senha_cifrada[i] = 47;
				break;
				
			case 80: // P 
				senha_cifrada[i] = 178;
				break;
				
			case 113: // p 
				senha_cifrada[i] = 48;
				break;
				
			case 81: // Q 
				senha_cifrada[i] = 179;
				break;
				
			case 114: // q 
				senha_cifrada[i] = 49;
				break;
				
			case 82: // R 
				senha_cifrada[i] = 180;
				break;
				
			case 115: // r 
				senha_cifrada[i] = 50;
				break;
				
			case 83: // S 
			    senha_cifrada[i] = 181;
				break;
				
			case 116: // s 
				senha_cifrada[i] = 51;
				break;
				
			case 84: // T 
				senha_cifrada[i] = 182;
				break;
				
			case 117: // t 
				senha_cifrada[i] = 52;
				break;
				
			case 85: // U
				senha_cifrada[i] = 183;
				break;
				
			case 118: // u 
				senha_cifrada[i] = 53;
				break;
				
			case 86: // V 
				senha_cifrada[i] = 129;
				break;
				
			case 119: // v 
				senha_cifrada[i] = 54;
				break;
				
			case 87: // W
				senha_cifrada[i] = 130;	
				break;
				
			case 120: // w 
				senha_cifrada[i] = 55;
				break;
				
			case 88: // X 
				senha_cifrada[i] = 131;
				break;
				
			case 121: // x 
				senha_cifrada[i] = 56;
				break;
				
			case 89: // Y 
				senha_cifrada[i] = 132;
				break;
			
			case 123: // y 
				senha_cifrada[i] = 57;
				break;
				
			case 90: // Z 
				senha_cifrada[i] = 133;
				break;
			
			case 124: // z
				senha_cifrada[i] = 58;
				break;
				
			// < Símbolos >
			case 33: // !
				senha_cifrada[i] = 108;
				break;
				
			case 34: // "
				senha_cifrada[i] = 109;
				break;
				
			case 35: // #
				senha_cifrada[i] = 110;
				break;
			
			case 36: // $
				senha_cifrada[i] = 111;
				break;
			
			case 37: // %
				senha_cifrada[i] = 112;
				break;
			
			case 38: // &
				senha_cifrada[i] = 113;
				break;
			
			case 39: // '
				senha_cifrada[i] = 114;
				break;
				
			case 40: // (
				senha_cifrada[i] = 115;
				break;
			
			case 41: // )
				senha_cifrada[i] = 116;
				break;
			
			case 42: // *
				senha_cifrada[i] = 117;
				break;
			
			case 43: // +
				senha_cifrada[i] = 118;
				break;
			
			case 44: // ,
				senha_cifrada[i] = 119;
				break;
			
			case 45: // -
				senha_cifrada[i] = 120;
				break;
				
			case 46: // .
				senha_cifrada[i] = 121;
				break;
			
			case 47: // /
				senha_cifrada[i] = 122;
				break;
				
			// < Números >
			case 48: // 0
				senha_cifrada[i] = 70;
				break;
				
			case 49: // 1
				senha_cifrada[i] = 71;
				break;
			
			case 50: // 2
				senha_cifrada[i] = 72;
				break;
			
			case 51: // 3
				senha_cifrada[i] = 73;
				break;
			
			case 52: // 4
				senha_cifrada[i] = 74;
				break;
			
			case 53: // 5
				senha_cifrada[i] = 75;
				break;
				
			case 54: // 6
				senha_cifrada[i] = 76;
				break;
			
			case 55: // 7
				senha_cifrada[i] = 77;
				break;
			
			case 56: // 8
				senha_cifrada[i] = 78;
				break;
			
			case 57: // 9
				senha_cifrada[i] = 79;
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
				system("cls");
				printf(">-------------------<[ R E G R A S ]>-------------------<\n\t1. Não insira acentos;\n\t2. Não insira espaços.\n");
				printf("Senha: ");
				scanf("%s", senha_plana);
				
				// < Aplica a cifragem >
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
	setlocale(LC_ALL, "");
	// < Chama o menu >
	menu();
	
	return 0;
}

