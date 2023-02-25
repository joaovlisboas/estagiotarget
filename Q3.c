#include <stdio.h>
#define TAM 10
void preencherVetor (int v[], int tamanho);
void exibirVetor (int v[], int tamanho);
int menorvalor(int v[], int tamanho);
int maiorvalor(int v[], int tamanho);
int diasupmedia(int v[], int tamanho);
void main ()
{
	int v[TAM];
	preencherVetor (v, TAM);
	exibirVetor (v, TAM);
	menorvalor (v,TAM);
	maiorvalor (v,TAM);
	diasupmedia (v,TAM);
}
int menorvalor(int v[], int tamanho)
{
	int i=0, menor;
	do
	{
		menor = v[i];
		i++;
	}
	while(menor == 0);
	for (i=0;i<tamanho;i++)
	{
		if(v[i] < menor && v[i] != 0)
		{
			menor = v[i];	
		}	
	}
	printf("Menor valor: %d\n", menor);	
}
int maiorvalor(int v[], int tamanho)
{
	int i=0, maior = 0;
	for (i=0;i<tamanho;i++)
	{
		if(v[i] > maior)
		{
			maior = v[i];	
		}	
	}
	printf("Maior valor: %d\n", maior);	
}
int diasupmedia(int v[], int tamanho)
{
	int i=0, soma = 0, ndias = 0, mes = TAM;
	float media;
	for (i=0;i<tamanho;i++)
	{
		if(v[i] == 0)
		{
			mes--;
		}
		else
		{
			soma=soma+v[i];			
		}
	}	
	media = soma / mes;
	printf("Media: %f\n",media);
	for (i=0;i<tamanho;i++)
	{
		if(v[i] > media)
		{
			ndias++;
		}
	}
	printf("Dias: %d\n", ndias);
}
void preencherVetor (int v[], int tamanho)
{
	int i;
	srand (time(NULL));
	for (i=0;i<tamanho;i++)
	{
		v[i] = rand()%10;
	}
}
void exibirVetor (int v[], int tamanho)
{
	int i;
	printf ("Elementos do vetor: ");
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", v[i]);
	}
	printf ("\n\n");
}
