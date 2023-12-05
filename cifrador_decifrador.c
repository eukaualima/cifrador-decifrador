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
			case 65: // A -> D
				senha_cifrada[i] = 100;
				break;
				
			case 97: // a -> d
				senha_cifrada[i] = 68;
				break;
				
			case 66: // B -> E
				senha_cifrada[i] = 101;
				break;
				
			case 98: // b -> e
				senha_cifrada[i] = 69;
				break;
				
			case 67: // C -> F
				senha_cifrada[i] = 102;
				break;
				
			case 99: // c -> f
				senha_cifrada[i] = 70;
				break;
				
			case 68: // D -> G
				senha_cifrada[i] = 103;
				break;
				
			case 101: // d -> g
				senha_cifrada[i] = 71;
				break;
				
			case 69: // E -> H
				senha_cifrada[i] = 104;
				break;
				
			case 102: // e -> h
				senha_cifrada[i] = 72;
				break;
				
			case 70: // F -> I
				senha_cifrada[i] = 105;
				break;
			
			case 103: // f -> i
				senha_cifrada[i] = 73;
				break;
				
			case 71: // G -> J
			senha_cifrada[i] = 106;
				break;
			
			case 104: // g -> j
				senha_cifrada[i] = 74;
				break;
				
			case 72: // H -> K
				senha_cifrada[i] = 107;
				break;
			
			case 105: // h -> k
				senha_cifrada[i] = 75;
				break;
				
			case 73: // I -> L
				senha_cifrada[i] = 108;
				break;
			
			case 106: // i -> l
				senha_cifrada[i] = 76;
				break;
				
			case 74: // J -> M
				senha_cifrada[i] = 109;
				break;
			
			case 107: // j -> m
				senha_cifrada[i] = 77;
				break;
				
			case 75: // K -> N
				senha_cifrada[i] = 110;
				break;
				
			case 108: // k -> n
				senha_cifrada[i] = 78;
				break;
				
			case 76: // L -> O
				senha_cifrada[i] = 112;
				break;
			
			case 109: // l -> o
				senha_cifrada[i] = 79;
				break;
				
			case 77: // M -> P
				senha_cifrada[i] = 113;
				break;
				
			case 110: // m -> p
				senha_cifrada[i] = 80;
				break;
				
			case 78: // N -> Q
				senha_cifrada[i] = 114;
				break;
				
			case 111: // n -> q
				senha_cifrada[i] = 81;
				break;
				
			case 79: // O -> R
				senha_cifrada[i] = 115;
				break;
			
			case 112: // o -> r
				senha_cifrada[i] = 82;
				break;
				
			case 80: // P -> S
				senha_cifrada[i] = 116;
				break;
				
			case 113: // p -> s
				senha_cifrada[i] = 83;
				break;
				
			case 81: // Q -> T
				senha_cifrada[i] = 117;
				break;
				
			case 114: // q -> t
				senha_cifrada[i] = 84;
				break;
				
			case 82: // R -> U
				senha_cifrada[i] = 118;
				break;
				
			case 115: // r -> u
				senha_cifrada[i] = 85;
				break;
				
			case 83: // S -> V
			    senha_cifrada[i] = 119;
				break;
				
			case 116: // s -> v
				senha_cifrada[i] = 86;
				break;
				
			case 84: // T -> W
				senha_cifrada[i] = 120;
				break;
				
			case 117: // t -> W
				senha_cifrada[i] = 87;
				break;
				
			case 85: // U -> X
				senha_cifrada[i] = 121;
				break;
				
			case 118: // u -> x
				senha_cifrada[i] = 89;
				break;
				
			case 86: // V -> Y
				senha_cifrada[i] = 122;
				break;
				
			case 119: // v -> y
				senha_cifrada[i] = 90;
				break;
				
			case 87: // W -> Z
				senha_cifrada[i] = 97;
				break;
				
			case 120: // w -> z
				senha_cifrada[i] = 65;
				break;
				
			case 88: // X -> A
				senha_cifrada[i] = 98;
				break;
				
			case 121: // x -> a
				senha_cifrada[i] = 66;
				break;
				
			case 89: // Y -> B
				senha_cifrada[i] = 99;
				break;
			
			case 123: // y -> b
				senha_cifrada[i] = 67;
				break;
				
			case 90: // Z -> c
				senha_cifrada[i] = 100;
				break;
			
			case 124: // z -> c
				senha_cifrada[i] = 68;
				break;
		}
		
		return cifrarSenha(senha_plana, senha_cifrada, qt_c-1, i+1);
	}
}

