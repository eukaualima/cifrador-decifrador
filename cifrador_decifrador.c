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
// < Função de chamada das demais funções >
void menu()
{
	// < Declaração de variáveis locais >
	char texto[1000], senha[21];
	int opcao;
	
	// < Loop do menu >
	do
	{
		printf(">-----------------<[ C R I P T O G R A F I A ]>-----------------<\nEscolha abaixo uma das opcoes que deseja acessar:\n[1]: Criptografar um texto\n\t=> Cifre um texto de ate 999 caracteres.\n[2]: Descriptografar um texto\n\t=> Descriptografe um texto de ate 2.997 caracteres.\n[3]: Criptografar uma senha.\n\t=> Criptografe uma senha de até 20 caracteres.\n[4]: Descriptografar uma senha\n\t=> Descriptografe uma senha de ate 60 caracteres.\n[5]: Sair do programa\n\t=> Fecha imediatamente o programa.\n\n--> Sua opcao: ");
		scanf("%i", &opcao);
		
		switch (opcao)
		{
			case 1:
				
				break;
				
			case 2:
				
				break;
				
			case 3:
				
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

