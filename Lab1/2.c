/*
#include <stdio.h>
#include <math.h>
#include <locale.h>


int main(void)
{
	setlocale(LC_ALL, "RUS");
	
	
	float a, x, y, z;


	printf("x = ");
	scanf_s("%f", &x);
	printf("y = ");
	scanf_s("%f", &y);
	printf("z = ");
	scanf_s("%f", &z);


	a = x + y + z; //сумма трех действительных чисел


	if ( x == y || x == z || y == z )
	{
		printf("Веденные числа не подходят по условию задачи");
		return(0);
	}
	
	
	if (a < 1)
	{
		if (x < y && x < z)
		{
			x = (y + z)/2;
		}
		else if (y < x && y < z)
		{
			y = (x + z) / 2;
		}
		else
		{
			z = (x + y) / 2;
		} 	
	}
	else
	{
		if (x < y)
		{
			x = (y + z) / 2;
		}
		else
		{
			y = (x + z) / 2;
		}
	}
	
	
	printf("x = %f\n", x);
	printf("y = %f\n", y);
	printf("z = %f\n", z);
	
	
	return(0);
}
*/
