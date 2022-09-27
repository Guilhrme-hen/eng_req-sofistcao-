#include <stdio.h>
#include <stdlib.h> 
 
 main(){
 char nomeusuario[50];
 double senha,confirmacao,valormerc;
 int opcao,cpffuncionario,cpfcliente,codmerc,qntmerc,cpfcliente1;
 char nomefuncionario[50],nomecliente[50],nomemerc[50],ServoProd,endfuncionario[60],endcliente[60],mercpedido[60],pagamento[50];
 
 printf ("----------------cadastro de usuario----------------\n\n\ndigite o nome de usuario: ");
scanf ("%s" ,&nomeusuario);
	
printf ("\ndigite a senha usando somente numeros para cadastra o usuario: ");
scanf ("%i" ,&senha);

printf ("\nconfirme a senha de cadastro: ");
scanf ("%i" ,&confirmacao);

if (senha == confirmacao){

	printf ("\n\n\t\tseja bem vindo ao sistema Sofistcao sr %s\n",nomeusuario);


 
 printf ("\nEscolha uma opcao...\n\n");	
 printf ("[1] cadastro de funcionario\n");	
 printf ("[2] cadastro de cliente\n");	
 printf ("[3] cadastro de mercadoria\n");	
 printf ("[4] emitir pedido\n");	
 printf ("digite a opicao desejada: ");
 		
 scanf ("%i" ,&opcao);	
 	
 	switch (opcao)
	 
	 {
 		case 1:
 		system ("cls");
		printf ("------Cadasto de funcionario------\n\n");
		printf ("Digite o nome do funcionario: ");
		scanf ("%s" ,&nomefuncionario);
		printf ("\n");
		printf ("Informe o cpf: ");
 		scanf ("%i" ,&cpffuncionario);
 		printf ("\n");
 		fflush(stdin);
		printf ("Informe o endereco: ");
 		scanf ("%[^\n]s" ,&endfuncionario);
		printf ("\n\n");
printf ("Funcionario %s cadastrado com sucesso\n\n", nomefuncionario);
		system ("pause");

	 case 2:
 		system ("cls");
		printf ("------Cadasto de cliente-----\n\n");
		printf ("Digite o nome do cliente: ");
		scanf ("%s" ,&nomecliente);
		printf ("\n");
		fflush(stdin);
		printf ("Informe o cpf: ");
		scanf ("%i" ,&cpfcliente);
 		printf ("\n");
 		fflush(stdin);
		printf ("Informe o endereco: ");
 		scanf ("%s" ,&endcliente);
 		printf ("\n");
 		fflush(stdin);
printf ("Cliente %s cadastrado com sucesso\n\n", nomecliente); 
		system ("pause");

	case 3:
		system ("cls");
		printf ("-----Cadasto de mercadoria-----\n\n");
		fflush(stdin);
		printf ("Informe o cod da mercadoria: ");
 		scanf ("%i" ,&codmerc);
 		printf ("\n");
 		fflush(stdin);
		printf ("Digite o nome da mercadoria: ");
		scanf ("%s" ,&nomemerc);
		printf ("\n");
		printf ("Informe o valor da mercadoria mercadoria: ");
		scanf ("%lf.2" ,&valormerc);
		printf ("\n");
		printf ("Informe a quantidade: ");
 		scanf ("%i" ,&qntmerc);
	 	printf ("\n");
	 	fflush(stdin);
		printf ("Informe [P] para produto e [S] para servico: ");
 		scanf ("%c" ,&ServoProd);
 		printf ("\n");
 		fflush(stdin);
printf ("Item %s cadastrado com sucesso\n\n",nomemerc); 
		system ("pause");
	
	case 4:
		system ("cls");
		printf ("\n------Pedido-----\n\n");
		printf ("Digite o nome da mercadoria: ");
		scanf ("%s", &mercpedido);
		printf ("\n");
		printf ("Digite o cpf do cliente: ");
		scanf ("%i", &cpfcliente1);
		fflush(stdin);
		printf ("\n"); 
		printf ("Digite a forma de pagamento entre\ncartao\ndinheiro\npix\n");
		scanf("%s", &pagamento);
		printf ("Opicao escolida foi %s\n\n",pagamento);
		system ("pause");
}
system ("cls");
printf ("------ordem de servico/pedido------\n");
printf ("Nome do atendente: %s\nNome do cliente: %s\nServico/produto: %s\nPreço da compra: %.2lf\nforma de pagamento %s",nomefuncionario,nomecliente,mercpedido,valormerc,pagamento);
 }

else 
{
	printf ("\nsenhas nao conferem\n\nporfavor reinicie o programa e tente novamente");
}
}
