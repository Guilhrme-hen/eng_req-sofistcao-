#include <stdio.h>
#include <stdlib.h> 
 main(){
 
 int opcao,cpffuncionario,cpfcliente,codmerc,qntmerc,mercpedido,pagamento;
 char nomefuncionario[50],nomecliente[50],nomemerc[50],ServoProd,endfuncionario[60],endcliente[60];
 printf ("Escolha uma opcao...\n");	
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
		printf ("------cadasto de funcionario------\n");
		printf ("digite o nome do funcionario: ");
		scanf ("%s" ,&nomefuncionario);
		printf ("informe o cpf: ");
 		scanf ("%i" ,&cpffuncionario);
 		printf ("informe o endereco: ");
 		scanf ("%s" ,&endfuncionario);
printf ("funcionario %s cadastrado com sucesso", nomefuncionario); 

	 case 2:
 		
		printf ("\n------cadasto de cliente-----\n");
		printf ("digite o nome do cliente: ");
		scanf ("%[^\n]" ,&nomecliente);
		printf ("informe o cpf: ");
 		scanf ("%i" ,&cpfcliente);
 		printf ("informe o endereco: ");
 		scanf ("%s" ,&endcliente);
printf ("cliente %s cadastrado com sucesso", nomecliente); 

	case 3:
		
		printf ("\n------cadasto de mercadoria-----\n");
		printf ("digite o nome da mercadoria: ");
		scanf ("%s" ,&nomemerc);
		printf ("informe o cod da mercadoria: ");
 		scanf ("%i" ,&codmerc);
 		printf ("informe a quantidade: ");
 		scanf ("%i" ,&qntmerc);
	 	printf ("informe [P] para produto e [S] para servico: ");
 		scanf ("%c" ,&ServoProd);
printf ("item %s cadastrado com sucesso",nomemerc); 

	case 4:
	printf ("digite o cod da mercadoria: ");
	scanf ("%i", &mercpedido);
	printf ("%d" ,nomemerc);
	printf ("digite o cpf do cliente: ");
	scanf ("%i", &cpfcliente);
	printf ("%s" ,nomecliente);
	printf ("digite a opicao desejada\n[1] para cartao\n[2]para dinheiro\n[3]para pix");
	
	


}


 
 
 
 }
