// Rafaela Ayumi Uehara RA: 221023577
// Roberto Prado Ribeiro Silva  RA: 221022597

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>

void menu();

void contagem (float valor, int opcao_2){ // CONTAGEM DE CEDULAS E MOEDAS
	int opcao;
	int b100, b50, b20, b10, b5, b2;
	int m1, m50, m25, m10, m01;
    float val;
    val = valor;
    // CONTAGEM E ARMAZENAMENTO NAS VARIAVEIS INT
    b100 = (int) val/100; val = val - b100*100;
    b50 = (int) val/50; val = val - b50*50;
    b20 = (int) val/20; val = val - b20*20;
    b10 = (int) val/10; val = val - b10*10;
    b5 = (int) val/5; val = val - b5*5;
    b2 = (int) val/2; val = val - b2*2;
    m1 = (int) val/1; val = val - m1;
    m50 = (int) val/0.5; val = val - m50*0.5;
    m25 = (int) val/0.25; val = val - m25*0.25;
	m10 = (int) val/0.1; val = val - m10*0.1;
    m01 = (int) val/0.01; val = val - m01*0.01;
    // PRINTF DOS RESULTADOS
    printf ("\n\tDeve-se ser entregue :\n");
    printf ("\t%d notas de 100 Bits\n", b100);
    printf ("\t%d notas de 50 Bits\n", b50);
    printf ("\t%d notas de 20 Bits\n", b20);
    printf ("\t%d notas de 10 Bits\n", b10);
    printf ("\t%d notas de 5 Bits\n", b5);
    printf ("\t%d notas de 2 Bits\n", b2);
    printf ("\t%d moedas de 1 Bits\n", m1);
    printf ("\t%d moedas de 50 CentBits\n", m50);
    printf ("\t%d moedas de 25 CentBits\n", m25);
    printf ("\t%d moedas de 10 CentBits\n", m10);
    printf ("\t%d moedas de 1 CentBits\n\n", m01);
    menu (opcao_2);
}

void extensoChequeCent (long cent){
	int Cent [2];
	Cent [0] = (int)cent/10;
	cent = cent - Cent[0]*10;
	Cent [1]= cent;
	
	if (Cent[0]==1 && Cent[1]!=0){
		switch (Cent[1]){
				case 1 :
					printf ("Onze ");break;
				case 2 :
					printf ("Doze ");break;
				case 3 :
					printf ("Treze ");break;
				case 4 :
					printf ("Quatorze  ");break;
				case 5 :
					printf ("Quinze ");break;
				case 6 :
					printf ("Dezesseis ");break;
				case 7 :
					printf ("Dezessete ");break;
				case 8 :
					printf ("Dezoito ");break;
				case 9 :
					printf ("Dezenove ");break;
		}
	}
	else if (Cent[0]==1 && Cent[1]==0){
		printf ("Dez ");
	}
	else if (Cent[0]>1){
		switch (Cent[0]){
				case 0 : break;
				case 2 :
					printf ("Vinte ");break;
				case 3 :
					printf ("Trinta ");break;
				case 4 :
					printf ("Quarenta  ");break;
				case 5 :
					printf ("Cinquenta ");break;
				case 6 :
					printf ("Sessenta ");break;
				case 7 :
					printf ("Setenta ");break;
				case 8 :
					printf ("Ointenta ");break;
				case 9 :
					printf ("Noventa ");break;
		}
		if (Cent[1]>0){
			switch (Cent[1]){
				case 1 :
					printf ("e Um ");break;
				case 2 :
					printf ("e Dois");break;
				case 3 :
					printf ("e Tres");break;
				case 4 :
					printf ("e Quatro  ");break;
				case 5 :
					printf ("e Cinco ");break;
				case 6 :
					printf ("e Seis ");break;
				case 7 :
					printf ("e Sete");break;
				case 8 :
					printf ("e Oito ");	break;
				case 9 :
					printf ("e Nove ");break;
		}
		}
	}
	printf ("CentBits");
}
void extensoChequeBits (long bits){
	int Bits[4];
	int i;
	Bits [0] = (int)bits/1000;
	bits = bits - Bits [0]*1000;
	Bits [1] = (int)bits/100;
	bits = bits - Bits [1]*100;
	Bits [2] = (int)bits/10;
	bits = bits - Bits [2]*10;
	Bits [3] = (int)bits;
	
	for (i=0; i<2; i++){
		if (i==0){
			switch (Bits [i]){
				case 0 :break;
				case 1 :
					printf ("Mil ");break;
				case 2 :
					printf ("Dois Mil ");break;
				case 3 :
					printf ("Tres Mil ");break;
				case 4 :
					printf ("Quatro Mil ");break;
				case 5 :
					printf ("Cinco Mil ");break;
				case 6 :
					printf ("Seis Mil ");break;
				case 7 :
					printf ("Sete Mil ");break;
				case 8 :
					printf ("Oito Mil ");break;
				case 9 :
					printf ("Nove Mil ");break;
			}
		}
		else if (i==1){
			switch (Bits [i]){
				case 0 :break;
				case 1 :
					printf ("Cem ");break;
				case 2 :
					printf ("Duzentos ");break;
				case 3 :
					printf ("Trezentos ");break;
				case 4 :
					printf ("Quatrocentos ");break;
				case 5 :
					printf ("Quinhentos ");break;
				case 6 :
					printf ("Seiscentos ");break;
				case 7 :
					printf ("Setecentos ");break;
				case 8 :
					printf ("Oitocentos ");	break;
				case 9 :
					printf ("Novecentos ");break;
			}
		}
	}
	
	if (Bits[2]==1 && Bits[3]!=0){
		switch (Bits [3]){
				case 1 :
					printf ("Onze ");break;
				case 2 :
					printf ("Doze ");break;
				case 3 :
					printf ("Treze ");break;
				case 4 :
					printf ("Quatorze  ");break;
				case 5 :
					printf ("Quinze ");break;
				case 6 :
					printf ("Dezesseis ");break;
				case 7 :
					printf ("Dezessete ");break;
				case 8 :
					printf ("Dezoito ");break;
				case 9 :
					printf ("Dezenove ");break;
		}
	}
	else if (Bits[2]==1 && Bits[3]==0){
		printf ("Dez ");
	}
	else if (Bits[2]>1){
		switch (Bits [2]){
				case 0 : break;
				case 2 :
					printf ("Vinte ");break;
				case 3 :
					printf ("Trinta ");break;
				case 4 :
					printf ("Quarenta  ");break;
				case 5 :
					printf ("Cinquenta ");break;
				case 6 :
					printf ("Sessenta ");break;
				case 7 :
					printf ("Setenta ");break;
				case 8 :
					printf ("Ointenta ");break;
				case 9 :
					printf ("Noventa ");break;
		}
		if (Bits[3]>0){
			switch (Bits [3]){
				case 1 :
					printf ("e Um ");break;
				case 2 :
					printf ("e Dois");break;
				case 3 :
					printf ("e Tres");break;
				case 4 :
					printf ("e Quatro  ");break;
				case 5 :
					printf ("e Cinco ");break;
				case 6 :
					printf ("e Seis ");break;
				case 7 :
					printf ("e Sete");break;
				case 8 :
					printf ("e Oito ");	break;
				case 9 :
					printf ("e Nove ");break;
		}
		}
	}
	printf (" Bits");
	
}

