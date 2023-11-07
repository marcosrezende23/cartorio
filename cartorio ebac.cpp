#include <stdio.h> // biblioteca de comunicação com o usuario // primeira parte do projeto
#include <stdlib.h> // biblioteca de alocação de espaço em memoria
#include <locale.h> // biblioteca de alocações de texto por região
#include <string.h> // biblioteca responsavel por cuidar das string
int registrar()
{
	char arquivo[40];
	char cpf[40];                         // sexta parte 
	char nome[40];
	char sobrenome[40];
	char cargo[40];
		
	
	printf("CPF a ser cadastrado:\n "); //responsavel por criar o cadastro do usuario
	scanf("%s",cpf);
	
	strcpy(arquivo, cpf);        //responsavel por copiar os valores da string
	
	FILE *file; //criar o arquivo na pasta 	
	file = fopen(arquivo, "w"); //criar o arquivo na pasta 
	fprintf(file,cpf);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Nome a ser cadastrado:\n ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado:\n ");
	scanf("%s",sobrenome);
	
	file=fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado:\n ");
	scanf("%s",cargo);
	
	file=fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");
}


int consultar() // responsavel pela consulta do usuario no sistema


{
	
		setlocale(LC_ALL, "portuguese");
		
	char cpf[40];                        // setima parte
	char conteudo[200];
	
	printf("Digite o CPF do usuario a ser deletado:\n ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)  // == comparação (só para lembrar)
	{
		printf("Não foi possível abrir o arquivo, não localizado. \n");
	}
	
	while (fgets(conteudo, 200, file)!=NULL)
	
	{
		printf("\n Essas são as informações do usuario:\n ");
		printf("%s",conteudo);
		printf("\n\n");
	}
		
	system("pause");

}	


int deletar () // responsavel pela remoção do usuario no sistema

{
	char cpf[40];
	
	printf("Digite o cpf a ser deletado: \n");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("Usuário removido com sucesso!\n");
		system("pause");
	}
}



int main()//começo de tudo(menu)
{
	int opcao=0;    // terceira parte do projeto
	int laco=1;     // quinta parte
	
  	  	for(laco=1;laco=1;)              // quinta parte
	{ 
			system("cls");               // responsavel por limpar a tela
	    
     	setlocale(LC_ALL, "portuguese");	  // segunda parte do projeto //acrescentar os acentos na gramatica
	
     	printf("### CARTORIO EBAC ###\n\n");
	     printf("Escolha a opçao desejada do menu:\n\n");
     	printf("\t1 - Registrar Nomes\n");
     	printf("\t2 - Consultar Nomes\n");
    	printf("\t3 - Deletar Nomes\n");
    	printf("\t4 - Sair do Sistema\n\n");
    	printf("Opçao:");                      //quarta parte
	
    	scanf("%d", &opcao);               //terceira parte do projeto
	
     	system("cls");                     // terceira parte do projeto/deletar todas as mensagens anteriores quando o item for escolhido
     	
     	switch (opcao)
     	{
     		
     	case 1:     		
     	registrar();
   		system("pause");    		
	    break;
	    
	    case 2:	    	
	    consultar();
    	system("pause");	    	
	    break;
	    
	    case 3: 	    
	    deletar();
		system("pause");     // quinta parte		
		break;
		
		 case 4: 	    
	  	printf("Obrigado por usar o nosso sistema\n");	
		return 0;
		break;
		
		default:			
	    printf("Essa opção nao existe\n");
   		system("pause");    // quinta parte
	    break;
		 }
		 	
	}

	
     	
	    	
	    
	
	
	
}
