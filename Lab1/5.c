/*
#include <stdio.h>
#include <math.h>
#include <locale.h>


int main(void)
{
	setlocale(LC_ALL, "RUS");
	
		
	int n;
	float sum = 0, k = 0;
	
	
	printf("n = ");
	scanf_s("%d", &n);
	
	
	if(n < 1) 
	{
		printf("Невозможно выполнить операцию");
		return(0);
	}


	for(int i = 1; i <= n; i++)
	{

		sum = 1 / (sin(i) + k) + sum; 
		k = sin(i) + k;

	}
	
	
	printf("sum = %f", sum);
}
*/
