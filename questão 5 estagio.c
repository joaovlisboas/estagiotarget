#include <stdio.h>
#include <string.h>
void inverter(char s[]);
void main ()
{
	char s[10];
	printf("Digite uma palavra: ");
	gets(s);
	inverter(s);
}
void inverter(char s[])
{
    int i, aux, fim, tam = strlen(s);
    fim = tam - 1;
    for(i = 0; i < tam/2; i++){
        aux = s[i];
        s[i] = s[fim];
        s[fim] = aux;
        fim--;
    }
    printf("%s",s);
}
