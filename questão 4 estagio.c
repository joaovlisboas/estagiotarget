#include <stdio.h>
void porcentagem (float estado, float ftmensal);
void main()
{
	float sp = 67836.43, rj = 36678.66, mg = 29229.88, es = 27165.48, outros = 19849.53,faturamentomensal;
	faturamentomensal = sp+rj+mg+es+outros;	
	porcentagem(sp,faturamentomensal);
	porcentagem(rj,faturamentomensal);
	porcentagem(mg,faturamentomensal);
	porcentagem(es,faturamentomensal);
	porcentagem(outros,faturamentomensal);
	
}
void porcentagem (float estado, float ftmensal)
{
	float percentual;
	percentual = (estado*100)/ftmensal;
	printf("%f\n",percentual);
}
