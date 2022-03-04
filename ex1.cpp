#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

char nome[30];
char endereco[30];
int idade;
int cpf;

printf("nome \n");
scanf("%s" , &nome);

printf("endereco \n");
scanf("%S" , &endereco);

printf("idadea \n");
scanf("%d" , &idade);

printf("cpf \n");
scanf("%d", &cpf);

printf("\n nome : %s", nome);
printf("\n endereco :%S", endereco);
printf("\n idade :%d", idade);
printf("\n cpf:%d", cpf);

	return 0;
}