void preencheCheque(int opcao_2) // PREENCHIMENTO DO CHEQUE
{
	int verif;
	long bits, cent;
	double valor;
	int dia, mes, ano;
	
	printf("\t\t(Exemplo de data: 22 09 2022)\n"); // DATA
	do{
		printf("\t\tDigite a data do preenchimento: ");
		scanf("%d %d %d",&dia,&mes,&ano);
		if (dia<0||dia>31){
			if (mes<0||mes>12){
				if (ano<2022||ano>2050){
					printf ("\tData invalida\n");
					verif = 0;
				}
			}
		}
		else {
			verif = 1;
		}
	} while(verif=0);
	
	printf ("\t\tInsira o valor :\n"); // INPUT VALOR
	printf ("\t\t Seu limite : 9999,99 Bits\n");
	printf ("Valor :");
	scanf ("%lf", &valor);
	bits = (int)valor;
	cent = (valor-bits)*100;
	printf ("\n\n");
	
	printf ("\t\tEMISSAO DO CHEQUE\n");
	printf ("\tData de emissao : %d / %d / %d\n", dia, mes, ano);
	printf ("\tValor : %.2lf (", valor);
	extensoChequeBits (bits);
	if (cent!=0){
		printf (" e ");
	}
	extensoChequeCent (cent);
	printf (")\n");
	printf ("\n\n");
	
	menu(opcao_2);
	
}


void menu (int opcao_2){ // MENU DO BANCO
    setlocale(LC_ALL, "Portuguese");
	float valor;
    
        printf ("\tOla! Qual operacao deseja fazer ?\n");
        printf ("\t 1 : Saque em dinheiro\n");
        printf ("\t 2 : Preenchimento de cheques\n");
        printf ("\t 3 : Log out\n");
        scanf ("%d", &opcao_2);
        switch (opcao_2){
            case 1 :
                printf ("\tInsira o valor para o saque:");
                scanf ("%f", &valor);
                contagem (valor, opcao_2);
                break;
            case 2 :
                preencheCheque(opcao_2);
                break;
            case 3 :
            	exit (1);
        }

}

int main (){
	int opcao_1, opcao_2, verif, stop, teste;
    int senha, log_senha;
    char user [100];
    char log_user [100];
    system("color F0");
	setlocale(LC_ALL, "Portuguese");

    printf ("\n\n\t\t\t\t\t* Seja Bem Vindo ao Banco Weblands! *\n\n");
    printf ("\t\tPor favor,cadastre-se para ter acesso as funcionalidades do Banco\n\n\n");
	
	do {
		printf ("Insira um usuario de letras e/ou numeros :(Max 100)\n");
		printf ("Usuario :");
		scanf ("%s", &user);	
	}
	while (strlen (user)>100);
	printf ("\n");
	do {
		printf ("Insira uma senha de 4 numeros : ");
		printf ("(Para sua seguranca evite datas de aniversario.)\n");
		printf ("Senha :");
		scanf ("%d", &senha);
	}
	while (senha>9999||senha<1000);
	printf ("\n\n");
	
	printf ("\t\tSeja bem vindo %s ! Por favor realize o log in para acessar sua conta\n\n\n", user);
	do {
		printf ("Usuario: ");
		scanf ("%s", &log_user);
		printf ("Senha: ");
		scanf ("%d", &log_senha);
		if (strcmp (log_user, user)==0){
			if (log_senha==senha){
				verif = 1;
			}
		}
		else {
			printf ("Usuario ou senha incorretos\n");
			verif = 0;
		}
	}
	while (verif == 0);
	
	menu (opcao_2);
}