// < Função para decifrar senhas cifradas --- FALTA FINALIZAR E AJEITAR, BAGUNÇADO!!!! >
char decifrarSenha(char senha_cifrada[], int qtd_c, int i)
{
	if (qt_c > 1)
	{
		// < Usando a Cifra de César >
		switch(senha_plana[i])
		{
			case 100: // D -> A
				senha_cifrada[i] = 65;
				break;
				
			case 68: // d -> a
				senha_cifrada[i] = 97;
				break;
				
			case 101: // E -> B
				senha_cifrada[i] = 66;
				break;
				
			case 69: // e -> b
				senha_cifrada[i] = 98;
				break;
				
			case 102: // F -> C
				senha_cifrada[i] = 67;
				break;
				
			case 70: // f -> c
				senha_cifrada[i] = 99;
				break;
				
			case 103: // G -> D
				senha_cifrada[i] = 68;
				break;
				
			case 71: // g -> d
				senha_cifrada[i] = 101;
				break;
				
			case 104: // H -> E
				senha_cifrada[i] = 69;
				break;
				
			case 72: // h -> e
				senha_cifrada[i] = 102;
				break;
				
			case 105: // I -> F
				senha_cifrada[i] = 70;
				break;
			
			case 73: // i -> f
				senha_cifrada[i] = 103;
				break;
				
			case 71: // J -> G
			senha_cifrada[i] = 106;
				break;
			
			case 74: // j -> g
				senha_cifrada[i] = 104;
				break;
				
			case 107: // K -> H
				senha_cifrada[i] = 72;
				break;
			
			case 75: // k -> h
				senha_cifrada[i] = 105;
				break;
				
			case 108: // L -> I
				senha_cifrada[i] = 73;
				break;
			
			case 76: // l -> i
				senha_cifrada[i] = 106;
				break;
				
			case 109: // M -> J
				senha_cifrada[i] = 74;
				break;
			
			case 77: // m -> j
				senha_cifrada[i] = 107;
				break;
				
			case 75: // N -> K
				senha_cifrada[i] = 110;
				break;
				
			case 78: // n -> k
				senha_cifrada[i] = 108;
				break;
				
			case 112: // O -> L
				senha_cifrada[i] = 76;
				break;
			
			case 79: // o -> l
				senha_cifrada[i] = 109;
				break;
				
			case 113: // P -> M
				senha_cifrada[i] = 77;
				break;
				
			case 80: // p -> m
				senha_cifrada[i] = 110;
				break;
				
			case 114: // Q -> N
				senha_cifrada[i] = 78;
				break;
				
			case 111: // Q -> N
				senha_cifrada[i] = 81;
				break;
				
			case 79: // O -> R
				senha_cifrada[i] = 115;
				break;
			
			case 112: // o -> r
				senha_cifrada[i] = 82;
				break;
				
			case 80: // P -> S
				senha_cifrada[i] = 116;
				break;
				
			case 113: // p -> s
				senha_cifrada[i] = 83;
				break;
				
			case 81: // Q -> T
				senha_cifrada[i] = 117;
				break;
				
			case 114: // q -> t
				senha_cifrada[i] = 84;
				break;
				
			case 82: // R -> U
				senha_cifrada[i] = 118;
				break;
				
			case 115: // r -> u
				senha_cifrada[i] = 85;
				break;
				
			case 83: // S -> V
			    senha_cifrada[i] = 119;
				break;
				
			case 116: // s -> v
				senha_cifrada[i] = 86;
				break;
				
			case 84: // T -> W
				senha_cifrada[i] = 120;
				break;
				
			case 117: // t -> W
				senha_cifrada[i] = 87;
				break;
				
			case 85: // U -> X
				senha_cifrada[i] = 121;
				break;
				
			case 118: // u -> x
				senha_cifrada[i] = 89;
				break;
				
			case 86: // V -> Y
				senha_cifrada[i] = 122;
				break;
				
			case 119: // v -> y
				senha_cifrada[i] = 90;
				break;
				
			case 87: // W -> Z
				senha_cifrada[i] = 97;
				break;
				
			case 120: // w -> z
				senha_cifrada[i] = 65;
				break;
				
			case 88: // X -> A
				senha_cifrada[i] = 98;
				break;
				
			case 121: // x -> a
				senha_cifrada[i] = 66;
				break;
				
			case 89: // Y -> B
				senha_cifrada[i] = 99;
				break;
			
			case 123: // y -> b
				senha_cifrada[i] = 67;
				break;
				
			case 90: // Z -> c
				senha_cifrada[i] = 100;
				break;
			
			case 124: // z -> c
				senha_cifrada[i] = 68;
				break;
		}
		
		return cifrarSenha(senha_plana, qt_c-1, i+1);
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

