/*
#include <stdio.h>


int main(void)
{	
	#define SIZE 100
	int n;

		
	printf("n = ");
	scanf_s("%d", &n);
	
	
	if (n <= 0 || n > SIZE)
	{
		printf("n out of range!\n");
		return(0);
	}
	
		
	int a[SIZE];

	
	for (int i = 0; i < n; i++) 
	{	
		a[i] = i+1;
		//if(i % 2 !=0) a[i]*=-1;
		printf("%d ", a[i]);
	}
	
	
	
	int bool;	//Истинность чередования
	
	
	//Проверка на истинность чередования знаков
	for(int i = 0; i < n-1; i++)
	{
		
		if(a[i] >= 0 && a[i+1] < 0 || a[i] <= 0 && a[i+1] >0) bool = 1;
		else bool = 0;
		
	}
	printf("\nbool = %i\n", bool);
		
		
	//Поиск максимального и минимального значения
	int max = a[0];
	int min = a[0];
	for (int i = 1; i < n; i++)
	{
		if (max < a[i]) max = a[i];
		if (min > a[i]) min = a[i];
		
	}
	printf("min = %d\n", min);
	printf("max = %d\n", max);
	
	
	//Замена значений
	if (bool == 1)
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i] == max) a[i] = min;
		}
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i] == min) a[i] = max;
		}	
	}
	
	
	//Вывод массива
	printf("a = ");
	for(int i = 0; i < n; i++)
	{	
		printf("%d ", a[i]);
	}


	return(0);
	
}
*/
