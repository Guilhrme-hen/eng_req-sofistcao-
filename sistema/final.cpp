#include <stdio.h>
#include <stdlib.h> 
 
 main(){
 char nomeusuario[50];
 double senha,confirmacao;
 int opcao,cpffuncionario,cpfcliente,codmerc,qntmerc,cpfcliente1;
 char nomefuncionario[50],nomecliente[50],nomemerc[50],ServoProd,endfuncionario[60],endcliente[60],mercpedido[60],pagamento[50];


printf("   _____  ____  ______ _____  _____ _______ _____ _____          ____  \n  / ____|/ __ \\|  ____|_   _|/ ____|__   __|_   _/ ____|   /\\   / __ \\   |                 __\n | (___ | |  | | |__    | | | (___    | |    | || |       /  \\ | |  | |  |                /\\/'-,\n  \\___ \\| |  | |  __|   | |  \\___ \\   | |    | || |      / /\\ \\| |  | |  |        ,--'''''   / \n  ____) | |__| | |     _| |_ ____) |  | |   _| || |____ / ____ \\ |__| |  |  ____,'.  )       \\___ \n |_____/ \\____/|_|    |_____|_____/   |_|  |_____\\_____/_/    \\_\\____/   | '''''''------'''''----- \n\n");

printf ("----------------cadastro de usuario----------------\n\n\ndigite o nome de usuario: ");
scanf ("%s" ,&nomeusuario);
	
printf ("\ndigite a senha usando somente numeros para cadastra o usuario: ");
scanf ("%i" ,&senha);

printf ("\nconfirme a senha de cadastro: ");
scanf ("%i" ,&confirmacao);

if (senha == confirmacao){

	printf ("\n\n\t\tseja bem vindo ao sistema Sofistcao sr %s",nomeusuario);

printf (" Escolha uma opcao...\n");	
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
		printf("   _____  ____  ______ _____  _____ _______ _____ _____          ____  \n  / ____|/ __ \\|  ____|_   _|/ ____|__   __|_   _/ ____|   /\\   / __ \\   |                 __\n | (___ | |  | | |__    | | | (___    | |    | || |       /  \\ | |  | |  |                /\\/'-,\n  \\___ \\| |  | |  __|   | |  \\___ \\   | |    | || |      / /\\ \\| |  | |  |        ,--'''''   / \n  ____) | |__| | |     _| |_ ____) |  | |   _| || |____ / ____ \\ |__| |  |  ____,'.  )       \\___ \n |_____/ \\____/|_|    |_____|_____/   |_|  |_____\\_____/_/    \\_\\____/   | '''''''------'''''----- \n\n");
		printf ("------cadasto de funcionario------\n");
		printf ("digite o nome do funcionario: ");
		scanf ("%s" ,&nomefuncionario);
		printf ("\n");
		printf ("informe o cpf: ");
 		scanf ("%i" ,&cpffuncionario);
 		printf ("\n");
 		fflush(stdin);
		printf ("informe o endereco: ");
 		scanf ("%[^\n]s" ,&endfuncionario);
		printf ("\n\n");
printf ("funcionario %s cadastrado com sucesso\n", nomefuncionario);
		system ("pause");

	 case 2:
 		system ("cls");
		printf("   _____  ____  ______ _____  _____ _______ _____ _____          ____  \n  / ____|/ __ \\|  ____|_   _|/ ____|__   __|_   _/ ____|   /\\   / __ \\   |                 __\n | (___ | |  | | |__    | | | (___    | |    | || |       /  \\ | |  | |  |                /\\/'-,\n  \\___ \\| |  | |  __|   | |  \\___ \\   | |    | || |      / /\\ \\| |  | |  |        ,--'''''   / \n  ____) | |__| | |     _| |_ ____) |  | |   _| || |____ / ____ \\ |__| |  |  ____,'.  )       \\___ \n |_____/ \\____/|_|    |_____|_____/   |_|  |_____\\_____/_/    \\_\\____/   | '''''''------'''''----- \n\n");
		printf ("\n\n------cadasto de cliente-----\n");
		printf ("digite o nome do cliente: ");
		scanf ("%s" ,&nomecliente);
		printf ("\n");
		fflush(stdin);
		printf ("informe o cpf: ");
		scanf ("%i" ,&cpfcliente);
 		printf ("\n");
 		fflush(stdin);
		printf ("informe o endereco: ");
 		scanf ("%s" ,&endcliente);
 		printf ("\n");
 		fflush(stdin);
printf ("cliente %s cadastrado com sucesso\n", nomecliente); 
		system ("pause");

	case 3:
		system ("cls");
		printf("   _____  ____  ______ _____  _____ _______ _____ _____          ____  \n  / ____|/ __ \\|  ____|_   _|/ ____|__   __|_   _/ ____|   /\\   / __ \\   |                 __\n | (___ | |  | | |__    | | | (___    | |    | || |       /  \\ | |  | |  |                /\\/'-,\n  \\___ \\| |  | |  __|   | |  \\___ \\   | |    | || |      / /\\ \\| |  | |  |        ,--'''''   / \n  ____) | |__| | |     _| |_ ____) |  | |   _| || |____ / ____ \\ |__| |  |  ____,'.  )       \\___ \n |_____/ \\____/|_|    |_____|_____/   |_|  |_____\\_____/_/    \\_\\____/   | '''''''------'''''----- \n\n");
		printf ("\n\n------cadasto de mercadoria-----\n\n");
		printf ("digite o nome da mercadoria: ");
		scanf ("%s" ,&nomemerc);
		printf ("\n");
		fflush(stdin);
		printf ("informe o cod da mercadoria: ");
 		scanf ("%i" ,&codmerc);
 		printf ("\n");
 		fflush(stdin);
		printf ("informe a quantidade: ");
 		scanf ("%i" ,&qntmerc);
	 	printf ("\n");
	 	fflush(stdin);
		printf ("informe [P] para produto e [S] para servico: ");
 		scanf ("%c" ,&ServoProd);
 		printf ("\n");
 		fflush(stdin);
printf ("item %s cadastrado com sucesso\n",nomemerc); 
		system ("pause");
	
	case 4:
	    system ("cls");
		printf("   _____  ____  ______ _____  _____ _______ _____ _____          ____  \n  / ____|/ __ \\|  ____|_   _|/ ____|__   __|_   _/ ____|   /\\   / __ \\   |                 __\n | (___ | |  | | |__    | | | (___    | |    | || |       /  \\ | |  | |  |                /\\/'-,\n  \\___ \\| |  | |  __|   | |  \\___ \\   | |    | || |      / /\\ \\| |  | |  |        ,--'''''   / \n  ____) | |__| | |     _| |_ ____) |  | |   _| || |____ / ____ \\ |__| |  |  ____,'.  )       \\___ \n |_____/ \\____/|_|    |_____|_____/   |_|  |_____\\_____/_/    \\_\\____/   | '''''''------'''''----- \n\n");
		printf ("\n------pedido-----\n");
		printf ("digite o nome da mercadoria: ");
		scanf ("%s", &mercpedido);
		printf ("\n");
		printf ("digite o cpf do cliente: ");
		scanf ("%i", &cpfcliente1);
		fflush(stdin);
		printf ("\n"); 
		printf ("digite a forma de pagamento entre cartao\ndinheiro\npix\n");
		scanf("%s", &pagamento);
		printf ("opicao escolida foi %s",pagamento);
}
system ("cls");
printf ("------ordem de servico/pedido------\n");
printf ("nome do atendente %s\nnome do cliente %s\nservico/produto %s forma de pagamento",nomefuncionario,nomecliente,mercpedido,pagamento);


}


else 
{
	printf ("\nsenhas nao conferem\n\nporfavor reinicie o programa e tente novamente");
}

 
 
 }
