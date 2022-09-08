#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
// Aluno Millyana de Souza Silva
// Programa criado para gerar Cartelas de Bingo com numeros aleatorios.
int main()
{
    int quantNum; // Quantidade de números por cartela.
    int numCart; // Número de cartelas. 
    int quantCart; // Entrada para informar o número de cartela a serem geradas.
    setlocale(LC_ALL, "Portuguese");
    
    printf("=======================================\n");
     printf("================ BINGO ================\n");
	  printf("=======================================\n\n");
	
	    printf("Quantas cartelas deseja criar?\n");
	       scanf("%d", &quantCart);
	    fflush(stdin);
	    system("cls");
	
	srand( time(NULL) );
    for (numCart=1 ; numCart<= quantCart ; numCart++){                     
    	printf("\n========== Cartela %d ============  \n\n" ,numCart);
		for(quantNum=1 ; quantNum <= 10; quantNum++){
        	printf("         Numero %d: %d\n",quantNum, rand() % 99);
    	}
	}	
}
