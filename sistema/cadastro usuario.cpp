#include<stdio.h>

int main(){
char nomeusuario[50];
double senha,confirmacao;

printf ("----------------cadastro de usuario----------------\n\n\ndigite o nome de usuario: ");
scanf ("%s" ,&nomeusuario);
	
printf ("\ndigite a senha usando somente numeros para cadastra o usuario: ");
scanf ("%i" ,&senha);

printf ("\nconfirme a senha de cadastro: ");
scanf ("%i" ,&confirmacao);

if (senha == confirmacao){

	printf ("\n\n\t\tseja bem vindo ao sistema Sofistcao sr %s",nomeusuario);
}
else 
{
	printf ("\nsenhas nao conferem\n\nporfavor reinicie o programa e tente novamente");
}

}
	
