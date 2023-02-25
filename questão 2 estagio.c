#include <stdio.h>
int fibonacci(int n);
void main()
{
	int n = 21;
	if(fibonacci(n) == n)
	{
		printf("O numero pertence a sequencia");
	}
	else
	{
		printf("O numero não pertence a sequencia");
	}	
}
int fibonacci(int n)
{
	int fib1= 0 ,fib2=1, soma=0;
	while(soma < n)
	{
		soma = fib1 + fib2;                    
	    fib1 = fib2;                           
	 	fib2 = soma;
	}
}
