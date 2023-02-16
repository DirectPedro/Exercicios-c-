#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Cliente {

    char nome[100], sexo[1];

    Cliente()
    {
     strcpy (nome, " ");
     strcpy (sexo, " ");
    }
    void ler(){
    printf ("\nDigite o nome: ");
    scanf ("%s", nome);
    printf ("\nQual o Sexo? ");
    scanf("%s", sexo);
    }
    void imprimir(){
    printf ("\n_______________________________________");
    printf ("\nNome: %s", nome);
    printf ("\nSexo: %s", sexo);
    }
};

struct Idade {
    int dia, mes, ano, idadee, calculo;
    int diaa, mesa, anoa;

    Idade()
    {
        dia = 0;
        mes = 0;
        ano = 0;
        diaa = 16;
        mesa = 2;
        anoa = 2023;
        idadee = 0;
        calculo = 0;
    }

    void leridade() {
        printf("\nData de Nascimento(dd mm yyyy): ");
        scanf("%d %d %d", &dia, &mes, &ano);
    }

    void imprimiridade () {


        calculo =   (365*anoa + 30*mesa + diaa) - (365*ano + 30*mes + dia);
        idadee = calculo / 365;



        printf ("\nIdade: %d", idadee);
        printf ("\nData de Nascimento: %d/%d/%d", dia, mes, ano);
        printf ("\n_______________________________________");
    }

};

int main () {
	int escolha;
	Cliente c[50];
	Idade d[50];
	int i;
	do {

	printf ("\n..........MENU...........");
	printf("\n(1)- Cadastrar Cliente");
	printf("\n(2)- Listar Cliente");
	printf("\n(3)- Sair");
	printf("\nEscolha: ");
	scanf ("%d", &escolha);
	if (escolha != 1 && escolha != 2 && escolha != 3) {

        printf("\nErro, escolha uma opcao que esteja no menu!");
        printf ("\nEscolha: ");
        scanf("%d", &escolha);
	}

	switch (escolha){
		case 1 :
			c[i].ler();
			d[i].leridade();
			i++;
			break;
		case 2 :
			for (int j = 0; j < i; j++){
				c[j].imprimir();
				d[j].imprimiridade();
			}
			break;

		case 3 :
		return 0;
			break;


}
}while (escolha != 3);



return 0;
}

