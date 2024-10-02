#include<stdio.h> //biblioteca de comunicação com o usuário 
#include<stdlib.h> //biblioteca de alocação de espaço em memória
#include<locale.h> //biblioteca de alocações de texto por região 
#include<string.h> //biblioteca resposavel pela string
int registro()
{
 char arquivo[40];
 char cpf[11];
 char nome[40];
 char sobrenome[40];
 char cargo [40];

 printf("Digite o cpf a ser cadastrado!\n");
  scanf("%s",cpf);
  
  strcpy(arquivo, cpf);
  
  FILE *file;
  file = fopen(arquivo,"w");
  fprintf(file,cpf);
  fclose(file);
  
  file = fopen(arquivo,"a");
  fprintf(file,",");
  fclose(file);

  
  printf("Digite o nome a ser cadastrado!\n");
  scanf("%s",nome);
  
  file = fopen(arquivo,"a");
  fprintf(file,nome);
  fclose(file);
  
   file = fopen(arquivo,"a");
  fprintf(file,",");
  fclose(file);
  
  printf("Digite o sobrenome a ser cadastrado!\n");
  scanf("%s",sobrenome);
  
  file = fopen(arquivo,"a");
  fprintf(file,sobrenome);
  fclose(file);
  
   file = fopen(arquivo,"a");
  fprintf(file,",");
  fclose(file);
  
  printf("Digite o cargo a ser cadastrado!\n");
  scanf("%s",cargo);
  
  file = fopen(arquivo,"a");
  fprintf(file,cargo);
  fclose(file);
  
   file = fopen(arquivo,"a");
  fprintf(file,",");
  fclose(file);
  
  system("pause");
}

int consulta()
	
{
setlocale(LC_ALL,"portuguese");

 char cpf[11];
 char conteudo[200];
 
 printf("Digite o cpf a ser consultado:\n");
 scanf("%s",cpf);
 
 FILE *file;
 file = fopen(cpf,"r");
  
  if(file == NULL)
  {
  	printf("não identificado!\n");
  }
 while (fgets(conteudo,200,file) != NULL)
{
printf("\nEssas são as informações do usuário:");
printf("%s",conteudo);
}
system("pause");
}

int deletar()
{ setlocale(LC_ALL,"portuguese");

  char cpf[11];
  printf("Digite o cpf do usuário a ser deletado:\n");
  scanf("%s",cpf);
  
  remove(cpf);
 
 FILE *file;
 file = fopen (cpf,"r");
 
 if(file == NULL)
 {
 	printf("Usuário não identificado! \n");
 	system ("pause");
 }
}

int main() //definindo variaveis 
{
int opcao=0;
	
	int laco=1;
	for(laco=1;laco=1;)
	{
	system("cls");
	
	setlocale(LC_ALL,"portuguese"); //definindo linguagem
	
	
	printf("Cartório da empresa \n\n");
	printf("Selecione a opção de acordo: \n\n");
	
printf("\t1 - Registrar nomes\n");
printf("\t2 - consultar nomes\n");
printf("\t3 - deletar nomes\n");
printf("\t4 - sair do sistema\n");
printf("Opção:");
scanf("%d", &opcao);
system("cls");

switch(opcao)
{
	case 1: 
		registro();
	break;
	
	case 2:
		consulta();
	break;
	
	case 3:
    	deletar();
	break;
	
	case 4:
		printf("Obrigado por utilizar o sistema!");
		return 0;
	break;
	
	default:
	    printf("A opção selecionada não existe!\n"); //fim da seleção 
	system("pause");
	break;}
}
}








