#include <stdio.h>

int main ()
{
	int number, h_tab;
	float salario, sal_hora;
	
	scanf("%d%d%f", &number, &h_tab, &sal_hora);
	
	salario = (float) sal_hora * h_tab;
	
	printf("NUMBER = %d\nSALARY = U$ %.2f\n", number, salario);
	
	
	return 0;
}
