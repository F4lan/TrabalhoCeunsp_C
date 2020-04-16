#include <stdio.h>
#include <conio.h>
#include <string.h>

struct Funcionario{
		char nome[20];
		char cargo[20];
		char endereco[30];
		int cpf;
		int idade;
		float salario;
}funcs[4];

void GeraFunc(){
	for(int i=0; i<=4; i++){
		
		fflush(stdin); // Limpa o buffer do teclado
		
		printf("%d)\n", i);
		printf("Nome: ");
		gets(funcs[i].nome); // Usando GET para strings para Obter multiplas palavras como Nome e Sobrenome
					
		printf("Cargo: ");
		gets(funcs[i].cargo);
				
		printf("Endereco: ");
		gets(funcs[i].endereco);
					
		printf("CPF: ");
		scanf("%d", &funcs[i].cpf);
			
		printf("Idade: ");
		scanf("%d", &funcs[i].idade);
			
		printf("Salario: ");
		scanf("%f", &funcs[i].salario);
		
		printf("--------------------------------------------------\n");
	}
}

void ImprimeFunc(){
	float total = 0;
	
	for(int i=0; i<=4; i++){
		
		printf("Nome: %s ..........", funcs[i].nome);
		printf("R$%.2f \n", funcs[i].salario);
		total = total + funcs[i].salario;
	}
	printf("--------------------------------------------------\n");
	printf("Total: .......................... R$%.2f",total);
	
}

void SalarioCargo(char cargo[20]){
	float total;
	
	for(int i=0; i<=4; i++){
		if(strcmp(cargo,funcs[i].cargo) == 0){ // Função strcmp para comparar strings, retorna 0 caso igual.
			total = total + funcs[i].salario;
		}
		
	}
	
	printf("Cargo selecionado: %s\n", cargo);
	printf("Total Gasto ......... R$%.2f\n", total);
	printf("\n--------------------------------------------------\n");
}

main(){
	char cargo[20];
	
	printf("\n---------- Cadastro de Funcionarios --------------\n");
	
	GeraFunc();
	
	printf("\n\n----------   Listar Funcionarios  --------------\n\n");
	
	ImprimeFunc();
	
	printf("\n\n----------    Salario por Cargo  --------------\n\n");
	
	fflush(stdin);
	
	printf("Selecione um cargo para Consulta de Gasto: ");
	gets(cargo);
	
	SalarioCargo(cargo);
	
}
 
